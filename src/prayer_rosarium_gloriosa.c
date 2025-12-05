#include "c2html.h"

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = NULL;

    C2HTML_OBJ(gloriosa, css_file, js_file);
    setup_file(&gloriosa, "Mysteria Gloriosa", "../prayer/rosarium");

    h1("Mysteria Gloriosa");


    end_file(&gloriosa);
    return 0;
}
