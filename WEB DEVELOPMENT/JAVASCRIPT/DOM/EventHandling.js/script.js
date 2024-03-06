//Event Handling


function myFunction(){
    console.log("I am clicked");
}

function Mouse(){
    console.log("Mouse over");
}

const MOUSE = ()=>{
    console.log("Mouse move");
}

function keydownevent(){
    console.log("key down was pressed");
}
function keyupevent(){
    console.log("key up was pressed");
}
function keypressedevent(){
    console.log("key was pressed");
}


//Event Listeners(most usable)

const box1 = document.getElementById('box-1')
box1.addEventListener('click',()=>{
    console.log("click by event");
})
const box2 = document.getElementById('box-2')
box2.addEventListener('mousemove',()=>{
    console.log("click by event");
})

const nameInput= document.getElementById('nameInput')
nameInput.addEventListener('keydown',(information)=>{
    console.log("key"+" "+ information.key);
})


// Bubling and capture ( Bubling VS capture ) are also imp
//inner most atrribut 1st executed and the outer of that and so on ( bubbling )
// we want to right at last 'True' if we dont need buubling and then capture take place (Vice versa of bubbling) 