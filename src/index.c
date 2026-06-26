#include "c2html.h"


#include "rosarium_gloriosa.c"

int main(void) {

    c2html_init("../index", .css_path = "style.css", .js_path = "script.js", .title = "Index Precum");

    with_tag(h1) { add_text("Index Precum"); }

    with_tag(hr, .no_close = true) {}

    with_tag(table, .css_class = "center") {

        with_tag(tr, .CUSTOM_ATTR(align)) {

            push_tag(td);

            with_tag(h1){  add_text("Santo Rosário"); }

            with_tag(hr, .no_close = true) {}

            with_tag(h2, .id = "display-text") { add_text("{Dia da semana}, {Mistério do dia}"); }

            with_tag(div, .id = "mystery-container", .css_class = "prayer-container") {

                with_tag(div, .id = "mystery-1", .on_click = "location.href='prayer/rosarium/gloriosa'", .css_class = "mystery-button") {
                    with_tag(div, .css_class = "latim") { add_text("Mysteria Gloriosa"); }
                    with_tag(div, .css_class = "portugues") { add_text("Mistérios Gloriosos"); }
                }

                with_tag(div, .id = "mystery-2", .on_click = "location.href='prayer/rosarium/gaudiosa'", .css_class = "mystery-button") {
                    with_tag(div, .css_class = "latim") { add_text("Mysteria Gaudiosa"); }
                    with_tag(div, .css_class = "portugues") { add_text("Mistérios Gozosos"); }
                }

                with_tag(div, .id = "mystery-3", .on_click = "location.href='prayer/rosarium/dolorosa'", .css_class = "mystery-button") {
                    with_tag(div, .css_class = "latim") { add_text("Mysteria Dolorosa"); }
                    with_tag(div, .css_class = "portugues") { add_text("Mistérios Dolorosos"); }
                }

                with_tag(div, .id = "mystery-4", .on_click = "location.href='prayer/rosarium/luminosa'", .css_class = "mystery-button") {
                    with_tag(div, .css_class = "latim") { add_text("Mysteria Luminosa"); }
                    with_tag(div, .css_class = "portugues") { add_text("Mistérios Luminosos"); }
                }
            }

            with_tag(hr, .no_close = true) {}

            pop_tag(td);
        }
    }

    with_tag(h1) { add_text("Orações e cantos da Santa Missa"); }

    with_tag(h2) { add_text("Aspersão da água benta aos domingos"); }
    with_tag(div, .css_class = "prayer-container") {

        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/mass/asperges'") {
            with_tag(div, .css_class = "latim") { add_text("Asperges me"); }
            with_tag(div, .css_class = "portugues") { add_text("Aspergei-me"); }
            with_tag(div, .css_class = "portugues") { add_text("(Durante o ano)"); }
        }

        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/mass/vidiaquam'") {
            with_tag(div, .css_class = "latim") { add_text("Vidi Aquam"); }
            with_tag(div, .css_class = "portugues") { add_text("Vi sair água"); }
            with_tag(div, .css_class = "portugues") { add_text("(Durante o Tempo Pascal)"); }
        }
    }

    with_tag(h2) { add_text("Ante-Missa"); }
    with_tag(div, .css_class = "prayer-container") {

        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/mass/kyrie'") {
            with_tag(div, .css_class = "latim") { add_text("Kyrie"); }
            with_tag(div, .css_class = "portugues") { add_text("Tende misericórdia"); }
        }

        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/mass/gloria'") {
            with_tag(div, .css_class = "latim") { add_text("Glória in excélsis Deo"); }
            with_tag(div, .css_class = "portugues") { add_text("Glória a Deus nas alturas"); }
        }

        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/mass/credo'") {
            with_tag(div, .css_class = "latim") { add_text("Credo"); }
            with_tag(div, .css_class = "portugues") { add_text("Credo Niceno-Constantinopolitano"); }
        }
    }

    with_tag(h2) { add_text("Ofertório"); }
    with_tag(div, .css_class = "prayer-container") {

        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/mass/sanctus'") {
            with_tag(div, .css_class = "latim") { add_text("Sanctus"); }
            with_tag(div, .css_class = "portugues") { add_text("Santo"); }
        }
    }

    with_tag(h2) { add_text("Comunhão"); }
    with_tag(div, .css_class = "prayer-container") {

        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/mass/agnus'") {
            with_tag(div, .css_class = "latim") { add_text("Agnus Dei"); }
            with_tag(div, .css_class = "portugues") { add_text("Cordeiro de Deus"); }
        }

        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/mass/non_sum'") {
            with_tag(div, .css_class = "latim") { add_text("Dómine, non sum dignus"); }
            with_tag(div, .css_class = "portugues") { add_text("Senhor, eu não sou digno"); }
        }

        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/mass/confiteor'") {
            with_tag(div, .css_class = "latim") { add_text("Confíteor"); }
            with_tag(div, .css_class = "portugues") { add_text("Confesso"); }
        }


    }


    with_tag(h1) { add_text("Orações e cantos diversos"); }

    with_tag(div, .css_class = "prayer-container") {

        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/general/ave_maria'") {
            with_tag(div, .css_class = "latim") { add_text("Ave, María"); }
            with_tag(div, .css_class = "portugues") { add_text("Ave Maria"); }
        }

        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/general/salve_regina'") {
            with_tag(div, .css_class = "latim") { add_text("Salve, Regina"); }
            with_tag(div, .css_class = "portugues") { add_text("Salve, Rainha"); }
        }

        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/general/oratio_fatimae'") {
            with_tag(div, .css_class = "latim") { add_text("Oratio Fatimae"); }
            with_tag(div, .css_class = "portugues") { add_text("Oração de Fátima"); }
        }


        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/general/pater_noster'") {
            with_tag(div, .css_class = "latim") { add_text("Pater noster"); }
            with_tag(div, .css_class = "portugues") { add_text("Pai nosso"); }
        }

        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/general/michael_archangele'") {
            with_tag(div, .css_class = "latim") { add_text("Sancte Michaël Archángele"); }
            with_tag(div, .css_class = "portugues") { add_text("São Miguel Arcanjo"); }
        }

        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/general/actus_contritiones'") {
            with_tag(div, .css_class = "latim") { add_text("Actus contritiones"); }
            with_tag(div, .css_class = "portugues") { add_text("Ave Maria"); }
        }

        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/general/credo_apostolico'") {
            with_tag(div, .css_class = "latim") { add_text("Symbolum Apostolórum"); }
            with_tag(div, .css_class = "portugues") { add_text("Simbolo dos Apóstolos (Credo Apostólico)"); }
        }

        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/general/magnificat'") {
            with_tag(div, .css_class = "latim") { add_text("Magnificat"); }
            with_tag(div, .css_class = "portugues") { add_text("Minha alma glorifica o Senhor"); }
        }

        with_tag(div, .css_class = "mystery-button", .on_click = "location.href='prayer/general/regina_caeli'") {
            with_tag(div, .css_class = "latim") { add_text("Regina cæli"); }
            with_tag(div, .css_class = "portugues") { add_text("Rainha do céu"); }
        }

    }

    c2html_end_file();


    rosarium_gloriosa();

    return 0;
}
