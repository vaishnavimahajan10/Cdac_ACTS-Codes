function print() {
    console.log("Inside the print function")
    var msg = document.getElementById('message').value
    var times = parseInt(document.getElementById('times').value)

    //for testing purpose in the console 
    console.log(msg)
    console.log(times)

    var str = ""

    for (let i = 0; i < times; i++) {
        str = str + "<br>" + msg

    }

    console.log(str)
    document.getElementById("print").innerHTML = str;
}
