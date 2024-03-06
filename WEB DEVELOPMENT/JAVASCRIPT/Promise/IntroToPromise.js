//To creat a promise object we use promise () constructer

// let promise = new promise(function(){
    //code
// })

//THe promise () constructer takes a function as an argument.
//The function also accept two  function accept() and resolv()
//If the promise returns successfully, the resolve-
//function us called . And if an erro occurs, the reject() function called.


const tickit = new Promise (function(resolv,reject){
    const isBoarded = false
    if(isBoarded){
        resolv("You are in flight")
    }else{
        reject("Fight is cancled")
    }
})

tickit.then((data) =>{
    console.log("wohoo",data);
})
tickit.catch((data) =>{
    console.log("oo no",data);
})
tickit.finally(()=>{
    console.log("I am always executed");
})