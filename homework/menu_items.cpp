#include "menu_items.hpp"
#include "menu_functions.hpp"

const NPushkarev::MenuItem NPushkarev::ALG_ADD = {
    "1 - Хочу учиться сложению!", NPushkarev::alg_add, &NPushkarev::ALGEBRA};

const NPushkarev::MenuItem NPushkarev::ALG_SUBSTRACT = {
    "2 - Хочу учиться вычитанию!", NPushkarev::alg_substract, &NPushkarev::ALGEBRA};

const NPushkarev::MenuItem NPushkarev::ALG_MULTIPLY = {
    "3 - Хочу учиться умножению!", NPushkarev::alg_multiply, &NPushkarev::ALGEBRA};

const NPushkarev::MenuItem NPushkarev::ALG_DIVIDE = {
    "4 - Хочу учиться делению!", NPushkarev::alg_divide, &NPushkarev::ALGEBRA};

const NPushkarev::MenuItem NPushkarev::ALG_GO_BACK = {
    "0 - Назад", NPushkarev::alg_go_back, &NPushkarev::ALGEBRA};

namespace
{
    const NPushkarev::MenuItem *algebra_children[] = {
        &NPushkarev::ALG_GO_BACK,
        &NPushkarev::ALG_ADD,
        &NPushkarev::ALG_SUBSTRACT,
        &NPushkarev::ALG_MULTIPLY,
        &NPushkarev::ALG_DIVIDE};
    const int algebra_size = sizeof(algebra_children) / sizeof(algebra_children[0]);
}

const NPushkarev::MenuItem NPushkarev::ALGEBRA = {
    "1 - Хочу учить алгебру!", NPushkarev::show_menu, &NPushkarev::STUDY, algebra_children, algebra_size};

const NPushkarev::MenuItem NPushkarev::MATH_AN_DIFF_COUNT = {
    "1 - Хочу учить дифференциальное исчисление!", NPushkarev::math_an_diff_count, &NPushkarev::MATH_ANALYSIS};

const NPushkarev::MenuItem NPushkarev::MATH_AN_INT_COUNT = {
    "2 - Хочу учить интегральное исчисление!", NPushkarev::math_an_int_count, &NPushkarev::MATH_ANALYSIS};

const NPushkarev::MenuItem NPushkarev::MATH_AN_GO_BACK = {
    "0 - Назад", NPushkarev::math_an_go_back, &NPushkarev::MATH_ANALYSIS};

namespace
{
    const NPushkarev::MenuItem *math_an_children[] = {
        &NPushkarev::MATH_AN_GO_BACK,
        &NPushkarev::MATH_AN_DIFF_COUNT,
        &NPushkarev::MATH_AN_INT_COUNT,
    };
    const int math_an_size = sizeof(math_an_children) / sizeof(math_an_children[0]);
}

const NPushkarev::MenuItem NPushkarev::MATH_ANALYSIS = {
    "2 - Хочу учить матан!", NPushkarev::show_menu, &NPushkarev::STUDY, math_an_children, math_an_size};

const NPushkarev::MenuItem NPushkarev::STUDY_GO_BACK = {
    "0 - В главное меню", NPushkarev::study_go_back, &NPushkarev::STUDY};

namespace
{
    const NPushkarev::MenuItem *study_children[] = {
        &NPushkarev::STUDY_GO_BACK,
        &NPushkarev::ALGEBRA,
        &NPushkarev::MATH_ANALYSIS};
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const NPushkarev::MenuItem NPushkarev::STUDY = {
    "1 - Хочу учиться!", NPushkarev::show_menu, &NPushkarev::MAIN, study_children, study_size};

const NPushkarev::MenuItem NPushkarev::EXIT = {
    "0 - Выйти", NPushkarev::exit, &NPushkarev::MAIN};

namespace
{
    const NPushkarev::MenuItem *main_children[] = {
        &NPushkarev::EXIT,
        &NPushkarev::STUDY};
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const NPushkarev::MenuItem NPushkarev::MAIN = {
    nullptr, NPushkarev::show_menu, nullptr, main_children, main_size};