#include "c2html.h"

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = "script.js";

    C2HTML_OBJ(gaudiosa, css_file, js_file);
    setup_file(&gaudiosa, "Mysteria Gaudiosa", "../prayer/rosarium");

    custom_tag("div", .css_class = "goback");
    {
        button("&larr; Go back", .on_click = "go_back()", .css_class = "goback-button");
    }
    custom_tag("div", .close = true);
    button("&uarr;", .on_click = "scroll_to_top()", .id = "scroll-to-top");

    h1("Mysteria Gaudiosa");

    custom_tag("table", .css_class = "center");
    custom_tag("tr");
    {
        custom_tag("td", .css_class = "flag-container");
        {
            /* jump to latin */
            add_img("https://flagsapi.com/VA/shiny/48.png");
            add_link("Latine", .href = "#latin");
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

    custom_tag("hr");
    custom_tag("div", .id = "latin");
    h1("Latine");
    br();

    add_text("Primum Mysterium Gaudii", .do_paragraph = true, .strong = true);
    add_text("Angelus Domini nuntiavit Mariae", .do_paragraph = true);
    br_repeat(2);

    add_text("Secundum Mysterium Gaudii", .do_paragraph = true, .strong = true);
    add_text("Maria Elisabeth vísitat", .do_paragraph = true);
    br_repeat(2);

    add_text("Tertium Mysterium Gaudii", .do_paragraph = true, .strong = true);
    add_text("Iesus in Bethlehem nascitur", .do_paragraph = true);
    br_repeat(2);

    add_text("Quartum Mysterium Gaudii", .do_paragraph = true, .strong = true);
    add_text("Puer Iesus in templo praesentatur", .do_paragraph = true);
    br_repeat(2);

    add_text("Quintum Mysterium Gaudii", .do_paragraph = true, .strong = true);
    add_text("Puer Iesus in templo invenitur", .do_paragraph = true);
    br_repeat(2);

    custom_tag("hr");
    custom_tag("div", .id = "portuguese");
    h1("Português");
    br();

    add_text("Primeiro Mistério Gozoso", .do_paragraph = true, .strong = true);
    add_text("Aninciação do Anjo à Maria", .do_paragraph = true);
    br_repeat(2);

    add_text("Segundo Mistério Gozoso", .do_paragraph = true, .strong = true);
    add_text("Maria visita sua prima, Isabel", .do_paragraph = true);
    br_repeat(2);

    add_text("Terceiro Mistério Gozoso", .do_paragraph = true, .strong = true);
    add_text("Nascimento de Jesus em Belém", .do_paragraph = true);
    br_repeat(2);

    add_text("Quarto Mistério Gozoso", .do_paragraph = true, .strong = true);
    add_text("Apresentação do menino Jesus no templo", .do_paragraph = true);
    br_repeat(2);

    add_text("Quinto Mistério Gozoso", .do_paragraph = true, .strong = true);
    add_text("Encontro do menino Jesus no templo", .do_paragraph = true);
    br_repeat(2);

    custom_tag("hr");
    custom_tag("div", .id = "english");
    h1("English");
    br();

    add_text("First Joyful Mystery", .do_paragraph = true, .strong = true);
    add_text("The Annunciation", .do_paragraph = true);
    br_repeat(2);

    add_text("Second Joyful Mystery", .do_paragraph = true, .strong = true);
    add_text("The Visitation", .do_paragraph = true);
    br_repeat(2);

    add_text("Third Joyful Mystery", .do_paragraph = true, .strong = true);
    add_text("The Birth of Our Lord", .do_paragraph = true);
    br_repeat(2);

    add_text("Fourth Joyful Mystery", .do_paragraph = true, .strong = true);
    add_text("The Presentation of Jesus in the temple", .do_paragraph = true);
    br_repeat(2);

    add_text("Fifth Joyful Mystery", .do_paragraph = true, .strong = true);
    add_text("The finding of Jesus in the temple", .do_paragraph = true);
    br_repeat(2);

    end_file(&gaudiosa);
    return 0;
}
