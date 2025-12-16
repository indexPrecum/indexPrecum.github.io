#include "c2html.h"

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = "../common.js";

    C2HTML_OBJ(kyrie, css_file, js_file);
    setup_file(&kyrie, "Kyrie", "../prayer/mass");

    custom_tag("div", .css_class = "goback");
    {
        button("&larr; Voltar", .on_click = "go_back()", .css_class = "goback-button");
    }
    custom_tag("div", .close = true);
    button("&uarr;", .on_click = "scroll_to_top()", .id = "scroll-to-top");

    h1("Kyrie");

    custom_tag("hr");

    custom_tag("div", .css_class = "left-justified");
    {
        h1("Latim");
        br();

        add_text("Kyrie eleison.", .do_paragraph = true);
        add_text("Kyrie eleison.", .do_paragraph = true);
        add_text("Kyrie eleison.", .do_paragraph = true);
        add_text("Christe eleison.", .do_paragraph = true);
        add_text("Christe eleison.", .do_paragraph = true);
        add_text("Christe eleison.", .do_paragraph = true);
        add_text("Kyrie eleison.", .do_paragraph = true);
        add_text("Kyrie eleison.", .do_paragraph = true);
        add_text("Kyrie eleison.", .do_paragraph = true);

        custom_tag("hr");

        h1("Português");
        span("(É mais comum a repetição somente duas vezes nas traduções em Português)", .css_class ="portugues");
        br();
        br();
        br();

        add_text("Senhor, tende piedade de nós.", .do_paragraph = true);
        add_text("Senhor, tende piedade de nós.", .do_paragraph = true);
        add_text("Cristo, tende piedade de nós.", .do_paragraph = true);
        add_text("Cristo, tende piedade de nós.", .do_paragraph = true);
        add_text("Senhor, tende piedade de nós.", .do_paragraph = true);
        add_text("Senhor, tende piedade de nós.", .do_paragraph = true);
    }
    custom_tag("div", .close = true);

    end_file(&kyrie);
    return 0;
}
