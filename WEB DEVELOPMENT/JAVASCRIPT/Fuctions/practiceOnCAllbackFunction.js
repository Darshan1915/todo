// We first define a mainFunction that takes a callback as an argument.
// The mainFunction uses setTimeout to simulate an asynchronous operation. The setTimeout function takes two arguments: a callback function and a delay time in milliseconds.
// The setTimeout function calls the callback function with the result of the operation after the specified delay time.
// We then define a callbackFunction that logs the result of the operation.
// Finally, we call the mainFunction with the callbackFunction as its argument.


//Example 1:-
function mainFunction(callback) {
    console.log("Performing operation...");
    // Use setTimeout to simulate an asynchronous operation
    setTimeout(function() {
        callback("Operation complete");
    }, 1000);
    }
    
    // Define the callback function
    function callbackFunction(result) {
    console.log("Result: " + result);
    }
    
    // Call the main function with the callback function
    mainFunction(callbackFunction);
    //This code is contributed by Veerendra Singh Rajpoot
    



//Example 2:-
// Define an array of numbers
var numbers = [1, 2, 3, 4, 5];

// Define the main function
function mainFunction(callback) {
console.log("Performing operation...");
// Use Array.forEach to loop through the array of numbers
numbers.forEach(callback);
}

// Define the callback function
function callbackFunction(number) {
console.log("Result: " + number);
}

// Call the main function with the callback function
mainFunction(callbackFunction);
// This code is contributed by Veerendra Singh Rajpoot



//Example 3:-
// Main function
const mainFunction = (callback) => {
	setTimeout(() => {
		callback([2, 3, 4]);
	}, 2000)
}

// Add function
const add = (array) => {
	let sum = 0;
	for(let i of array) {
		sum += i;
	}
	console.log(sum);
}

// Calling main function
mainFunction(add);
