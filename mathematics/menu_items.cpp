#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const KPetrova::MenuItem KPetrova::DIFF_CALCULUS = {
        "1 - Хочу изучить дифференциальное исчисление!", KPetrova::diff_calculus, &KPetrova::CALCULUS
};
const KPetrova::MenuItem KPetrova::INTEGRAL_CALCULUS = {
        "2 - Хочу изучить интегральное исчисление!", KPetrova::integral_calculus, &KPetrova::CALCULUS
};
const KPetrova::MenuItem KPetrova::MATH_GO_BACK = {
        "0 - Вернуться к выбору предметов.", KPetrova::go_back, &KPetrova::CALCULUS
};
namespace {
    const KPetrova::MenuItem *const calculus_children[] = {
            &KPetrova::MATH_GO_BACK,
            &KPetrova::INTEGRAL_CALCULUS,
            &KPetrova::DIFF_CALCULUS,
    };
    const int calculus_size = sizeof(calculus_children) / sizeof(calculus_children[0]);
}


const KPetrova::MenuItem KPetrova::ALGEBRA_SUMM = {
        "1 - Хочу научиться складывать!", KPetrova::algebra_summ, &KPetrova::ALGEBRA
};
const KPetrova::MenuItem KPetrova::ALGEBRA_SUBSTRACT = {
        "2 - Хочу научиться вычитать!", KPetrova::algebra_substract, &KPetrova::ALGEBRA
};
const KPetrova::MenuItem KPetrova::ALGEBRA_MULTIPLY = {
        "3 - Хочу научиться умножать!", KPetrova::algebra_multiply, &KPetrova::ALGEBRA
};
const KPetrova::MenuItem KPetrova::ALGEBRA_DIVIDE = {
        "4 - Хочу научиться делить!", KPetrova::algebra_divide, &KPetrova::ALGEBRA
};
namespace {
    const KPetrova::MenuItem *const algebra_children[] = {
            &KPetrova::MATH_GO_BACK,
            &KPetrova::ALGEBRA_SUMM,
            &KPetrova::ALGEBRA_SUBSTRACT,
            &KPetrova::ALGEBRA_MULTIPLY,
            &KPetrova::ALGEBRA_DIVIDE
    };
    const int algebra_size = sizeof(algebra_children) / sizeof(algebra_children[0]);
}


const KPetrova::MenuItem KPetrova::ALGEBRA = {
        "1 - Хочу изучать алгебру!", KPetrova::show_menu, &KPetrova::STUDY, algebra_children, algebra_size
};
const KPetrova::MenuItem KPetrova::CALCULUS = {
        "2 - Хочу изучать матанализ!", KPetrova::show_menu, &KPetrova::STUDY, calculus_children, calculus_size
};
const KPetrova::MenuItem KPetrova::STUDY_GO_BACK = {
        "0 - Выйти в главное меню", KPetrova::go_back, &KPetrova::STUDY
};
namespace {
    const KPetrova::MenuItem *const study_children[] = {
            &KPetrova::STUDY_GO_BACK,
            &KPetrova::ALGEBRA,
            &KPetrova::CALCULUS,
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
    const KPetrova::MenuItem *const main_children[] = {
            &KPetrova::EXIT,
            &KPetrova::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const KPetrova::MenuItem KPetrova::MAIN = {
        nullptr, KPetrova::show_menu, nullptr, main_children, main_size
};
