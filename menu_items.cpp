#include <cstddef>

#include "menu_items.hpp"
#include "menu_functions.hpp"

const NPushkarev::MenuItem NPushkarev::STUDY_ADD = {
    "1 - Хочу научиться сложению", NPushkarev::study_add, &NPushkarev::STUDY
};
const NPushkarev::MenuItem NPushkarev::STUDY_SUBSTRACT = {
    "2 - Хочу научиться вычитанию", NPushkarev::study_substract, &NPushkarev::STUDY
};
const NPushkarev::MenuItem NPushkarev::STUDY_MULTIPLY = {
    "3 - Хочу научиться умножению", NPushkarev::study_multipiply, &NPushkarev::STUDY
};
const NPushkarev::MenuItem NPushkarev::STUDY_DIVIDE = {
    "4 - Хочу научиться делению", NPushkarev::study_divide, &NPushkarev::STUDY
};
const NPushkarev::MenuItem NPushkarev::STUDY_GO_BACK = {
    "0 - Хочу назад", NPushkarev::study_go_back, &NPushkarev::STUDY
};

namespace {
    const NPushkarev::MenuItem *study_children[] = {
        &NPushkarev::STUDY_GO_BACK,
        &NPushkarev::STUDY_ADD,
        &NPushkarev::STUDY_SUBSTRACT,
        &NPushkarev::STUDY_MULTIPLY,
        &NPushkarev::STUDY_DIVIDE,
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const NPushkarev::MenuItem NPushkarev::STUDY = {
    "1 - Хочу учить матан!", NPushkarev::show_menu, &NPushkarev::MAIN ,study_children, study_size
};
const NPushkarev::MenuItem NPushkarev::EXIT = {
     "0 - Я лентяй, я иду лежать...", NPushkarev::exit, &NPushkarev::MAIN
};

namespace{
    const NPushkarev::MenuItem *main_children[] = {
        &NPushkarev::EXIT, 
        &NPushkarev::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const NPushkarev::MenuItem NPushkarev::MAIN = {
    nullptr, NPushkarev::show_menu, nullptr, main_children, main_size
};