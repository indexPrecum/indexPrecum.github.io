#include "c2html.h"

void add_line(const char *text) {
    add_text(text, .do_paragraph = true);
}

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = "../common.js";

    C2HTML_OBJ(agnus, css_file, js_file);
    setup_file(&agnus, "Agnus Dei", "../prayer/mass");

    custom_tag("div", .css_class = "goback");
    {
        button("&larr; Voltar", .on_click = "go_back()", .css_class = "goback-button");
    }
    custom_tag("div", .close = true);
    button("&uarr;", .on_click = "scroll_to_top()", .id = "scroll-to-top");

    h1("Agnus Dei");

    custom_tag("hr");

    custom_tag("div", .css_class = "left-justified");
    {
        h1("Latim");
        br();

        add_line("Agnus dei, qui tollis peccata mundi.");
        add_line("R. miserere nobis.");
        br();

        add_line("Agnus dei, qui tollis peccata mundi.");
        add_line("R. miserere nobis.");
        br();

        add_line("Agnus dei, qui tollis peccata mundi.");
        add_line("R. Dona nobis pacem.");
        br();

        custom_tag("hr");

        h1("Português");
        br();

        add_line("Cordeiro de Deus, que tirais o pecado do mundo.");
        add_line("R. Tende piedade de nós.");
        br();

        add_line("Cordeiro de Deus, que tirais o pecado do mundo.");
        add_line("R. Tende piedade de nós.");
        br();

        add_line("Cordeiro de Deus, que tirais o pecado do mundo.");
        add_line("R. Dai-nos a paz.");
        br();
    }
    custom_tag("div", .close = true);

    end_file(&agnus);
    return 0;
}
