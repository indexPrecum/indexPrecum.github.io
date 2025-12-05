#include "c2html.h"

int main(void) {

    const char *css_file = "style.css";
    const char *js_file = "script.js";

    C2HTML_OBJ(index, css_file, js_file);
    setup_file(&index, "Index Precum", "..");

    h1("Index Precum");
    custom_tag("hr");



   

    end_file(&index);
    return 0;
}
