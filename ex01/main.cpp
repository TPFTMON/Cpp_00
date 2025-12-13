#include "Contact.hpp"
#include "PhoneBook.hpp"

int add_pb(PhoneBook PBook){
    PBook.addContact();
}

int search_pb(PhoneBook PBook){
    PBook;
}

int exit_pb(){
    std::cout << "All your contacts are GONE. Bye!" << std::endl;
}

int main()
{
    PhoneBook   PBook;
    std::string input;

    while (1){
        std::getline(std::cin, input);
        if (input == "ADD"){
            add_pb(PBook);
        } else if (input == "SEARCH"){
            search_pb(PBook);
        } else if (input == "EXIT"){
            exit_pb();
        } else
            continue;
    }

    return (0);
}
