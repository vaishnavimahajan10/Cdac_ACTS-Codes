function performOperation() {
    var str1 = document.getElementById('string1').value
    var str2 = document.getElementById('string2').value;
    var str3 = document.getElementById('string3').value;

    if (document.getElementById('toUpperCase').checked) {
        uppperCase(str1, str2);
    }
    else if (document.getElementById('toLowerCase').checked) {
        lowerCase(str1, str2);
    }
    else if (document.getElementById('concatenate').checked) {
        concatenate(str1, str2)
    }
    else if (document.getElementById('trimSpaces').checked) {
        trimspaces(str1);
    }
    else if (document.getElementById('search').checked) {
        searchInstring(str1, str2);
    }
    else if (document.getElementById('replace').checked) {
        replcaeString(str1, str2, str3)
    }
}

uppperCase = (a, b) => {

    document.getElementById('result').innerHTML = `${a.toUpperCase()} <br> ${b.toUpperCase()}`
}

lowerCase = (a, b) => {

    document.getElementById('result').innerHTML = `${a.toLowerCase()} <br> ${b.toLowerCase()}`
}

concatenate = (str1, str2) => {

    document.getElementById('result').innerHTML = `${str1 + str2}`
}

trimspaces = (str1) => {
    document.getElementById('result').innerHTML = `${str1.trim()}`
}

searchInstring = (str1, str2) => {
    var res = true;
    console.log(typeof (str1))
    if (str1.includes(str2))
        res = true;
    else {
        res = false;
    }

    document.getElementById('result').innerHTML = res

}

replcaeString = (str1, str2, str3) => {

    document.getElementById('result').innerHTML = `${str1.replace(str2, str3)}`;

}




