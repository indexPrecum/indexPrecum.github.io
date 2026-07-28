#include "common.h"

void mass_vidi_aquam() {

    c2html_init("../prayer/mass/vidiaquam", .css_path = "../../style.css", .js_path = "../common.js", .title = "Vidi aquam");


    go_back_button();

    with_tag(h1) { add_text("Vidi aquam"); }

    with_tag(hr, .no_close = true) {}

    with_tag(div, .id = "latin", .css_class = "left-justified") {
        with_tag(h1) { add_text("Latim"); }
        br();

        TextLines asperges_la = read_file("prayer_text/vidi_aquam_LA.txt");

        for(int i = 0; i < asperges_la.count; ++i) {
            add_text(asperges_la.lines[i]);
            br_repeat(2);
        }
    }

    with_tag(hr, .no_close = true);

    with_tag(div, .id = "portuguese", .css_class = "left-justified") {

        with_tag(h1) { add_text("Português"); }
        br();

        TextLines asperges_br = read_file("prayer_text/vidi_aquam_BR.txt");

        for(int i = 0; i < asperges_br.count; ++i) {
            add_text(asperges_br.lines[i]);
            br_repeat(2);
        }

    }

    c2html_end_file();

}
