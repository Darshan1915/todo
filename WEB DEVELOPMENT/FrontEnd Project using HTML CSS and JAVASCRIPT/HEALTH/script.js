function calculateInsurance() {


    var age = parseInt(document.getElementById('age').value);
    var bmi = parseFloat(document.getElementById('bmi').value);
    var children = parseInt(document.getElementById('children').value);
    var smoker = document.getElementById('smoker').checked;


    var baseCost = 100; 


    if (age < 18) {
        baseCost += 50; 
    } else if (age >= 18 && age <= 30) {
        baseCost += 100; 
    } else if (age > 30 && age <= 50) {
        baseCost += 200; 
    } else {
        baseCost += 300; 
    }


    if (bmi >= 30) {
        baseCost += 150; 
    } else if (bmi >= 25 && bmi < 30) {
        baseCost += 100; 
    }


    baseCost += children * 50;

 
    
    if (smoker) {
        baseCost += 200; 
    }

    
    document.getElementById('result').innerHTML = "Your estimated health insurance cost is: $" + baseCost;
}