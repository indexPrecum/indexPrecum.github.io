#include "c2html.h"

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file  = "../common.js";

    C2HTML_OBJ(asperges, css_file, js_file);
    setup_file(&asperges, "Asperges me", "../prayer/mass");

    custom_tag("div", .css_class = "goback");
    {
        button("&larr; Voltar", .on_click = "go_back()", .css_class = "goback-button");
    }
    custom_tag("div", .close = true);
    button("&uarr;", .on_click = "scroll_to_top()", .id = "scroll-to-top");


    h1("Asperges Me");

    custom_tag("hr");

    custom_tag("div", .css_class = "left-justified");
    {
        h1("Latim");
        br();

        TextLines asperges_LA = read_file("prayer_text/asperges_LA.txt");

        for(size_t i = 0; i < asperges_LA.count; ++i) {
            add_text(asperges_LA.lines[i], .do_paragraph = true);
        }

        custom_tag("hr");

        h1("Português");
        br();

        TextLines asperges_BR = read_file("prayer_text/asperges_BR.txt");

        for(size_t i = 0; i < asperges_BR.count; ++i) {
            add_text(asperges_BR.lines[i], .do_paragraph = true);
        }
    }
    custom_tag("div", .close = true);

    end_file(&asperges);
    return 0;
}
