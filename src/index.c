#include "c2html.h"

int main(void) {

    const char *css_file = "style.css";
    const char *js_file = "script.js";

    C2HTML_OBJ(index, css_file, js_file);
    setup_file(&index, "Index Precum", "..");

    h1("Today's mystery:");
    br();

    custom_tag("h2 id=\"day\"", .in_line = true);
    br();
    custom_tag("h2 id=\"mystery\"", .in_line = true);


    end_file(&index);
    return 0;
}
