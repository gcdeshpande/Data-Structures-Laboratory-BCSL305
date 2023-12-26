## Test Cases for Postfix Expression Evaluation
Test Case 1: Simple Expression
- Input: 123*+
- Expected Output: 7
- Description: Evaluates a basic postfix expression.

Test case 2: Expression with All Operators
- Input: 562/+4*7+
- Expected Output: 25
- Description: Tests all supported operators in a single expression.

Test Case 3: Invalid Expression (Insufficient Operands)
- Input: 23+*
- Expected Output: Error message or invalid result
- Description: Detects and handles invalid postfix expressions.

Test Case 4: Expression with Single Digit Operands Only
- Input: 959-*2/
- Expected Output: 2
- Description: Confirms handling of single-digit operands.

## Test Cases for Tower of Hanoi
Test Case 1: One Disk
- Input: 1
- Expected Output: A single move from A to C
- Description: Tests the simplest case with only one disk.

Test Case 2: Multiple Disks
- Input: 3
- Expected Output: Sequence of 7 moves
- Description: Verifies correctness with a standard multi-disk scenario.

Test Case 3: No Disk
- Input: 0
- Expected Output: No moves or a message indicating no disks
- Description: Tests edge case with zero disks.

Test Case 4: Large Number of Disks
- Input: A relatively large number (e.g., 6)
- Expected Output: Correct sequence of 2^n - 1 moves
- Description: Assesses performance and correctness with a larger number of disks.

## General Test Cases
Test Case 1: Invalid Menu Option
- Input: An invalid option (e.g., 4)
- Expected Output: Error message and prompt to try again
- Description: Tests how the program handles invalid menu selections.

Test Case 2: Repeated Usage
- Scenario: Use various features in succession before exiting.
- Expected Output: Correct responses to each input
- Description: Ensures that the program remains stable over multiple uses in a single run.

Test Case 3: Exit Functionality
- Input: Select the exit option from the menu.
- Expected Output: Program exits without error.
- Description: Verifies that the exit option functions correctly.
