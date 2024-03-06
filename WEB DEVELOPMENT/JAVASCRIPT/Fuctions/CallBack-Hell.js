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
    }, 2000)
}
function getPizza (Dough, Pizzaready){
    setTimeout(()=>{
        const Pizza = "🍕🍩🧈";
        console.log("Here is the Pizza", Pizza);
        Pizzaready(Pizza);
    }, 2000)
}

getCheese ((Cheese) => {
    getDough((Cheese),(Dough)=>{
        getPizza((Cheese),(Dough),( Pizza)=>{
            console.log("Got the Pizza",Pizza);
        })
    })
})