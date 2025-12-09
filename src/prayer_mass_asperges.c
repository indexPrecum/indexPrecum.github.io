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

        add_text("Asperges me, Domine, hyssopo et mundabor.", .do_paragraph = true);
        add_text("Lavabis me et super nivem dealbabor.", .do_paragraph = true);
        add_text("Miserere mei, Deus, secundum magnam misericordiam tuam.", .do_paragraph = true);
        add_text("Glória Patri et Fílio, et Spirítui Sancto, sicut erat in princípio, et nunc et semper, et in saecula saeculorm.",
                .do_paragraph = true);
        add_text("Amen.", .do_paragraph = true);

        custom_tag("hr");

        h1("Português");
        br();

        add_text("Asperges-me, Senhor, com o hissopo e ficarei puro.", .do_paragraph = true);
        add_text("Lava-me, e ficarei mais branco que a neve.", .do_paragraph = true);
        add_text("Tem piedade de mim, ó Deus, segundo a sua misericórdia infinita.", .do_paragraph = true);
        add_text("Glória ao Pai e ao Filho, e ao Espírito Santo, como era no princípio, agora e sempre, e pelos séculos dos sécuilos",
                .do_paragraph = true);
        add_text("Amém", .do_paragraph = true);
    }
    custom_tag("div", .close = true);

    end_file(&asperges);
    return 0;
}
