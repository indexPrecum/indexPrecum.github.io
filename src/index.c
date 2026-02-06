#include "c2html.h"

int main(void) {

    const char *css_file = "style.css";
    const char *js_file = "script.js";

    C2HTML_OBJ(index, css_file, js_file);
    setup_file(&index, "Index Precum", "..");

    h1("Index Precum");
    custom_tag("hr");

    custom_tag("table", .css_class = "center");
    custom_tag("tr align");
    {

        custom_tag("td");

        h1("Santo Rosário");

        custom_tag("hr");

        custom_tag("h2", .id = "display-text", .in_line_text = "{Dia da semana}, {Mistério do dia}");

        custom_tag("div", .id = "mystery-container", .css_class = "prayer-container");
        {
            custom_tag("div", .id = "mystery-1", .on_click = "location.href='prayer/rosarium/gloriosa.html'", .css_class = "mystery-button");
            {
                custom_tag("div", .css_class = "latim", .in_line_text = "Mysteria Gloriosa");
                custom_tag("div", .css_class = "portugues", .in_line_text = "Mistérios Gloriosos");
                add_link("", .href = "teste");
            }
            custom_tag("div", .close = true);

            custom_tag("div", .on_click = "location.href='prayer/rosarium/gaudiosa.html'", .id = "mystery-2", .css_class = "mystery-button");
            {
                custom_tag("div", .css_class = "latim", .in_line_text = "Mysteria Gaudiosa");
                custom_tag("div", .css_class = "portugues", .in_line_text = "Mistérios Gozosos");
            }
            custom_tag("div", .close = true);

            custom_tag("div", .on_click = "location.href='prayer/rosarium/dolorosa.html'", .id = "mystery-3", .css_class = "mystery-button");
            {
                custom_tag("div", .css_class = "latim", .in_line_text = "Mysteria Dolorosa");
                custom_tag("div", .css_class = "portugues", .in_line_text = "Mistérios Dolorosos");
            }
            custom_tag("div", .close = true);

            custom_tag("div", .on_click = "location.href='prayer/rosarium/luminosa.html'", .id = "mystery-4", .css_class = "mystery-button");
            {
                custom_tag("div", .css_class = "latim", .in_line_text = "Mysteria Luminosa");
                custom_tag("div", .css_class = "portugues", .in_line_text = "Mistérios Luminosos");
            }
            custom_tag("div", .close = true);
        }
        custom_tag("div", .close = true);

        custom_tag("hr");

        custom_tag("td", .close = true);
    }
    custom_tag("tr", .close = true);
    custom_tag("table", .close = true);

    h1("Orações e cantos da missa.");

    custom_tag("div", .css_class = "prayer-container");
    {
        custom_tag("div", .css_class = "mystery-button", .on_click = "location.href='prayer/mass/asperges.html'");
        {
            custom_tag("div", .css_class = "latim", .in_line_text = "Asperges");
            custom_tag("div", .css_class = "portugues", .in_line_text = "Aspergei-me");
        }
        custom_tag("div", .close = true);

        custom_tag("div", .css_class = "mystery-button", .on_click = "location.href='prayer/mass/kyrie.html'");
        {
            custom_tag("div", .css_class = "latim", .in_line_text = "Kyrie");
            custom_tag("div", .css_class = "portugues", .in_line_text = "Tende piedade de nós");
        }
        custom_tag("div", .close = true);

        custom_tag("div", .css_class = "mystery-button", .on_click = "location.href='prayer/mass/gloria.html'");
        {
            custom_tag("div", .css_class = "latim", .in_line_text = "Glória in excélsis Deo");
            custom_tag("div", .css_class = "portugues", .in_line_text = "Glória a Deus nas Alturas");
        }
        custom_tag("div", .close = true);

        custom_tag("div", .css_class = "mystery-button", .on_click = "location.href='prayer/mass/credo.html'");
        {
            custom_tag("div", .css_class = "latim", .in_line_text = "Credo");
            custom_tag("div", .css_class = "portugues", .in_line_text = "Credo Niceno-Constantinopolitano");
        }
        custom_tag("div", .close = true);

        custom_tag("div", .css_class = "mystery-button", .on_click = "location.href='prayer/mass/sanctus.html'");
        {
            custom_tag("div", .css_class = "latim", .in_line_text = "Sanctus");
            custom_tag("div", .css_class = "portugues", .in_line_text = "Santo (Hino angélico)");
        }
        custom_tag("div", .close = true);

        custom_tag("div", .css_class = "mystery-button", .on_click = "location.href='prayer/mass/agnus.html'");
        {
            custom_tag("div", .css_class = "latim", .in_line_text = "Agnus Dei");
            custom_tag("div", .css_class = "portugues", .in_line_text = "Cordeiro de Deus");
        }
        custom_tag("div", .close = true);

    }
    custom_tag("div", .close = true);

    custom_tag("center");
    br_repeat(5);
    h1("Em Construção...");
    custom_tag("center", .close = true);



    end_file(&index);
    return 0;
}
