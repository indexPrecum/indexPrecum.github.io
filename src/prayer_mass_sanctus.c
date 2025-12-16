#include "c2html.h"
#include <sys/stat.h>

void add_line(const char *text) {
    add_text(text, .do_paragraph = true);
}

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = "../common.js";

    C2HTML_OBJ(sanctus, css_file, js_file);
    setup_file(&sanctus, "Sanctus", "../prayer/mass");

    custom_tag("div", .css_class = "goback");
    {
        button("&larr; Voltar", .on_click = "go_back()", .css_class = "goback-button");
    }
    custom_tag("div", .close = true);
    button("&uarr;", .on_click = "scroll_to_top()", .id = "scroll-to-top");

    h1("Sanctus");

    custom_tag("hr");

    custom_tag("div", .css_class = "left-justified");
    {
        h1("Latim");
        br();

        add_line("Sanctus, Sanctus, Sanctus, Dominus Deus Sabaoth!");
        add_line("Pleni sunt caeli et terra gloria Tua.");
        add_line("Hosanna in excelsis!");
        add_line("Benedictus, qui venit in Nomine Domini.");
        add_line("Hosanna in excelsis.");

        custom_tag("hr");

        h1("Português");
        br();

        add_line("Santo, Santo Santo, Senhor Deus do universo!");
        add_line("O céu e a terra programam a Vossa Glória.");
        add_line("Hosana nas alturas!");
        add_line("Bendito o que vem em nome do Senhor.");
        add_line("Hosana nas alturas!");
    }
    custom_tag("div", .close = true);

    end_file(&sanctus);
    return 0;
}
