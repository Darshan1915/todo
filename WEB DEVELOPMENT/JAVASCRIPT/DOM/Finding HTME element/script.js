//Finding elenets by:
// 1. ID = document.getElementById()
// 2. tagname = document.getElementsByTagName()
// 3. classname = document.getElementsByClassName()
// 4. selector = document.querySelectorAll()

const myBody = document.body
console.log(myBody);

const box2 = document.getElementById('box-2')
console.log(box2);

const divs = document.getElementsByTagName('div')
console.log(divs);

const boxes = document.getElementsByClassName("box")
console.log(boxes);

const randoms = document.querySelector('.container')
console.log(randoms);