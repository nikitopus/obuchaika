#include <iostream>

#include "npushkarev_menu.hpp"
#include "npushkarev_menu_functions.hpp"
#include "npushkarev_menu_items.hpp"

int main()
{
    std::setlocale(LC_ALL, "");

    const NPushkarev::MenuItem *current = &NPushkarev::MAIN;
    do
    {
        current = current->func(current);
    } while (true);

    return 0;
}