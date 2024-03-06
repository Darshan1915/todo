//Synchronous and Asynchronous are two types

//setTimeout() function
//The setTimeout() methods calls a function after a number of milliseconds.
//The setTimeout() method execute a block of code after the specified time.
//The method executes the code only once
//setTimeout() is an asynchronous function , meaninng that the timer function will not pause the execution of other functons in the function's stack.
//Syntax:-
//         setTimeout(Functoin,milliseconds);

//eg.
//Example for get cheese

// function getCheese(callBack){
//     setInterval(() => {
//         const Cheese =" 🧈 ";
//         console.log("Here is the heese",Cheese);
//         callBack(Cheese);
//     }, 2000);
// }
function getCheese(cheeseready){
    setTimeout(() => {
        const Cheese =" 🧈 ";//cheese is here
        console.log("Here is the cheese",Cheese);
        cheeseready(Cheese);//we give cheese afhter 2 sec
    }, 2000);
}

function getpizza(readypizza){
    setTimeout(() => {
        const pizza = "🍩🧈"
        console.log("Here is the pizza",pizza);
        readypizza(pizza);
    }, 2000);
}

getCheese ((Cheese) => {
    getpizza((Cheese),(pizza)=>{
        console.log("Got the pizza",pizza);
    })
})





/*
//eg.
//Example for get pizza ( pizze ke liye dough chahiye or dough ke liye cheese)
//pizza -> dough -> cheese

function getCheese(cheeseready){
    setTimeout(() => {
        const Cheese =" 🧈 ";
        console.log("Here is the cheese",Cheese);
        cheeseready(Cheese);
    }, 2000);
}

function getDough (Cheese, Doughready){
    setTimeout(()=>{
        const Dough = "🍩🧈";
        console.log("Here is the dough", Dough);
        Doughready(Dough);
    })
}
function getPizza (Dough, Pizzaready){
    setTimeout(()=>{
        const Pizza = "🍕🍩🧈";
        console.log("Here is the Pizza", Pizza);
        Pizzaready(Pizza);
    })
}

getCheese ((Cheese) => {
    getDough(Cheese,(Dough)=>{
        getPizza((Cheese),(Dough),( Pizza)=>{
            console.log("Got the Pizza",Pizza);
        })
    })
})
*/