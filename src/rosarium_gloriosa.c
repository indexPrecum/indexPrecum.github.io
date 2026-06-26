#include "c2html.h"
#include "common.h"

void rosarium_gloriosa() {

    c2html_init("../prayer/rosarium/gloriosa", .css_path = "../../style.css", .js_path = "../common.js", .title = "Mysteria Gloriosa");

#include "go_back_button.h"

    with_tag(h1) { add_text("Mysteria Gloriosa"); }

    with_tag(hr, .no_close = true) {}

    with_tag(div, .id = "latin", .css_class = "left-justified") {
        with_tag(h1) { add_text("Latim"); }
        br();

        add_mystery("Primum Mysterium Gloriae", "Iesus a mortuis resurgit");
        add_mystery("Secundum Mysterium Gloriae", "Iesus caelos ad Patris gloriam ascendit");
        add_mystery("Tertium Mysterium Gloriae", "Spiritus Paráclitus supra discípulos descéndit");
        add_mystery("Quartum Mysterium Gloriae", "Maria Virgo in caelum assúmpla est");
        add_mystery("Quintum Mysterium Gloriae", "Maria Virgo in caelum regína coronátur");

        with_tag(hr, .no_close = true) {}

        with_tag(div, .id = "portuguese") {

            with_tag(h1) { add_text("Português"); }
            br();

            add_mystery("Primeiro Mistério Glorioso", "Ressureição de Jesus");
            add_mystery("Segundo Mistério Glorioso", "Ascensão de Jesus à gloria do Pai");
            add_mystery("Terceiro Mistério Glorioso", "Descida do Espírito Santo sobre os apóstolos");
            add_mystery("Quarto Mistério Glorioso", "Assunção da Virgem Maria ao céu");
            add_mystery("Quinto Mistério Glorioso", "Coroação da Virgem Maria como rainha do céu");
        }
    }
    c2html_end_file();
}
