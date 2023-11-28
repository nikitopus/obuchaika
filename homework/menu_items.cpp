#include "menu_items.hpp"
#include "menu_functions.hpp"

const NPushkarev::MenuItem NPushkarev::EXIT = {
    "0 - Выйти", NPushkarev::exit,&NPushkarev::MAIN
};



const NPushkarev::MenuItem NPushkarev::MAIN = {
    nullptr, NPushkarev::show_menu, nullptr
};