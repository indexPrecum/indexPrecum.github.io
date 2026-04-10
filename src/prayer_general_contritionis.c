#include "c2html.h"

void add_line(const char *text) {
    add_text(text, .do_paragraph = true);
}

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = "../common.js";

    C2HTML_OBJ(contritionis, css_file, js_file);
    setup_file(&contritionis, "Actus Contritionis", "../prayer/general");

    custom_tag("div", .css_class = "goback");
    {
        button("&larr; Voltar", .on_click = "go_back()", .css_class = "goback-button");
    }
    custom_tag("div", .close = true);
    button("&uarr;", .on_click = "scroll_to_top()", .id = "scroll-to-top");

    h1("Actus Contritionis");

    custom_tag("hr");

    custom_tag("div", .css_class = "left-justified");
    {
        h1("Latim");
        br();

        TextLines contritionis_LA = read_file("prayer_text/contritionis_LA.txt");

        for (size_t i = 0; i < contritionis_LA.count; ++i) {
            add_line(contritionis_LA.lines[i]);
        }
        
        custom_tag("hr");

        h1("Português");
        br();

        TextLines contritionis_BR = read_file("prayer_text/contritionis_BR.txt");

        for (size_t i = 0; i < contritionis_BR.count; ++i) {
            add_line(contritionis_BR.lines[i]);
        }


    }
    custom_tag("div", .close = true);

    end_file(&contritionis);
    return 0;
}
