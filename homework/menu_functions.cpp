#include <stdlib.h>

#include "menu_functions.hpp"
#include "menu.hpp"

const NPushkarev::MenuItem *NPushkarev::exit (const MenuItem *current){
    std::exit(0);
}