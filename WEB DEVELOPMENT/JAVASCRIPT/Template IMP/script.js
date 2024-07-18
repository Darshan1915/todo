//exaple 1 string templete:

let price = 10;
let VAT = 0.25;
let total = `Total: ${(price * (1 + VAT)).toFixed(2)}`;

document.getElementById("demo").innerHTML = total;




//exaple 2 HTML template:

// <script>
// let header = "Template Strings";
// let tags = ["template strings", "javascript", "es6"];

// let html = `<h2>${header}</h2><ul>`;

// for (const x of tags) {
//   html += `<li>${x}</li>`;
// }

// html += `</ul>`;
// document.getElementById("demo").innerHTML = html;
// </script>