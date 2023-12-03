#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

int main() {
    std::setlocale(LC_ALL, "");

    KPetrova::MenuItem study_summ = {"1 - Хочу научиться складывать!", KPetrova::study_summ};
    KPetrova::MenuItem study_substract = {"2 - Хочу научиться вычитать!", KPetrova::study_substract};
    KPetrova::MenuItem study_multiply = {"3 - Хочу научиться умножать!", KPetrova::study_multiply};
    KPetrova::MenuItem study_divide = {"4 - Хочу научиться делить!", KPetrova::study_divide};
    KPetrova::MenuItem study_go_back = {"0 - Выйти в главное меню", KPetrova::study_go_back};

    KPetrova::MenuItem *study_children[] = {
            &study_go_back,
            &study_summ,
            &study_substract,
            &study_multiply,
            &study_divide
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);

    KPetrova::MenuItem study = {"1 - Хочу учиться математике!", KPetrova::show_menu, study_children, study_size};
    KPetrova::MenuItem exit = {"0 - Я лучше пойду полежу...", KPetrova::exit};

    KPetrova::MenuItem *main_children[] = {&exit, &study};
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);

    KPetrova::MenuItem main = {nullptr, KPetrova::show_menu, main_children, main_size};

    study_summ.parent = &study;
    study_substract.parent = &study;
    study_multiply.parent = &study;
    study_divide.parent = &study;
    study_go_back.parent = &study;

    study.parent = &main;
    exit.parent = &main;

    const KPetrova::MenuItem *current = &main;
    do {
        current = current->func(current);
    } while (true);

    return 0;

}


