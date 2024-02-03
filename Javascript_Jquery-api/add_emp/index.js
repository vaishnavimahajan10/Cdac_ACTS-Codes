class Employee {

    constructor(id, name, sal) {
        this.id = id;
        this.name = name;
        this.sal = sal;
    }


}

const employees = []

const displayEmps = () => {
    var str = "<table border='1'><tr><th>Employee Id</th><th>Name</th><th>Mobile</th></tr>";
    for (var e of employees) {
        str += `<tr><td>${e.id}</td><td>${e.name}</td><td>${e.sal}</td></tr>`
    }
    str += "</table>";
    document.getElementById("display").innerHTML = str;
}

employees.push(new Employee(1, "vaishnavi", 25000))
employees.push(new Employee(2, "komal", 34000))
employees.push(new Employee(3, "vinakshi", 56000))
employees.push(new Employee(4, "prerna", 67800))

displayEmps()



