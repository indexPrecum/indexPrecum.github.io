#include "c2html.h"

void add_line(const char *text) {
    add_text(text, .do_paragraph = true);
}

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = "../common.js";

    C2HTML_OBJ(oratio_fatimae, css_file, js_file);
    setup_file(&oratio_fatimae, "Oratio Fatimæ", "../prayer/general");

    custom_tag("div", .css_class = "goback");
    {
        button("&larr; Voltar", .on_click = "go_back()", .css_class = "goback-button");
    }
    custom_tag("div", .close = true);
    button("&uarr;", .on_click = "scroll_to_top()", .id = "scroll-to-top");

    h1("Oratio Fatimae");

    custom_tag("hr");

    custom_tag("div", .css_class = "left-justified");
    {
        h1("Latim");
        br();

        TextLines oratio_fatimae_LA = read_file("prayer_text/oratio_fatimae_LA.txt");

        for (size_t i = 0; i < oratio_fatimae_LA.count; ++i) {
            add_line(oratio_fatimae_LA.lines[i]);
        }
        
        custom_tag("hr");

        h1("Português");
        br();

        TextLines oratio_fatimae_BR = read_file("prayer_text/oratio_fatimae_BR.txt");

        for (size_t i = 0; i < oratio_fatimae_BR.count; ++i) {
            add_line(oratio_fatimae_BR.lines[i]);
        }


    }
    custom_tag("div", .close = true);

    end_file(&oratio_fatimae);
    return 0;
}
