#include "c2html.h"
#include <float.h>
#include <stddef.h>

void add_line(const char *text) {
    add_text(text, .do_paragraph = true);
}

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = "../common.js";

    C2HTML_OBJ(gloria, css_file, js_file);
    setup_file(&gloria, "Glória in excélsis Deo", "../prayer/mass");

    custom_tag("div", .css_class = "goback");
    {
        button("&larr; Voltar", .on_click = "go_back()", .css_class = "goback-button");
    }
    custom_tag("div", .close = true);
    button("&uarr;", .on_click = "scroll_to_top()", .id = "scroll-to-top");

    h1("Glória in excélsis Deo");

    custom_tag("hr");

    custom_tag("div", .css_class = "left-justified");
    {
        h1("Latim");
        br();

        TextLines gloria_LA = read_file("prayer_text/gloria_LA.txt");

        for(size_t i = 0; i < gloria_LA.count; ++i) {
            add_line(gloria_LA.lines[i]);
        }

        custom_tag("hr");

        h1("Português");
        br();

        TextLines gloria_BR = read_file("prayer_text/gloria_BR.txt");

        for(size_t i = 0; i < gloria_BR.count; ++i) {
            add_line(gloria_BR.lines[i]);
        }
    }
    custom_tag("div", .close = true);

    end_file(&gloria);
    return 0;
}
