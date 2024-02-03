function compoundInterest() {
    console.log("Inside the function")
    var principal = parseInt(document.getElementById("principal").value)
    var rate = parseInt(document.getElementById("rate").value)
    var period = parseInt(document.getElementById("period").value)

    let A = principal *
        (Math.pow((1 + rate / 100), period));

    let CI = A - principal;

    console.log(CI)
    document.getElementById("CI").value = CI;

}