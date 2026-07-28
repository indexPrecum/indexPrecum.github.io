#include "c2html.h"

#ifndef COMMON_H
#define COMMON_H

static inline void go_back_button(){
    with_tag(div, .css_class = "goback") {
        with_tag(button, .on_click = "go_back()", .css_class = "goback-button") {
            add_text_raw("&larr; Go Back");
        }
    }

}

static inline void add_mystery(const char *number, const char *title) {
with_tag(strong) {
            with_tag(p, .no_close = true) {
                add_text(text_format("%s", number));
            }
        }
        with_tag(p, .no_close = true) {
            add_text(text_format("%s", title));
        }
        br_repeat(2);
}

#endif
