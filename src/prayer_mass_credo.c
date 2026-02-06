#include "c2html.h"
#include <float.h>

void add_line(const char *text) {
    add_text(text, .do_paragraph = true);
}

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = "../common.js";

    C2HTML_OBJ(credo, css_file, js_file);
    setup_file(&credo, "Credo in unum Deum", "../prayer/mass");

    custom_tag("div", .css_class = "goback");
    {
        button("&larr; Voltar", .on_click = "go_back()", .css_class = "goback-button");
    }
    custom_tag("div", .close = true);
    button("&uarr;", .on_click = "scroll_to_top()", .id = "scroll-to-top");

    h1("Credo Niceno-Constantinopolitano");

    custom_tag("hr");

    custom_tag("div", .css_class = "left-justified");
    {
        h1("Latim");
        br();

        TextLines credo_LA = read_file("prayer_text/nicene_creed_LA.txt");

        for (size_t i = 0; i < credo_LA.count; ++i) {
            add_line(credo_LA.lines[i]);
        }
        
        custom_tag("hr");

        h1("Português");
        br();

        TextLines credo_BR = read_file("prayer_text/nicene_creed_BR.txt");

        for (size_t i = 0; i < credo_BR.count; ++i) {
            add_line(credo_BR.lines[i]);
        }

    }
    custom_tag("div", .close = true);

    end_file(&credo);
    return 0;
}
