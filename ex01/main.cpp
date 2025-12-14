#include "Contact.hpp"
#include "PhoneBook.hpp"

void add_pb(PhoneBook PBook){
    PBook.addContact();
}

void search_pb(/*PhoneBook PBook*/){
    std::cout << "FUTURE SEARCH.";
}

void exit_pb(){
    std::cout << "All your contacts are GONE. Bye!" << std::endl;
}

int main()
{
    PhoneBook   PBook;
    std::string input;

    std::cout << "Welcome to your PhoneBook! You have three commands to choose from:\nADD, SEARCH and EXIT\n";
    while (1){
        std::cout << "Command> ";
        std::getline(std::cin, input);
        if (input == "ADD"){
            add_pb(PBook);
        } else if (input == "SEARCH"){
            search_pb(/*PBook*/);
        } else if (input == "EXIT"){
            exit_pb();
        } else
            continue;
    }

    return (0);
}
