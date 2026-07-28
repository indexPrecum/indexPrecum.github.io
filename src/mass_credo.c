#include "common.h"

void mass_credo() {

    c2html_init("../prayer/mass/credo", .css_path = "../../style.css", .js_path = "../common.js", .title = "Credo");


    go_back_button();

    with_tag(h1) { add_text("Credo"); }

    with_tag(hr, .no_close = true) {}

    with_tag(div, .id = "latin", .css_class = "left-justified") {
        with_tag(h1) { add_text("Latim"); }
        br();

        TextLines text_la = read_file("prayer_text/nicene_creed_LA.txt");

        for(int i = 0; i < text_la.count; ++i) {
            add_text(text_la.lines[i]);
            br_repeat(2);
        }
    }

    with_tag(hr, .no_close = true);

    with_tag(div, .id = "portuguese", .css_class = "left-justified") {

        with_tag(h1) { add_text("Português"); }
        br();

        TextLines text_br = read_file("prayer_text/nicene_creed_BR.txt");

        for(int i = 0; i < text_br.count; ++i) {
            add_text(text_br.lines[i]);
            br_repeat(2);
        }

    }

    c2html_end_file();

}
