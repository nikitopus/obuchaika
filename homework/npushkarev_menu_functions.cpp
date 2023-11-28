#include <iostream>
#include <stdlib.h>

#include "npushkarev_menu_functions.hpp"
#include "npushkarev_menu.hpp"

const NPushkarev::MenuItem *NPushkarev::show_menu(const MenuItem *current)
{
    std::cout << "Вас приветствует обучайка Пушкарева Никиты" << std::endl;
    for (int i = 1; i < current->children_count; i++)
    {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Дайте значение обучайке > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const NPushkarev::MenuItem *NPushkarev::exit(const MenuItem *current)
{
    std::exit(0);
}

const NPushkarev ::MenuItem *NPushkarev::study_go_back(const MenuItem *current)
{
    return current->parent->parent;
}

const NPushkarev::MenuItem *NPushkarev::alg_add(const MenuItem *current)
{
    std::cout << current->title << std::endl
              << std::endl;
    return current->parent;
}

const NPushkarev::MenuItem *NPushkarev::alg_substract(const MenuItem *current)
{
    std::cout << current->title << std::endl
              << std::endl;
    return current->parent;
}

const NPushkarev::MenuItem *NPushkarev::alg_multiply(const MenuItem *current)
{
    std::cout << current->title << std::endl
              << std::endl;
    return current->parent;
}

const NPushkarev::MenuItem *NPushkarev::alg_divide(const MenuItem *current)
{
    std::cout << current->title << std::endl
              << std::endl;
    return current->parent;
}

const NPushkarev::MenuItem *NPushkarev::alg_go_back(const MenuItem *current)
{
    return current->parent->parent;
}

const NPushkarev::MenuItem *NPushkarev::math_an_diff_count(const MenuItem *current)
{
    std::cout << current->title << std::endl
              << std::endl;
    return current->parent;
}

const NPushkarev::MenuItem *NPushkarev::math_an_int_count(const MenuItem *current)
{
    std::cout << current->title << std::endl
              << std::endl;
    return current->parent;
}

const NPushkarev::MenuItem *NPushkarev::math_an_go_back(const MenuItem *current)
{
    return current->parent->parent;
}
