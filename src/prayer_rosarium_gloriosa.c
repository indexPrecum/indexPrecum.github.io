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
    button("&uarr;", .on_click = "scroll_to_top()", .id = "scroll-to-top");

    h1("Mysteria Gloriosa");

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
    custom_tag("div", .id = "latin", .css_class = "left-justified");
    h1("Latim");
    br();

    add_text("Primum Mysterium Gloriae", .do_paragraph = true, .strong = true);
    add_text("Iesus a mortuis resurgit", .do_paragraph = true);
    br_repeat(2);

    add_text("Secundum Mysterium Gloriae", .do_paragraph = true, .strong = true);
    add_text("Iesus caelos ad Patris gloriam ascendit", .do_paragraph = true);
    br_repeat(2);

    add_text("Tertium Mysterium Gloriae", .do_paragraph = true, .strong = true);
    add_text("Spíritus Paráclitus supra discípulos descéndit", .do_paragraph = true);
    br_repeat(2);

    add_text("Quartum Mysterium Gloriae", .do_paragraph = true, .strong = true);
    add_text("Maria Virgo in caelum assúmpla est", .do_paragraph = true);
    br_repeat(2);

    add_text("Quintum Mysterium Gloriae", .do_paragraph = true, .strong = true);
    add_text("Maria Virgo in caelum regína coronátur", .do_paragraph = true);
    br_repeat(2);

    custom_tag("hr");
    custom_tag("div", .id = "portuguese");
    h1("Português");
    br();

    add_text("Primeiro Mistério Glorioso", .do_paragraph = true, .strong = true);
    add_text("Ressureição de Jesus", .do_paragraph = true);
    br_repeat(2);

    add_text("Segundo Mistério Glorioso", .do_paragraph = true, .strong = true);
    add_text("Ascensão de Jesus ao céu", .do_paragraph = true);
    br_repeat(2);

    add_text("Terceiro Mistério Glorioso", .do_paragraph = true, .strong = true);
    add_text("Descida do Espírito Santo sobre os apóstolos", .do_paragraph = true);
    br_repeat(2);

    add_text("Quarto Mistério Glorioso", .do_paragraph = true, .strong = true);
    add_text("Assunção da Virgem Maria ao céu", .do_paragraph = true);
    br_repeat(2);

    add_text("Quinto Mistério Glorioso", .do_paragraph = true, .strong = true);
    add_text("Coroação da Virgem Maria no céu", .do_paragraph = true);
    br_repeat(2);

    /*
    custom_tag("hr");
    custom_tag("div", .id = "english");
    h1("English");
    br();

    add_text("First Glorious Mystery", .do_paragraph = true, .strong = true);
    add_text("The ressurection of Jesus", .do_paragraph = true);
    br_repeat(2);

    add_text("Second Glorious Mystery", .do_paragraph = true, .strong = true);
    add_text("The ascension of Jesus in to heaven", .do_paragraph = true);
    br_repeat(2);

    add_text("Third Glorious Mystery", .do_paragraph = true, .strong = true);
    add_text("The descent of the Holy Spirit", .do_paragraph = true);
    br_repeat(2);

    add_text("Fourth Glorious Mystery", .do_paragraph = true, .strong = true);
    add_text("The Assumption of Virgin Mary in to heaven", .do_paragraph = true);
    br_repeat(2);

    add_text("Fifth Glorious Mystery", .do_paragraph = true, .strong = true);
    add_text("The crowning of Our Lady as Queen of Heaven", .do_paragraph = true);
    br_repeat(2);
    */

    end_file(&gloriosa);
    return 0;
}
