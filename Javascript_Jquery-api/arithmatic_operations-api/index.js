function cal() {
    //console.log("Inside the function")
    var num1 = parseInt(document.getElementById('num1').value)
    var num2 = parseInt(document.getElementById('num2').value)
    var res = 0;
    var value = document.getElementById('operators').value;

    if (value === '*')
        res = num1 * num2;
    else if (value === '/')
        res = num1 / num2;
    else if (value === '-')
        res = num1 - num2;
    else
        res = num1 + num2;

    console.log(res)
    document.getElementById("result").value = res;
}

