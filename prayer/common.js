function go_back() {
    window.history.back();
}

function scroll_to_top() {
    window.scrollTo({
        top: 0,
        behavior: 'smooth'
    });
}

/*
window.onscroll = function() {
    const scroll_to_top_button = document.getElementById("scroll-to-top");
    if(document.body.scrollTop > 20 || document.documentElement.scrollTop > 20) {
        scroll_to_top_button.style.display = "block";
    } else {
        scroll_to_top_button.style.display = "none";
    }
}

window.onload = function() {}
*/



function colorizeCrosses() {
  const walker = document.createTreeWalker(
    document.body,
    NodeFilter.SHOW_TEXT,
    null,
    false
  );

  const nodesToReplace = [];
  let currentNode;

  while ((currentNode = walker.nextNode())) {
    const parentTag = currentNode.parentNode.tagName;
    if (['SCRIPT', 'STYLE', 'TEXTAREA', 'INPUT'].includes(parentTag)) {
      continue;
    }

    if (currentNode.nodeValue.includes('✠')) {
      nodesToReplace.push(currentNode);
    }
  }

  nodesToReplace.forEach(node => {
    const parent = node.parentNode;
    const text = node.nodeValue;
    
    const tempContainer = document.createElement('span');
    
    const regex = new RegExp('(✠)', 'g');
    tempContainer.innerHTML = text.replace(regex, '<span style="color: #8B0000;">$1</span>');

    while (tempContainer.firstChild) {
      parent.insertBefore(tempContainer.firstChild, node);
    }
    parent.removeChild(node);
  });
}

if (document.readyState === 'loading') {
  document.addEventListener('DOMContentLoaded', colorizeCrosses);
} else {
  colorizeCrosses();
}
