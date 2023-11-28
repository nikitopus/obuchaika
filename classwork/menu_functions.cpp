#include "menu_functions.hpp"
#include "menu.hpp"

#include <cstdlib>
#include <iostream>

const NPushkarev::MenuItem *NPushkarev::show_menu(const MenuItem *current)
{
    std::cout << "Тебя приветствует обучайка!" << std::endl;
    for (int i = 1; i < current->children_count; i++)
    {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Обучайка > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
};

const NPushkarev::MenuItem *NPushkarev::exit(const MenuItem *current)
{
    std::exit(0);
}

const NPushkarev::MenuItem *NPushkarev::study_add(const MenuItem *current)
{
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const NPushkarev::MenuItem *NPushkarev::study_substract(const MenuItem *current)
{
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const NPushkarev::MenuItem *NPushkarev::study_divide(const MenuItem *current)
{
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const NPushkarev::MenuItem *NPushkarev::study_multipiply(const MenuItem *current)
{
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const NPushkarev::MenuItem *NPushkarev::study_go_back(const MenuItem *current)
{
    return current->parent ->parent;
}
