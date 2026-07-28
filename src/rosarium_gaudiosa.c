#include "c2html.h"
#include "common.h"

void rosarium_gaudiosa() {

    c2html_init("../prayer/rosarium/gaudiosa", .css_path = "../../style.css", .js_path = "../common.js", .title = "Mysteria Gaudiosa");
    
    go_back_button();

    with_tag(h1) { add_text("Mysteria Gaudiosa"); }

    with_tag(hr, .no_close = true) {}

    with_tag(div, .id = "latin", .css_class = "left-justified") {
        with_tag(h1) { add_text("Latim"); }
        br();

        add_mystery("Primum Mysterium Gaudii", "Angelus Domini nuntiavit Mariae");
        add_mystery("Secundum Mysterium Gaudii", "Maria Elisabeth visitat");
        add_mystery("Tertium Mysterium Gaudii", "Iesus in Bethlehem nascitur");
        add_mystery("Quartum Mysterium Gaudii", "Puer Iesus in templo praesentatur");
        add_mystery("Quintum Mysterium Gaudii", "Puer Iesus in templo invenitur");

        with_tag(hr, .no_close = true) {}

        with_tag(div, .id = "portuguese") {

            with_tag(h1) { add_text("Português"); }
            br();

            add_mystery("Primeiro Mistério Gozoso", "Anunciação do Anjo à Maria");
            add_mystery("Segundo Mistério Gozoso", "Maria visita sua prima, Isabel");
            add_mystery("Terceiro Mistério Gozoso", "Menino Jesus nasce em Belém");
            add_mystery("Quarto Mistério Gozoso", "Menino Jesus é apresentado no templo");
            add_mystery("Quinto Mistério Gozoso", "Encontro do menino Jesus no templo");
        }
    }
    c2html_end_file();
}
