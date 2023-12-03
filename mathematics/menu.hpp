#pragma once

namespace KPetrova {
    struct MenuItem {
        const char* const title;
        void (*func)();
    };
}
