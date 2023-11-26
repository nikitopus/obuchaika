#pragma once

namespace NPushkarev {
    struct MenuItem {
        const char* const title;
        void (*func) ();
    };
}