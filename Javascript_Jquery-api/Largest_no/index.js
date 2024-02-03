function largerNo() {
    console.log("Inside the function")
    var num1 = parseInt(document.getElementById("num1").value)
    var num2 = parseInt(document.getElementById("num2").value)
    var num3 = parseInt(document.getElementById("num3").value)


    console.log(num1)  //100
    console.log(num2)  //40
    console.log(num3)  //30
    var res = 0;
    if (num1 > num2) {
        if (num1 > num3)
            res = num1
        else
            res = num3;
    }
    else {
        if (num2 > num3)
            res = num2;
        else
            res = num3;
    }

    console.log(res)
    document.getElementById("result").value = res;

}