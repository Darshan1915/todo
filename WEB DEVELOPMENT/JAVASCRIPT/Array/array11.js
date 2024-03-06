const nums = [4,5,1,2,6,7,9,8,0]
console.log(nums.push(11));//add at last index
console.log(nums);
console.log(nums.pop());//remove last index
console.log(nums);
console.log(nums.indexOf(1));
console.log(nums);
console.log(nums.includes(0));
console.log(nums);
nums.shift();
console.log(nums);
nums.sort();
console.log(nums);

const subArray = nums.slice(2,5);
console.log(subArray);







/*

//Making array:
const words = ["Apple","Banana","Mango", 12, true,12.67]
console.log(words);
console.log(words[1]);
//we can pass anything in array in Javascript
console.log(words.length);

const newarray = words;

newarray[1]= "kivi";//change in original
console.log(newarray);
console.log(words);

*/