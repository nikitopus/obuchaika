#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

int main()
{
    std::setlocale(LC_ALL, "");

    NPushkarev::MenuItem study_add = {"1 - Хочу научиться сложению", NPushkarev::study_add};
    NPushkarev::MenuItem study_substract = {"2 - Хочу научиться вычитанию", NPushkarev::study_substract};
    NPushkarev::MenuItem study_multiply = {"3 - Хочу научиться умножению", NPushkarev::study_multipiply};
    NPushkarev::MenuItem study_divide = {"4 - Хочу научиться делению", NPushkarev::study_divide};
    NPushkarev::MenuItem study_go_back = {"0 - Хочу назад", NPushkarev::study_go_back};

    NPushkarev::MenuItem *study_children[] = {
        &study_add,
        &study_substract,
        &study_multiply,
        &study_divide,
        &study_go_back,
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);

    NPushkarev::MenuItem study = {"1 - Хочу учить матан!", NPushkarev::study};
    NPushkarev::MenuItem exit = {"0 - Я лентяй, я иду лежать...", NPushkarev::exit};

    NPushkarev::MenuItem *main_children[] = {&exit, &study};
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);

    NPushkarev::MenuItem main = {nullptr, nullptr};

    int user_input;
    do
    {
        std::cout << "Обучайка привествует тебя, ученик!" << std::endl;
        for (int i = 1; i < main_size; i++)
        {
            std::cout << main_children[i]->title << std::endl;
        }
        std::cout << main_children[0]->title << std::endl;
        std::cout << "Обучайка > ";

        std::cin >> user_input;
        main_children[user_input]->func();

        std::cout << std::endl;
    } while (true);
    return 0;
}
