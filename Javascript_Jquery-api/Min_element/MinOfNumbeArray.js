$(document).ready(() => {
  let arrayLength = prompt("Enter length of array: ");
  let arrayElement = [];
  let x;
  for (var i = 0; i < arrayLength; i++) {
    x = parseInt(prompt(`Enter element ${i + 1} : `));
    arrayElement.push(x);
  }
  $("#div1").html(
    `<h2>You have provided array elements are: ${arrayElement}</h2>`
  );
  let min;
  min = arrayElement[0];
  for (var i = 0; i < arrayLength; i++) {
    if (arrayElement[i] < min) {
      min = arrayElement[i];
    }
  }
  $("#div2").html(`<h2>The minimum of given number is : ${min}</h2>`);
});
