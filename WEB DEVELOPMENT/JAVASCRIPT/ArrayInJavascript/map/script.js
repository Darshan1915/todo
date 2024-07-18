//Maps in javascrpt array
//The map() method returns a new array with the result of calling a function for every array elememts

//it does not change original array
//it execute a callback once for each array elements in order
//it is imp to return something from filter abd map okk


let oldarray = [{id:"2",name:"aa"},{id:"4",name:"bb"},{id:"2",name:"aa"},{id:"6",name:"zz"},{id:"8",name:"zz"}]

//Map:
const allnames = oldarray.map((curValue,index,oldarray)=>{
    // return curValue.name
    return `<li>${curValue.name}</li>`
})

//We can also use map and filter at a time:
const filterdNames = oldarray
    .filter((curValue)=> curValue.name == "aa")
    .map((curValue,index,oldarray)=>{
    // return curValue.name
    return `<li>${curValue.name}</li>`
})



//Tgis method is for below output seen only in consol of  inspect web-page
console.log(allnames);
console.log(filterdNames);

//This is method to directly show on our webpage
const div = document.getElementById("container")
div.innerHTML = `<ul>${allnames.join("")}</ul>
                <ul>${filterdNames.join("")}</ul>`



//Template Strings use back-ticks (``) rather than the quotes ("") to define a string:


// Interpolation
// Template String provide an easy way to interpolate variables and expressions into strings.

// The method is called string interpolation.

// The syntax is: ${...}
