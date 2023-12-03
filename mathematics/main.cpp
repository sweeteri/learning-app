#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

int main() {
    std::setlocale(LC_ALL, "");

    KPetrova::MenuItem study_summ = { "1 - ���� ��������� ����������!", KPetrova::study_summ };
    KPetrova::MenuItem study_substract = { "2 - ���� ��������� ��������!", KPetrova::study_substract };
    KPetrova::MenuItem study_multiply = { "3 - ���� ��������� ��������!", KPetrova::study_multiply };
    KPetrova::MenuItem study_divide = { "4 - ���� ��������� ������!", KPetrova::study_divide };
    KPetrova::MenuItem study_go_back = { "0 - ����� � ������� ����", KPetrova::study_go_back };

    KPetrova::MenuItem* study_children[] = {
            &study_go_back,
            &study_summ,
            &study_substract,
            &study_multiply,
            &study_divide
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);

    KPetrova::MenuItem study = {"1 - ���� ������� ����������!", KPetrova::study };
    KPetrova::MenuItem exit = {"0 - � ����� ����� ������...", KPetrova::exit };

    KPetrova::MenuItem* main_children[] = {&exit, &study };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);

    int user_input;
    do {
        std::cout << "�������� ������������ ����, ��� ���� ������!" << std::endl;
        for (int i = 1; i < main_size; i++) {
            std::cout << main_children[i]->title << std::endl;
        }
        std::cout << main_children[0]->title << std::endl;
        std::cout << "�������� > ";

        std::cin >> user_input;
        main_children[user_input]->func();

        std::cout << std::endl;
    } while (true);

    return 0;

}


