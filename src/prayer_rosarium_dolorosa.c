#include "c2html.h"

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = "script.js";

    C2HTML_OBJ(dolorosa, css_file, js_file);
    setup_file(&dolorosa, "Mysteria dolorosa", "../prayer/rosarium");

    custom_tag("div", .css_class = "goback");
    {
        button("&larr; Go back", .on_click = "go_back()", .css_class = "goback-button");
    }
    custom_tag("div", .close = true);
    button("&uarr;", .on_click = "scroll_to_top()", .id = "scroll-to-top");

    h1("Mysteria Dolorosa");

    /*
    custom_tag("table", .css_class = "center");
    custom_tag("tr");
    {
        custom_tag("td", .css_class = "flag-container");
        {
            add_img("https://flagsapi.com/VA/shiny/48.png");
            add_link("Latine", .href = "#latin");
        }
        custom_tag("td", .close = true);

        custom_tag("td width=10px", .in_line = true);

        custom_tag("td", .css_class = "flag-container");
        {
            add_img("https://flagsapi.com/BR/shiny/48.png");
            add_img("https://flagsapi.com/PT/shiny/48.png");

            add_link("Português", .href = "#portuguese");
        }
        custom_tag("td", .close = true);

        custom_tag("td width=10px", .in_line = true);

        custom_tag("td", .css_class = "flag-container");
        {
            add_img("https://flagsapi.com/US/shiny/48.png");
            add_img("https://flagsapi.com/GB/shiny/48.png");

            add_link("English", .href = "#english");
        }
        custom_tag("td", .close = true);
    }
    custom_tag("tr", .close = true);
    custom_tag("table", .close = true);
    */

    custom_tag("hr");
    custom_tag("div", .id = "latin");
    h1("Latim");
    br();

    add_text("Primum Mysterium Doloris", .do_paragraph = true, .strong = true);
    add_text("Iesus in Horto Gethsemani orat", .do_paragraph = true);
    br_repeat(2);

    add_text("Secundum Mysterium Doloris", .do_paragraph = true, .strong = true);
    add_text("Iesus flagellis caeditur", .do_paragraph = true);
    br_repeat(2);

    add_text("Tertium Mysterium Doloris", .do_paragraph = true, .strong = true);
    add_text("Iesus spinis coronatur", .do_paragraph = true);
    br_repeat(2);

    add_text("Quartum Mysterium Doloris", .do_paragraph = true, .strong = true);
    add_text("Iesus crice oneratus Calvariae locum adit", .do_paragraph = true);
    br_repeat(2);

    add_text("Quintum Mysterium Doloris", .do_paragraph = true, .strong = true);
    add_text("Iesus in cruce moritur", .do_paragraph = true);
    br_repeat(2);

    custom_tag("hr");
    custom_tag("div", .id = "portuguese");
    h1("Português");
    br();

    add_text("Primeiro Mistério Doloroso", .do_paragraph = true, .strong = true);
    add_text("Agonia de Jesus no Horto das Oliveiras", .do_paragraph = true);
    br_repeat(2);

    add_text("Segundo Mistério Doloroso", .do_paragraph = true, .strong = true);
    add_text("Flagelação de Jesus", .do_paragraph = true);
    br_repeat(2);

    add_text("Terceiro Mistério Doloroso", .do_paragraph = true, .strong = true);
    add_text("Jesus é coroado de espinhos", .do_paragraph = true);
    br_repeat(2);

    add_text("Quarto Mistério Doloroso", .do_paragraph = true, .strong = true);
    add_text("Jesus carrega a cruz no caminho do Calvário", .do_paragraph = true);
    br_repeat(2);

    add_text("Quinto Mistério Doloroso", .do_paragraph = true, .strong = true);
    add_text("Jesus morre na cruz", .do_paragraph = true);
    br_repeat(2);


    /*
    custom_tag("hr");
    custom_tag("div", .id = "english");
    h1("English");
    br();

    add_text("First Sorrowful Mystery", .do_paragraph = true, .strong = true);
    add_text("The agony in the Garden", .do_paragraph = true);
    br_repeat(2);

    add_text("Second Sorrowful Mystery", .do_paragraph = true, .strong = true);
    add_text("The scourging at the pillar", .do_paragraph = true);
    br_repeat(2);

    add_text("Third Sorrowful Mystery", .do_paragraph = true, .strong = true);
    add_text("The crowning with thorns", .do_paragraph = true);
    br_repeat(2);

    add_text("Fourth Sorrowful Mystery", .do_paragraph = true, .strong = true);
    add_text("The carrying of the cross", .do_paragraph = true);
    br_repeat(2);

    add_text("Fifth Sorrowful Mystery", .do_paragraph = true, .strong = true);
    add_text("The crucifixion", .do_paragraph = true);
    br_repeat(2);
    */

    end_file(&dolorosa);
    return 0;
}
