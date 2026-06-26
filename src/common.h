#include "c2html.h"

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
