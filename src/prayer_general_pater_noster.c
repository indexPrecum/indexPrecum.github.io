#include "c2html.h"

void add_line(const char *text) {
    add_text(text, .do_paragraph = true);
}

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = "../common.js";

    C2HTML_OBJ(pater_noster, css_file, js_file);
    setup_file(&pater_noster, "Pater Noster", "../prayer/general");

    custom_tag("div", .css_class = "goback");
    {
        button("&larr; Voltar", .on_click = "go_back()", .css_class = "goback-button");
    }
    custom_tag("div", .close = true);
    button("&uarr;", .on_click = "scroll_to_top()", .id = "scroll-to-top");

    h1("Pater Noster");

    custom_tag("hr");

    custom_tag("div", .css_class = "left-justified");
    {
        h1("Latim");
        br();

        TextLines pater_noster_LA = read_file("prayer_text/pater_noster_LA.txt");

        for (size_t i = 0; i < pater_noster_LA.count; ++i) {
            add_line(pater_noster_LA.lines[i]);
        }
        
        custom_tag("hr");

        h1("Português");
        br();

        TextLines pater_noster_BR = read_file("prayer_text/pater_noster_BR.txt");

        for (size_t i = 0; i < pater_noster_BR.count; ++i) {
            add_line(pater_noster_BR.lines[i]);
        }


    }
    custom_tag("div", .close = true);

    end_file(&pater_noster);
    return 0;
}
