const readline = require('readline');

function Pangram(sentence) {
    const letters = new Set();
    for (let ch of sentence) {
        if (/[a-zA-Z]/.test(ch)) {
            letters.add(ch);
        }
    }
    return letters.size === 26;
}

const rl = readline.createInterface( {
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter a string of lowercase Latin letters: ", function(sentence) {
    console.log(Pangram(sentence));
    rl.close();
});