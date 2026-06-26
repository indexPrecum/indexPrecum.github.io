with_tag(div, .css_class = "goback") {
    with_tag(button, .on_click = "go_back()", .css_class = "goback-button") {
        add_text_raw("&larr; Go Back");
    }
}

