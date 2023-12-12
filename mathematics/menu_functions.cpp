#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>
#include <random>

namespace{
    const char op = '+';
    const char space = ' ';
}

const KPetrova::MenuItem *KPetrova::show_menu(const MenuItem *current) {
    for (int i = 1; i < current->children_count; i++) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Обучайка > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const KPetrova::MenuItem *KPetrova::exit(const MenuItem *current) {
    std::exit(0);
}

const KPetrova::MenuItem *KPetrova::go_back(const MenuItem *current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}

const KPetrova::MenuItem *KPetrova::algebra_summ(const MenuItem *current) {
    std::mt19937 mt(time(0));

    int first_val = mt()%100, second_val = mt()%100;
    int answer = first_val + second_val;
    int user_input;

    do {
        std::cout << first_val << space << op << space << second_val << " = ";
        std::cin >> user_input;
        std::cout << ((answer==user_input) ? "Ответ верен": "Попробуй еще раз") << std::endl;
    } while (user_input!=answer);
    return current->parent;
}

const KPetrova::MenuItem *KPetrova::algebra_substract(const MenuItem *current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const KPetrova::MenuItem *KPetrova::algebra_multiply(const MenuItem *current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const KPetrova::MenuItem *KPetrova::algebra_divide(const MenuItem *current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const KPetrova::MenuItem *KPetrova::diff_calculus(const KPetrova::MenuItem *current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const KPetrova::MenuItem *KPetrova::integral_calculus(const KPetrova::MenuItem *current) {
    // TODO
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

