#include "c2html.h"
#include <float.h>

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

        add_text("Glória in excélsis Deo", .do_paragraph = true);
        add_text("Et in terra pax homínibus bonae voluntátis", .do_paragraph = true);
        add_text("Laudámus te", .do_paragraph = true);
        add_text("Benedíctimus te", .do_paragraph = true);
        add_text("Adorámus te", .do_paragraph = true);
        add_text("Glorificámus te", .do_paragraph = true);
        add_text("Grátias ágimus tibi propter magnam glóriam tuam", .do_paragraph = true);
        add_text("Dómine Deus, Rex caeléstis Deus Pater omnípotens", .do_paragraph = true);
        add_text("Dómine Fili Unigénite, Iesu Christe", .do_paragraph = true);
        add_text("Dómine Deus, Agnus Dei, Filius Patris", .do_paragraph = true);
        add_text("Qui tollis peccáta mundi, miserére nobis", .do_paragraph = true);
        add_text("Qui tollis peccáta mundi, súscipe deprecatiónem nostram", .do_paragraph = true);
        add_text("Qui sedes ad déxteram Patris, miserére nobis", .do_paragraph = true);
        add_text("Quóniam tu solus Sanctus,", .do_paragraph = true);
        add_text("Tu solus Dóminus,", .do_paragraph = true);
        add_text("Tu solus Altíssimus Iesu Christe,", .do_paragraph = true);
        add_text("Cum Sancto Spíritu", .do_paragraph = true);
        add_text("In glória Dei Patris", .do_paragraph = true);
        add_text("Amen.", .do_paragraph = true);

        custom_tag("hr");

        h1("Português");
        br();

        add_line("Glória a Deus nas alturas");
        add_line("E paz na terra aos homens por Ele amados");
        add_line("Senhor, Deus, Rei dos céus, Deus Pai todo poderoso");
        add_line("Nós vos louvamos");
        add_line("Nós vos adoramos");
        add_line("Nós vos glorificamos");
        add_line("Nós vos damos graças, por vossa imensa glória");
        add_line("Senhor Jesus Cristo, Filho Unigênito");
        add_line("Senhor Deus, Cordeiro de Deus, Filho de Deus Pai");
        add_line("Vós que tirais o pecado do mundo, tente piedade de nós");
        add_line("Vós que tirais o pecado do mundo, acolhei a nossa súplica");
        add_line("Vós que estais à direita do Pai, tente piedade de nós");
        add_line("Só vós sois Santo");
        add_line("Só vós o Senhor");
        add_line("Só vós o Altíssimo, Jesus Cristo");
        add_line("Com o Espirito Santo");
        add_line("Na glória de Deus Pai");
        add_line("Amém.");
    }
    custom_tag("div", .close = true);

    end_file(&gloria);
    return 0;
}
