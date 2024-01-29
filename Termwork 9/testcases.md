## Test Case 1: Creating and Evaluating a Single Polynomial
### Input:
- Create a polynomial P(x,y,z) = 3x^2y - 2yz^3.
- Evaluate P(x,y,z) at x=1, y=2, z=3.
### Expected Output:
- The evaluation should return the correct calculated value.
## Test Case 2: Adding Two Polynomials
### Input:
- Create POLY1(x,y,z) = x^3 + 2y^2z.
- Create POLY2(x,y,z) = 3xy - 4z^2.
- Add POLY1 and POLY2.
### Expected Output:
- The resulting polynomial should correctly represent the sum of POLY1 and POLY2.
## Test Case 3: Adding Polynomials with Common Terms
### Input:
- Create POLY1(x,y,z) = 2x^2y + 3yz^2.
- Create POLY2(x,y,z) = 5x^2y - 4yz^2.
- Add POLY1 and POLY2.
### Expected Output:
- The resulting polynomial should combine like terms correctly.
## Test Case 4: Evaluating a Polynomial with Zero Coefficients
### Input:
- Create a polynomial P(x,y,z) = 0x^3 + 0y^2 + 0z.
- Evaluate P(x,y,z) at any value of x, y, z.
### Expected Output:
- The evaluation should return 0.
## Test Case 5: Adding Polynomials Resulting in Zero Polynomial
### Input:
- Create POLY1(x,y,z) = x^3 - x^3.
- Create POLY2(x,y,z) = 2y^2 - 2y^2.
- Add POLY1 and POLY2.
### Expected Output:
- The resulting polynomial should be a zero polynomial.
## Test Case 6: Evaluating Polynomial at Boundary Values
### Input:
- Create a polynomial P(x,y,z) = 2x^2 - 3yz.
 -Evaluate P(x,y,z) at x=0, y=0, z=0.
### Expected Output:
- The evaluation should handle boundary values correctly, resulting in 0.
## Test Case 7: Invalid Input Handling
### Input:
- Attempt to create a polynomial with invalid exponents or coefficients (like non-integer values).
### Expected Output:
- The program should handle invalid inputs gracefully without crashing.
## Test Case 8: Polynomial with Large Exponents and Coefficients
### Input:
- Create a polynomial with large exponents and coefficients.
### Expected Output:
- The program should correctly handle and evaluate the polynomial without overflow errors.
## Test Case 9: Empty Polynomial Evaluation
### Input:
- Attempt to evaluate an empty polynomial.
### Expected Output:
- The program should return 0 or indicate that the polynomial is empty.
## Test Case 10: Adding Empty Polynomials
### Input:
- Add two empty polynomials.
### Expected Output:
- The resulting polynomial should be empty or zero.
