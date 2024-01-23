## Test Cases for Doubly Linked List operations
### Test Case 1: Insert Employee at End
#### Input:
- Choose option 1 (Insert Employee at End).
- Enter employee details (e.g., SSN: "11111", Name: "Test User 1", Dept: "HR", Designation: "Manager", Salary: 60000, Phone No: "555-0001").
#### Expected Output:
- Employee should be added at the end of the list.
- When displaying the list, the newly added employee should be the last entry.
### Test Case 2: Display Employees
#### Input:
- Choose option 2 (Display Employees) after adding one or more employees.
#### Expected Output:
- All the employees in the list should be displayed in the order they were added.
### Test Case 3: Count Employees
#### Input:
- Choose option 3 (Count Employees) after adding/removing employees.
#### Expected Output:
- The total count of employees in the list should be displayed, matching the actual number of employees in the list.
### Test Case 4: Delete Employee at End
#### Input:
- Add at least one employee, then choose option 4 (Delete Employee at End).
#### Expected Output:
- The last employee in the list should be removed.
- Displaying the list should not show the deleted employee.
### Test Case 5: Insert Employee at Front
#### Input:
- Choose option 5 (Insert Employee at Front).
- Enter employee details (e.g., SSN: "22222", Name: "Test User 2", Dept: "Finance", Designation: "Analyst", Salary: 50000, Phone No: "555-0002").
#### Expected Output:
- Employee should be added at the front of the list.
- When displaying the list, the newly added employee should be the first entry.
### Test Case 6: Delete Employee at Front
#### Input:
- Add at least one employee, then choose option 6 (Delete Employee at Front).
#### Expected Output:
- The first employee in the list should be removed.
- Displaying the list should not show the deleted employee.
### Test Case 7: Empty List Operations
#### Input:
- Perform delete operations (options 4 and 6) on an empty list.
#### Expected Output:
- The program should handle the situation gracefully, displaying a message like "List is already empty!".
### Test Case 8: Exiting the Program
#### Input:
- Choose option 7 (Exit).
#### Expected Output:
- The program should terminate without errors.
### Test Case 9: Invalid Input Handling
#### Input:
- Enter an invalid option (e.g., 8 or a non-integer).
#### Expected Output:
- The program should display a message like "Invalid choice!" and prompt the user again.
### Test Case 10: Continuity in Operations
#### Input:
- Perform a series of operations in sequence (e.g., insert at end, insert at front, delete at end, display, count).
#### Expected Output:
- Each operation should reflect the changes made by the previous operations, demonstrating the continuity and proper management of the list.
