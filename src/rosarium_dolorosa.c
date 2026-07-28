#include "c2html.h"
#include "common.h"

void rosarium_dolorosa() {

    c2html_init("../prayer/rosarium/dolorosa", .css_path = "../../style.css", .js_path = "../common.js", .title = "Mysteria Dolorosa");
    
    go_back_button();

    with_tag(h1) { add_text("Mysteria Dolorosa"); }

    with_tag(hr, .no_close = true) {}

    with_tag(div, .id = "latin", .css_class = "left-justified") {
        with_tag(h1) { add_text("Latim"); }
        br();

        add_mystery("Primum Mysterium Doloris", "Iesus in Horto Gethsemani orat");
        add_mystery("Secundum Mysterium Doloris", "Iesus flagellis ceaditur");
        add_mystery("Tertium Mysterium Doloris", "Iesus spinis coronatur");
        add_mystery("Quartum Mysterium Doloris", "Iesus crice oneratus Calvariae locum adit");
        add_mystery("Quintum Mysterium Doloris", "Iesus in crice moritur");

        with_tag(hr, .no_close = true) {}

        with_tag(div, .id = "portuguese") {

            with_tag(h1) { add_text("Português"); }
            br();

            add_mystery("Primeiro Mistério Doloroso", "Agonia de Jesus no Horto das Oliveiras");
            add_mystery("Segundo Mistério Doloroso", "Flagelação de Jesus");
            add_mystery("Terceiro Mistério Doloroso", "Jesus é coroado com espinhos");
            add_mystery("Quarto Mistério Doloroso", "Jesus carrega a cruz no caminho do Calvário");
            add_mystery("Quinto Mistério Doloroso", "Jesus morre na cruz");
        }
    }
    c2html_end_file();
}
