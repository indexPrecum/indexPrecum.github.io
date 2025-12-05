const day_mystery = {
    "domingo": { misterio: "Gloriosos", misterioLatim: "Mysteria Gloriosa" },
    "segunda-feira": { misterio: "Gozosos", misterioLatim: "Mysteria Gaudiosa" },
    "terça-feira": { misterio: "Dolorosos", misterioLatim: "Mysteria Dolorosa" },
    "quarta-feira": { misterio: "Gloriosos", misterioLatim: "Mysteria Gloriosa" },
    "quinta-feira": { misterio: "Luminosos", misterioLatim: "Mysteria Luminosa" },
    "sexta-feira": { misterio: "Dolorosos", misterioLatim: "Mysteria Dolorosa" },
    "sábado": { misterio: "Gozosos", misterioLatim: "Mysteria Gaudiosa" }
};

function highlightMystery() {
    const hoje = new Date();
    const diaDaSemana = hoje.toLocaleDateString('pt-BR', { weekday: 'long' }).toLowerCase();

    for (let i = 1; i <= 4; i++) {
        document.getElementById(`mystery-${i}`).classList.remove('highlight');
    }

    const todayMystery = day_mystery[diaDaSemana];

    if (todayMystery) {
        const buttonMapping = {
            "Gloriosos": 1,
            "Gozosos": 2,
            "Dolorosos": 3,
            "Luminosos": 4,
        };

        const buttonIndex = buttonMapping[todayMystery.misterio];
        if (buttonIndex) {
            document.getElementById(`mystery-${buttonIndex}`).classList.add('highlight');
        }

        const displayText = `${diaDaSemana.charAt(0).toUpperCase() + diaDaSemana.slice(1)}, ${todayMystery.misterioLatim}`;
        document.getElementById("display-text").innerText = displayText;
    }
}

window.onload = function() {
    highlightMystery();
};
