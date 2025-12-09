function go_back() {
    window.history.back();
}

function scroll_to_top() {
    window.scrollTo({
        top: 0,
        behavior: 'smooth'
    });
}

window.onscroll = function() {
    const scroll_to_top_button = document.getElementById("scroll-to-top");
    if(document.body.scrollTop > 20 || document.documentElement.scrollTop > 20) {
        scroll_to_top_button.style.display = "block";
    } else {
        scroll_to_top_button.style.display = "none";
    }
}

window.onload = function() {}
