#include "c2html.h"
#include <float.h>

void add_line(const char *text) {
    add_text(text, .do_paragraph = true);
}

int main(void) {

    const char *css_file = "../../style.css";
    const char *js_file = "../common.js";

    C2HTML_OBJ(credo, css_file, js_file);
    setup_file(&credo, "Credo in unum Deum", "../prayer/mass");

    custom_tag("div", .css_class = "goback");
    {
        button("&larr; Voltar", .on_click = "go_back()", .css_class = "goback-button");
    }
    custom_tag("div", .close = true);
    button("&uarr;", .on_click = "scroll_to_top()", .id = "scroll-to-top");

    h1("Credo Niceno-Constantinopolitano");

    custom_tag("hr");

    custom_tag("div", .css_class = "left-justified");
    {
        h1("Latim");
        br();

        add_line("Credo in unum Deum,");
        add_line("Patrem omnipoténtem, Factórem caeli et terrae,visibílium óminum et invisibílium.");
        add_line("Et in unum Dóminum, Iesum Christum, Fílium Dei Unigénitum, et ex Patre natum ante ómnia saecula.");
        add_line("Deum de Deo, lumen de lúmine, Deum verum de Deo vero, génitum, non factum, consubstantiálem Patri.");
        add_line("Per quem ómnia facta sunt.");
        add_line("Qui propter nos hómines, et propter nostram salútem, descéndit de caelis:");
        add_line("Et incarnatus est de Spíritu Sancto, ex María Vírgine, et homo factus est.");
        add_line("Crucifíxus étiam pro nobis sub Póntio Piláto; passus et sepúltus est.");
        add_line("Et ressurréxit tértia die, secúndum Scriptúras;");
        add_line("Et ascéndit in caelum, seded at déxteram Patris.");
        add_line("Et íterum ventúrus est cum glória, iudicare vivos et mórtuos; cuius regni non erit finis.");
        add_line("Et in Spíritum Sanctum, Dóminum et vivificántem, qui ex Patre Filióque procédit;");
        add_line("Qui cum Patre et Fílio simul adorátur et conglorificátur: Qui locútus est per prophétas.");
        add_line("Et unam, sanctam, cathólicam et apostólicam Ecclésiam. Confíteor unum baptísma in remissiónem peccatorum.");
        add_line("Et expecto resurrectionem mortuorum; Et vitam ventúri saeculi.");
        add_line("Amen.");

        custom_tag("hr");

        h1("Português");
        br();

        add_line("Creio em um só Deus, Pai todo-poderoso, Criador do céu e da terra, de todas as coisas visíveis e invisíveis.");
        add_line("Creio em um só Senhor, Jesus Cristo, Filho Unigênito de Deus, nascido do Pai antes de todos os séculos.");
        add_line("Deus de Deus, luz da luz, Deus verdadeiro de Deus verdadeiro, gerado, não criado, consubstancial ao Pai.");
        add_line("Por Ele todas as coisas foram feitas.");
        add_line("E, por nós, homens, e para a nossa salvação, desceu dos céus:");
        add_line("E se encarnou pelo Espírito Santo, no seio da Virgem Maria, e se fez homem.");
        add_line("Também por nos foi crucificado sob Pôncio Pilatos; padeceu e foi sepultado.");
        add_line("Ressucitou ao terceiro dia, conforme as Escrituras;");
        add_line("E subiu aos céus, onde está sentado à direita do Pai.");
        add_line("E de novo há de vir em sua glória, para julgar os vivos e os mortos; e o seu reino não terá fim.");
        add_line("Creio no Espírito Santo, Senhor que dá a vida, e procede do Pai e do Filho;");
        add_line("E com o Pai e o Filho é adorado e glorificado: Ele que falou pelos profetas.");
        add_line("Creio na Igreja una, santa, católica e apostólica. Professo um só batismo para remissao dos pecados.");
        add_line("Espero a ressurreição dos mortos; E a vida do mundo que há de vir.");
        add_line("Amén.");
    }
    custom_tag("div", .close = true);

    end_file(&credo);
    return 0;
}
