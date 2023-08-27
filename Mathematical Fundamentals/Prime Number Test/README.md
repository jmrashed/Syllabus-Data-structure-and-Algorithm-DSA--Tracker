# Prime Number Checker
This program is designed to determine whether a given integer is a prime number or not. A prime number is defined as a positive integer greater than 1 that has no divisors other than 1 and itself.

# Code Overview
## primeNumber Function
The primeNumber function takes an integer n as an input and returns a boolean indicating whether n is prime or not. It follows these steps:

- If n is less than or equal to 1, the function returns false, as prime numbers are greater than 1.
- If n is equal to 2, the function returns true, recognizing 2 as the only even prime number.
- If n is even (i.e., n % 2 == 0), the function returns false, excluding other even numbers from being prime.
- The loop iterates from 3 to the square root of n, incrementing i by 2 in each iteration (skipping even numbers).
- Within the loop, it checks if n is divisible by i without any remainder. If true, n is not prime, and the function returns false.
- If the loop completes without finding any divisors of n, the function returns true, indicating that n is a prime number.
## main Function
- The main function takes user input for an integer n and utilizes the primeNumber function to determine whether n is prime or not. It then outputs the result accordingly.

## How to Use
- Compile the C++ code using a C++ compiler.
- Run the compiled executable.
- Input an integer n.
- The program will output whether n is prime or not.
### Example
For example, when the user enters 17, the program will output:

## mathematica 
Prime

Since 17 is a prime number.

# Optimization
The code optimizes the primality check by:

Handling small cases (<= 1, 2, and even numbers) distinctly.
Checking only odd divisors up to the square root of n.
This approach significantly reduces the number of checks needed, improving efficiency.

Feel free to adjust the formatting of the Markdown content as needed.