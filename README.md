# OPERATORS-IN-CPP
PORGRAM 1:
This C++ program checks whether a given integer is positive, zero, or negative. It performs the following steps:

1. Prompt User Input: The program prompts the user to enter an integer.
2. Condition Check: It evaluates whether the entered integer is non-negative (i.e., greater than or equal to zero).
3. Output Result:
   - If the integer is non-negative, it prints "The number is positive or zero."
   - If the integer is negative, it prints "The number is negative."
4. Program Termination: After displaying the result, the program ends with a return value of 0 to indicate successful execution.

This simple program demonstrates basic input and output operations, as well as conditional statements in C++.

PROGRAM 2:
This C++ program determines the quadrant of a point in a 2D Cartesian coordinate system based on its `x` and `y` coordinates. Here’s a detailed description of the program:

1. User Input: 
   - The program prompts the user to enter the `x` and `y` coordinates of a point.
   - It then reads these coordinates from the user input.

2. Quadrant Determination:
   - First Quadrant: If both `x` and `y` are positive (`x > 0` and `y > 0`), the program outputs "The number is in the first quadrant."
   - Second Quadrant: If `x` is negative and `y` is positive (`x < 0` and `y > 0`), it outputs "The number is in the second quadrant."
   - Third Quadrant: If both `x` and `y` are negative (`x < 0` and `y < 0`), it outputs "The number is in the third quadrant."
   - Fourth Quadrant: If `x` is positive and `y` is negative (`x > 0` and `y < 0`), it outputs "The number is in the fourth quadrant."

3. Output: Based on the conditions, the program prints which quadrant the point belongs to.

 Key Points:
- The program uses conditional statements to evaluate the position of the point relative to the origin and determine the appropriate quadrant.
- Note that the program does not handle the cases where the point lies on the axes (i.e., where `x` or `y` is zero).

This program effectively illustrates the use of basic conditional logic to classify a point’s location in a coordinate system.

PROGRAM 3:
This C++ program calculates and assigns a grade based on the average marks obtained in five subjects. Here’s a detailed description:

User Input:

The program prompts the user to enter the marks for five subjects.
It reads these marks from the user input.
Average Calculation:
M=M1+M2+MM3+M4+M5/5
This average is then used to determine the grade.
Grade Assignment:
Grade O: If the average is 90 or above, it prints "The grade is O."
Grade A+: If the average is greater than 80 but less than 90, it prints "The grade is A+."
Grade A: If the average is greater than 70 but less than 80, it prints "The grade is A."
Grade B: If the average is greater than 60 but less than 70, it prints "The grade is B."
Grade F: If the average is 60 or below, it prints "The grade is F.

PROGRAM 4:
This C++ program reverses and prints the digits of a given integer. Here's a detailed description of how the program works:

User Input:

The program prompts the user to enter an integer n.
It reads this integer from the user input.
Digit Extraction and Printing:

The program uses a while loop to process the integer while n is greater than zero.
Inside the loop:
The last digit of n is extracted using the modulus operation (n % 10). This digit is stored in the variable x.
The digit x is then printed.
The integer n is updated by removing its last digit using integer division by 10 (n = n / 10).
Loop Execution:

The loop continues until n becomes zero. Each iteration extracts and prints the next digit from the end of the number.
Key Points:
Reverse Order: The digits of the number are printed in reverse order because the modulus operation retrieves the least significant digit first.
Termination: The loop terminates when n becomes zero, indicating that all digits have been processed and printed.
