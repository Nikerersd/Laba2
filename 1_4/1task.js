let N = 26;
if (N > 26) {
    console.log("Incorrect data");
} 
else {
    for (let i = N; i > 0; i--) {
        let Str1 = "";
        for (let k = N; k >= i; k--) {
            let Str = String.fromCharCode('A'.charCodeAt(0) + k - 1);
            Str1 = Str1 + Str + " ";
        }
        console.log(Str1 + " ");
    }
}