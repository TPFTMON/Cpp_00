#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include "Contact.hpp"

class PhoneBook{

private:
    Contact Contacts[8];
    int _numContacts;

public:
    PhoneBook();
    ~PhoneBook();
    void addContact();
};

#endif
