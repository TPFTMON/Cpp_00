#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
}

PhoneBook::~PhoneBook(){
}

void PhoneBook::addContact(){
    std::string prompts[5] = {
        "Enter First Name:",
        "Enter Last Name:",
        "Enter Nickname",
        "Enter Phone Number:",
        "Enter Darkest Secret:"
    };

    Contact NewContact;
    std::string input;

    for (size_t i = 0; i < 5; i++){
        std::cout << prompts[i];

        if (!std::getline(std::cin, input)){
            std::cout << "You've entered Ctrl-D. Your contact is not saved.";
            return ;
        }

        if (input.empty()){
            std::cout << "Field cannot be empty. Write something!";
            i--;
            continue;
        }
        NewContact.SetInfo(i, input);
    }

    // ... Save into the PhoneBook logic:
    if (_numContacts < 8){
        Contacts[_numContacts] = NewContact;
        _numContacts++;
    } else
        Contacts[_numContacts - 1] = NewContact;
}
