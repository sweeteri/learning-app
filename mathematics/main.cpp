#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"
#include "menu_items.hpp"

int main() {

    system("chcp 65001");
    std::setlocale(LC_ALL, "ru_RU.UTF-8");
    std::cout << "Обучайка приветствует тебя, мой юный ученик!" << std::endl;
    const KPetrova::MenuItem* current = &KPetrova::MAIN;
    do {
        current = current->func(current);
    } while (true);
    return 0;
}



