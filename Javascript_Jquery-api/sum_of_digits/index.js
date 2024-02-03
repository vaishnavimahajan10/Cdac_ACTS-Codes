function sumOfDigits() {
    
    var num = parseInt(document.getElementById('number').value)
    var sum = 0;

    while (num > 0) {
        var rem = num % 10;
        sum = sum + rem;
        num = Math.floor(num / 10);
    }

    var str = "The sum of digit:" + sum
    document.getElementById("print").innerHTML = str;
}

