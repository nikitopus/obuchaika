#include <clocale>
#include <iostream>

int main()
{
    std::setlocale(LC_ALL, "");

    int user_input;
    do
    {
        std::cout << "Обучайка привествует тебя" << std::endl;
        std::cout << "1 - математика" << std::endl;
        std::cout << "0 - лежать" << std::endl;
        std::cout << "Обучайка > ";

        std::cin >> user_input;
        if (user_input == 1)
        {
            // TODO
        }
        else if (user_input == 0)
        {
            exit(0);
        }
        std::cout << std::endl;
    } while (true);
    return 0;
}
