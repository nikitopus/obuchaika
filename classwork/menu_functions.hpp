#pragma once

#include "menu.hpp"

namespace NPushkarev
{
    const MenuItem *show_menu(const MenuItem *current);

    const MenuItem *exit(const MenuItem *current);

    const MenuItem *study_add(const MenuItem *current);
    const MenuItem *study_substract(const MenuItem *current);
    const MenuItem *study_multipiply(const MenuItem *current);
    const MenuItem *study_divide(const MenuItem *current);
    const MenuItem *study_go_back(const MenuItem *current);
}