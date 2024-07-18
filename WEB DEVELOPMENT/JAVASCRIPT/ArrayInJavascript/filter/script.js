//Filters in javascrpt array
//The filter() method returns a new array with all elements that pass the test defined by the given function.

//it does not change original array
//it does not execute a callback for array elements without values

// let old_array = [{id:"2"},{id:"4"},{id:"2"},{id:"6"},{id:"8"}]
// let old_array = [1,2,3,4,5,6,7,8,9,10]
let old_array = [{id:"2",name:"add"},{id:"4",name:"aqwdd"},{id:"2",name:"adqweqed"},{id:"6",name:"aqweqweqwedd"},{id:"9",name:"adqweqweqdqd"}]
// let new_array = []

new_array = old_array.filter((curValue,index)=>{
    if(curValue.id % 2==0){
        return true
    } 
    else{
        return false
    }
})

console.log("Old array is: ");
console.log(old_array);
console.log("new array is: ");
console.log(new_array);




// let oldarray = [1,2,3,4,5,6,7,8,9,10]
// let newarray = []

// for (let i=0; i<oldarray.length;i++){
//     if(oldarray[i]%2==0){
//         newarray.push(oldarray[i])
//     }
// }

// console.log("Old array is: ");
// console.log(oldarray);
// console.log("new array is: ");
// console.log(newarray);