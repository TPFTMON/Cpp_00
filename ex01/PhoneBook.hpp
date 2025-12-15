#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <sstream>
# include "Contact.hpp"

class PhoneBook{

private:
    Contact Contacts[8];
    int _numContacts;

public:
    PhoneBook();
    ~PhoneBook();
    void addContact();
    void searchContact() const;
};

#endif
