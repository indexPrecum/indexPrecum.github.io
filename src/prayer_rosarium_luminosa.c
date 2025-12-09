#include "c2html.h"

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = "script.js";

    C2HTML_OBJ(luminosa, css_file, js_file);
    setup_file(&luminosa, "Mysteria Luminosa", "../prayer/rosarium");

    custom_tag("div", .css_class = "goback");
    {
        button("&larr; Go back", .on_click = "go_back()", .css_class = "goback-button");
    }
    custom_tag("div", .close = true);
    button("&uarr;", .on_click = "scroll_to_top()", .id = "scroll-to-top");

    h1("Mysteria Luminosa");

    /*
    custom_tag("table", .css_class = "center");
    custom_tag("tr");
    {
        custom_tag("td", .css_class = "flag-container");
        {
            // jump to latin 
            add_img("https://flagsapi.com/VA/shiny/48.png");
            add_link("Latine", .href = "#latin");
        }
        custom_tag("td", .close = true);

        custom_tag("td width=10px", .in_line = true);

        custom_tag("td", .css_class = "flag-container");
        {
            // jump to portuguese 
            add_img("https://flagsapi.com/BR/shiny/48.png");
            add_img("https://flagsapi.com/PT/shiny/48.png");

            add_link("Português", .href = "#portuguese");
        }
        custom_tag("td", .close = true);

        custom_tag("td width=10px", .in_line = true);

        custom_tag("td", .css_class = "flag-container");
        {
            // jump to english 
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

    add_text("Primum Mysterium Lucis", .do_paragraph = true, .strong = true);
    add_text("Iesus in Iordáne baptizátur", .do_paragraph = true);
    br_repeat(2);

    add_text("Secundum Mysterium Lucis", .do_paragraph = true, .strong = true);
    add_text("Iesus apud Canénse Matrimonium se autorevélat", .do_paragraph = true);
    br_repeat(2);

    add_text("Tertium Mysterium Lucis", .do_paragraph = true, .strong = true);
    add_text("Iesus regnum Dei proclámat et ad conversiónem invitat", .do_paragraph = true);
    br_repeat(2);

    add_text("Quartum Mysterium Lucis", .do_paragraph = true, .strong = true);
    add_text("Iesus in monte transfigurátur", .do_paragraph = true);
    br_repeat(2);

    add_text("Quintum Mysterium Lucis", .do_paragraph = true, .strong = true);
    add_text("Iesus Eucharístiam institut", .do_paragraph = true);
    br_repeat(2);

    custom_tag("hr");
    custom_tag("div", .id = "portuguese");
    h1("Português");
    br();

    add_text("Primeiro Mistério Luminoso", .do_paragraph = true, .strong = true);
    add_text("Jesus é batizado no Rio Jordão", .do_paragraph = true);
    br_repeat(2);

    add_text("Segundo Mistério Luminoso", .do_paragraph = true, .strong = true);
    add_text("Jesus se autorevela nas Bodas de Caná", .do_paragraph = true);
    br_repeat(2);

    add_text("Terceiro Mistério Luminoso", .do_paragraph = true, .strong = true);
    add_text("Jesus anuncia o Reino de Deus e convida à conversão", .do_paragraph = true);
    br_repeat(2);

    add_text("Quarto Mistério Luminoso", .do_paragraph = true, .strong = true);
    add_text("Transfiguração de Jesus no Monte Tabor", .do_paragraph = true);
    br_repeat(2);

    add_text("Quinto Mistério Luminoso", .do_paragraph = true, .strong = true);
    add_text("Jesus institui a Eucaristia", .do_paragraph = true);
    br_repeat(2);

    /*
    custom_tag("hr");
    custom_tag("div", .id = "english");
    h1("English");
    br();

    add_text("First Mystery of Light", .do_paragraph = true, .strong = true);
    add_text("The Baptism in the Jordan", .do_paragraph = true);
    br_repeat(2);

    add_text("Second Mystery of Light", .do_paragraph = true, .strong = true);
    add_text("The Wedding feast of Cana", .do_paragraph = true);
    br_repeat(2);

    add_text("Third Mystery of Light", .do_paragraph = true, .strong = true);
    add_text("The proclamation of the kingdom of God", .do_paragraph = true);
    br_repeat(2);

    add_text("Fourth Mystery of Light", .do_paragraph = true, .strong = true);
    add_text("The Transfiguration", .do_paragraph = true);
    br_repeat(2);

    add_text("Fifth Mystery of Light", .do_paragraph = true, .strong = true);
    add_text("The institution of the Eucharist", .do_paragraph = true);
    br_repeat(2);

    */

    end_file(&luminosa);
    return 0;
}
