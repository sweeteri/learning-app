#pragma once

#include "menu.hpp"

namespace KPetrova {
    const MenuItem *show_menu(const MenuItem *current);

    const MenuItem *exit(const MenuItem *current);

    const MenuItem *go_back(const MenuItem *current);

    const MenuItem *algebra_summ(const MenuItem *current);
    const MenuItem *algebra_substract(const MenuItem *current);
    const MenuItem *algebra_multiply(const MenuItem *current);
    const MenuItem *algebra_divide(const MenuItem *current);

    const MenuItem *diff_calculus(const MenuItem *current);
    const MenuItem *integral_calculus(const MenuItem *current);
}

