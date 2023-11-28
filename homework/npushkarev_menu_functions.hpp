#pragma once

#include "npushkarev_menu.hpp"

namespace NPushkarev
{
    const MenuItem *exit(const MenuItem *current);
    const MenuItem *show_menu(const MenuItem *current);
    const MenuItem *study_go_back(const MenuItem *current);
    const MenuItem *alg_add(const MenuItem *current);
    const MenuItem *alg_substract(const MenuItem *current);
    const MenuItem *alg_multiply(const MenuItem *current);
    const MenuItem *alg_divide(const MenuItem *current);
    const MenuItem *alg_go_back(const MenuItem *current);
    const MenuItem *math_an_diff_count(const MenuItem *current);
    const MenuItem *math_an_int_count(const MenuItem *current);
    const MenuItem *math_an_go_back(const MenuItem *current);

}