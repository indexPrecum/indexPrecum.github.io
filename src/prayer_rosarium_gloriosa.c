#include "c2html.h"

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = "script.js";

    C2HTML_OBJ(gloriosa, css_file, js_file);
    setup_file(&gloriosa, "Mysteria Gloriosa", "../prayer/rosarium");

    custom_tag("div", .css_class = "goback");
    {
        button("&larr; Go back", .on_click = "go_back()", .css_class = "goback-button");
    }
    custom_tag("div", .close = true);
    button("&uarr;", .on_click="scroll_to_top()", .id = "scroll-to-top");


    h1("Mysteria Gloriosa");

    custom_tag("table", .css_class = "center");
    custom_tag("tr");
    {
        custom_tag("td", .css_class = "flag-container");
        {
            /* jump to latin */
            add_img("https://flagsapi.com/VA/shiny/48.png");
            add_link("Latin", .href = "#latin");
        }
        custom_tag("td", .close = true);

        custom_tag("td width=10px", .in_line = true);

        custom_tag("td", .css_class = "flag-container");
        {
            /* jump to portuguese */
            add_img("https://flagsapi.com/BR/shiny/48.png");
            add_img("https://flagsapi.com/PT/shiny/48.png");

            add_link("Português", .href = "#portuguese");
        }
        custom_tag("td", .close = true);

        custom_tag("td width=10px", .in_line = true);

        custom_tag("td", .css_class = "flag-container");
        {
            /* jump to english */
            add_img("https://flagsapi.com/US/shiny/48.png");
            add_img("https://flagsapi.com/GB/shiny/48.png");

            add_link("English", .href = "#english");
        }
        custom_tag("td", .close = true);
    }
    custom_tag("tr", .close = true);
    custom_tag("table", .close = true);

    br_repeat(100);

    custom_tag("div", .id = "latin");

    end_file(&gloriosa);
    return 0;
}
