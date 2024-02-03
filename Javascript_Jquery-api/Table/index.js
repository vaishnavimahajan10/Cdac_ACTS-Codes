function print() {
   
    var num = parseInt(document.getElementById('number').value)
    str = " * Table of given number * "
    var res = 1;
    for (let i = 1; i <= 10; i++) {
        str = str + "<br>" + `${num} * ${i} = ${num * i}`
    }


    console.log(str)
    document.getElementById("print").innerHTML = str;
}

