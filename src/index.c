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

        h1("Sanctum Rosarium");

        custom_tag("hr");

        custom_tag("h2", .id = "display-text", .in_line_text = "{Mistério do dia}");

        custom_tag("div", .id = "mystery-container", .css_class = "mystery-container");
        {
            custom_tag("div", .id = "mystery-1", .css_class = "mystery-button");
            {
                custom_tag("div", .css_class = "latim", .in_line_text = "Mysteria Gloriosa");
                custom_tag("div", .css_class = "portugues", .in_line_text = "Mistérios Gloriosos");
                custom_tag("div", .css_class = "english", .in_line_text = "Glorious Mysteries");
            }
            custom_tag("div", .close = true);

            custom_tag("div", .id = "mystery-2", .css_class = "mystery-button");
            {
                custom_tag("div", .css_class = "latim", .in_line_text = "Mysteria Gaudiosa");
                custom_tag("div", .css_class = "portugues", .in_line_text = "Mistérios Gozosos");
                custom_tag("div", .css_class = "english", .in_line_text = "Joyful Mysteries");
            }
            custom_tag("div", .close = true);

            custom_tag("div", .id = "mystery-3", .css_class = "mystery-button");
            {
                custom_tag("div", .css_class = "latim", .in_line_text = "Mysteria Dolorosa");
                custom_tag("div", .css_class = "portugues", .in_line_text = "Mistérios Dolorosos");
                custom_tag("div", .css_class = "english", .in_line_text = "Sorrowful Mysteries");
            }
            custom_tag("div", .close = true);

            custom_tag("div", .id = "mystery-4", .css_class = "mystery-button");
            {
                custom_tag("div", .css_class = "latim", .in_line_text = "Mysteria Luminosa");
                custom_tag("div", .css_class = "portugues", .in_line_text = "Mistérios Luminosos");
                custom_tag("div", .css_class = "english", .in_line_text = "Luminous Mysteries");
            }
            custom_tag("div", .close = true);
        }
        custom_tag("div", .close = true);

        custom_tag("td", .close = true);
    }
    custom_tag("tr", .close = true);
    custom_tag("table", .close = true);

    end_file(&index);
    return 0;
}
