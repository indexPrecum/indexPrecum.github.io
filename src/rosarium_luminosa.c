#include "c2html.h"
#include "common.h"

void rosarium_luminosa() {

    c2html_init("../prayer/rosarium/luminosa", .css_path = "../../style.css", .js_path = "../common.js", .title = "Mysteria Luminosa");
    
    go_back_button();

    with_tag(h1) { add_text("Mysteria Luminosa"); }

    with_tag(hr, .no_close = true) {}

    with_tag(div, .id = "latin", .css_class = "left-justified") {
        with_tag(h1) { add_text("Latim"); }
        br();

        add_mystery("Primum Mysterium Lucis", "Iesus in Iordáne baptizátur");
        add_mystery("Secundum Mysterium Lucis", "Iesus apud Canénse Matrimonium se autorevélat");
        add_mystery("Tertium Mysterium Lucis", "Iesus regnum Dei proclámat et ad conversiónem invitat");
        add_mystery("Quartum Mysterium Lucis", "Iesus in monte transfigurátur");
        add_mystery("Quintum Mysterium Lucis", "Iesus Eucharistiam institut");

        with_tag(hr, .no_close = true) {}

        with_tag(div, .id = "portuguese") {

            with_tag(h1) { add_text("Português"); }
            br();

            add_mystery("Primeiro Mistério Luminoso", "Jesus é batizado no Rio Jordão");
            add_mystery("Segundo Mistério Luminoso", "Jesus se autorevela nas Bodas de Caná");
            add_mystery("Terceiro Mistério Luminoso", "Jesus anuncia o reino de Deus e convida à conversão");
            add_mystery("Quarto Mistério Luminoso", "Transfiguração de Jesus no monte Tabor");
            add_mystery("Quinto Mistério Luminoso", "Jesus institui a Eucaristia");
        }
    }
    c2html_end_file();
}
