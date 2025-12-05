const today = new Date()
const days = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];

const mysteries = {
    Sunday: "Joyful Mysteries",
    Monday: "Joyful Mysteries",
    Tuesday: "Sorrowful Mysteries",
    Wednesday: "Sorrowful Mysteries",
    Thursday: "Luminous Mysteries",
    Friday: "Sorrowful Mysteries",
    Saturday: "Joyful Mysteries"
};

const dayOfWeek = days[today.getDay()];
const mysteryOfDay = mysteries[dayOfWeek];

document.getElementById("day").textContent = `Today is ${dayOfWeek}.`;
document.getElementById("mystery").textContent = `The mystery for today is: ${mysteryOfDay}.`;
