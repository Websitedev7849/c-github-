const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function factorial() {
    rl.question("please enter a number : " , num => {

        let answer = 1;
    
        for (var i = num; i > 0; i--) {
            answer = answer * i;
        }
    
        console.log(answer);
        factorial();
    });
}

factorial();