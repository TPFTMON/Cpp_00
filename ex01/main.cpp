#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook   PBook;
    std::string input;

    std::cout << "Welcome to your PhoneBook! Here you can save and display contacts.\n"
              << "(You can have a maximum of 8 contacts at a time.)\n---\n"
              << "You have three commands to choose from:\nADD, SEARCH or EXIT\n\n";
    while (1){
        std::cout << "PhoneBook> ";

        if (!std::getline(std::cin, input)){
            std::cout << "Ctrl-D? Seriously? Bye.\n";
            break ;
        }
        if (input == "ADD"){
            PBook.addContact();
        } else if (input == "SEARCH"){
            PBook.searchContact();
        } else if (input == "EXIT"){
            std::cout << "\nAll your contacts are GONE. Bye!" << "\n";
            break ;
        } else
            continue ;
    }

    return (0);
}

// void add_pb(PhoneBook PBook){
//     PBook.addContact();
// }

// void search_pb(PhoneBook PBook){
//     std::cout << "FUTURE SEARCH.";
//     PBook.searchContact();
// }

// void exit_pb(){
//     std::cout << "All your contacts are GONE. Bye!" << std::endl;
// }

// int main()
// {
//     PhoneBook   PBook;
//     std::string input;

//     std::cout << "Welcome to your PhoneBook! You have three commands to choose from:\nADD, SEARCH and EXIT\n";
//     while (1){
//         std::cout << "Command> ";
//         std::getline(std::cin, input);
//         if (input == "ADD"){
//             add_pb(PBook);
//         } else if (input == "SEARCH"){
//             search_pb(/*PBook*/);
//         } else if (input == "EXIT"){
//             exit_pb();
//             break;
//         } else
//             continue;
//     }

//     return (0);
// }
