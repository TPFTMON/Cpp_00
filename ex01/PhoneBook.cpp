#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    _numContacts = 0;
}

PhoneBook::~PhoneBook(){
}

void    PhoneBook::addContact(){
    std::cout << "You've decided to create a new contact. Fill in all the fields below: \n\n";

    std::string prompts[5] = {
        "Enter First Name: ",
        "Enter Last Name: ",
        "Enter Nickname: ",
        "Enter Phone Number: ",
        "Enter Darkest Secret: "
    };

    Contact NewContact;
    std::string input;

    for (size_t findex = 0; findex < 5; findex++){
        std::cout << prompts[findex];

        if (!std::getline(std::cin, input)){
            return ;
        }

        if (input.empty()){
            std::cout << "Field cannot be empty. Write something!\n";
            findex--;
            continue ;
        }
        NewContact.setInfo(findex, input);
    }

    if (_numContacts < 8){
        Contacts[_numContacts++] = NewContact;
    } else {
        for (size_t i = 0; i < 7; i++){                           // (7 is num of max contacts - 1)
            Contacts[i] = Contacts[i + 1];
        }
        Contacts[7] = NewContact;
    }

    std::cout << "---\nYour new contact have been saved!\n";
}


// const is because truncate will
// not modify the original string.
// -
// & is because we do a referece
// to a string, not a full copy.
std::string truncate_ten(const std::string& str){
    if (str.length() > 10){
        return (str.substr(0, 9) + ".");
    }
    return (str);
}

void    PhoneBook::searchContact() const { // (const to show that we don't modify anything)
    if (_numContacts == 0){
        std::cout << "There are no contacts, friendo! Go do some ADD commands\n";
        return ;
    }

    std::cout << "Here is the list of contacts for you, buddy:\n\n";
    std::cout << std::setw(10) << std::right << "Index" << "|"
              << std::setw(10) << std::right << "First Name" << "|"
              << std::setw(10) << std::right << "Last Name" << "|"
              << std::setw(10) << std::right << "Nickname" << "|" << "\n";
    for (int i = 0; i < _numContacts; i++){
        std::cout << std::setw(10) << std::right << i << "|"
                  << std::setw(10) << std::right << truncate_ten(Contacts[i].getInfo(0)) << "|"
                  << std::setw(10) << std::right << truncate_ten(Contacts[i].getInfo(1)) << "|"
                  << std::setw(10) << std::right << truncate_ten(Contacts[i].getInfo(2)) << "|" << "\n";
    }

    std::string input;
    std::cout << "\nEnter any index from 0 to " << (_numContacts - 1) << " to display more information about this contact: ";
    if (!std::getline(std::cin, input)){
        return ;
    }
    std::istringstream iss(input);
    int index = -1;
    if (!(iss >> index) || index < 0 || index >= _numContacts){
        std::cout << "Bro... You've entered index out of bounds or some bullshit. Try again later!\n";
        return ;
    }

    std::cout << "---\n";
    std::cout << "First Name    : " << Contacts[index].getInfo(0) << "\n";
    std::cout << "Last Name     : " << Contacts[index].getInfo(1) << "\n";
    std::cout << "Nickname      : " << Contacts[index].getInfo(2) << "\n";
    std::cout << "Phone Number  : " << Contacts[index].getInfo(3) << "\n";
    std::cout << "Darkest Secret: " << Contacts[index].getInfo(4) << "\n";
    std::cout << "The Index     : " << index << "\n";
    std::cout << "---\n";
}
