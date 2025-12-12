#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include "Contact.hpp"

class PhoneBook{

private:
    Contact Contacts[8];

public:
    PhoneBook();
    ~PhoneBook();
    void addContact(int index);
};




#endif
