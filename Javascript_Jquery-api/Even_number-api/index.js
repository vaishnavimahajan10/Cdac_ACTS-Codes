function print() {
    console.log("Inside the print function")
    var num = parseInt(document.getElementById('number').value)
    str = "Even Numbers are :"

    for (let i = 1; i <= num; i++) {
        if (i % 2 == 0)
            str = str + "<br>" + i;
    }

   
    console.log(str)
    document.getElementById("print").innerHTML = str;
}

