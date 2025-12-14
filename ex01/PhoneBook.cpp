#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    this->_numContacts = 0;
}

PhoneBook::~PhoneBook(){
}

void PhoneBook::addContact(){
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
            std::cout << "You've entered Ctrl-D. Your contact is not saved.";
            return ;
        }

        if (input.empty()){
            std::cout << "Field cannot be empty. Write something!";
            findex--;
            continue;
        }
        NewContact.setInfo(findex, input);
    }

    if (_numContacts < 8){
        Contacts[_numContacts] = NewContact;
        _numContacts++;
    } else {
        Contacts[_numContacts - 1] = NewContact;
    }
}
