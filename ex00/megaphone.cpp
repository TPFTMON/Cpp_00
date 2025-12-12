#include <iostream>

void    megaphone(int argc, char **argv){
    for (size_t i = 1; i < static_cast<size_t>(argc); i++){
        for (size_t k = 0; argv[i][k] != '\0'; k++){
            char ch = static_cast<char>(std::toupper(argv[i][k]));
            std::cout << ch;
        }
    }
}

int main(int argc, char **argv){
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        megaphone(argc, argv);
    std::cout << std::endl;

    return (0);
}
