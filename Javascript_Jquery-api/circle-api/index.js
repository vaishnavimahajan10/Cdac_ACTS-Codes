function display() {

    var radius = parseInt(document.getElementById("radius").value)

    var res1 = perimeter(radius)
    var res2 = area(radius);

    document.getElementById("area").innerHTML = `Perimeter of circle is:  ${res1}`
    document.getElementById("perimeter").innerHTML = `The area of circle is :  ${res2}`

}


function area(radius) {

    return Math.PI * radius * radius;
}

function perimeter(radius) {

    return 2 * Math.PI * radius;
}
