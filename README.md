# BMI-calculator

Here are the functionalities implemented in the program:

1. Input Handling:
   - Prompts the user to enter their height in meters and weight in kilograms.
   - Accepts user input for height and weight.
   - Validates user input to ensure that height and weight are positive values (greater than 0).

2. BMI Calculation and Display:
   - Calculates the Body Mass Index (BMI) using the formula: BMI = weight / (height * height).
   - Displays the calculated BMI value with two decimal places.
   
3. BMI Classification and Feedback:
   - Provides feedback to the user based on their BMI value:
     - If BMI is less than or equal to 18.5, it indicates that the user is underweight.
     - If BMI is between 19.0 and 24.9 (inclusive), it congratulates the user for falling within the healthy weight range.
     - If BMI is between 25.0 and 29.9 (inclusive), it informs the user that they are overweight.
     - If BMI is greater than 29.9, it suggests considering lifestyle changes as the user is considered obese.
   
4. Looping and Validation:
   - Utilizes a while loop to continuously prompt the user for input until valid values are provided.
   - If the user enters invalid values (negative or zero for height or weight), it displays an error message and prompts the user to try again.

5. Exiting the Program:
   - Ends the program after displaying the BMI value and classification feedback.

These functionalities collectively provide a simple Body Mass Index (BMI) calculator and classification tool for the user.