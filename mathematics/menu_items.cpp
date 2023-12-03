#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const KPetrova::MenuItem KPetrova::STUDY_SUMM = {
        "1 - Хочу научиться складывать!", KPetrova::study_summ, &KPetrova::STUDY
};
const KPetrova::MenuItem KPetrova::STUDY_SUBSTRACT = {
        "2 - Хочу научиться вычитать!", KPetrova::study_substract, &KPetrova::STUDY
};
const KPetrova::MenuItem KPetrova::STUDY_MULTIPLY = {
        "3 - Хочу научиться умножать!", KPetrova::study_multiply, &KPetrova::STUDY
};
const KPetrova::MenuItem KPetrova::STUDY_DIVIDE = {
        "4 - Хочу научиться делить!", KPetrova::study_divide, &KPetrova::STUDY
};
const KPetrova::MenuItem KPetrova::STUDY_GO_BACK = {
        "0 - Выйти в главное меню", KPetrova::study_go_back, &KPetrova::STUDY
};

namespace {
    const KPetrova::MenuItem* const study_children[] = {
            &KPetrova::STUDY_GO_BACK,
            &KPetrova::STUDY_SUMM,
            &KPetrova::STUDY_SUBSTRACT,
            &KPetrova::STUDY_MULTIPLY,
            &KPetrova::STUDY_DIVIDE
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const KPetrova::MenuItem KPetrova::STUDY = {
        "1 - Хочу учиться математике!", KPetrova::show_menu, &KPetrova::MAIN, study_children, study_size
};
const KPetrova::MenuItem KPetrova::EXIT = {
        "0 - Я лучше пойду полежу...", KPetrova::exit, &KPetrova::MAIN
};

namespace {
    const KPetrova::MenuItem* const main_children[] = {
            &KPetrova::EXIT,
            &KPetrova::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const KPetrova::MenuItem KPetrova::MAIN = {
        nullptr, KPetrova::show_menu, nullptr, main_children, main_size
};
