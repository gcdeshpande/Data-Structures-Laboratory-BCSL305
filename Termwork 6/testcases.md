Test Case 1: Normal Enqueue and Dequeue Operations
Input:
Insert characters 'A', 'B', 'C'.
Delete an element.
Display the queue.
Expected Output:
After insertions, queue should have 'A', 'B', 'C'.
After deletion, queue should have 'B', 'C'.
Display shows 'B', 'C'.
Test Case 2: Queue Overflow
Input:
Insert characters continuously until the queue is full (more than MAX elements).
Expected Output:
Messages for successful insertions up to the MAX limit.
Overflow message when trying to insert beyond the MAX limit.
Test Case 3: Queue Underflow
Input:
Attempt to delete an element from an empty queue.
Expected Output:
Underflow message indicating the queue is empty.
Test Case 4: Insertion After Deletion
Input:
Insert a few characters, then delete a few, and then insert again.
Expected Output:
Successful insertions and deletions.
Correct queue content on display after the operations.
Test Case 5: Fill, Empty, and Refill Queue
Input:
Insert characters until the queue is full.
Delete all characters from the queue.
Insert characters again.
Expected Output:
Queue reaches full capacity and then becomes empty.
Successful insertion after the queue is emptied.
Test Case 6: Continuous Circular Operation
Input:
Insert and delete characters alternately in a manner that tests the circular nature of the queue.
Expected Output:
Successful insertions and deletions demonstrating the circular functionality (i.e., when an element is deleted, the space it occupied can be filled by a new element).
Test Case 7: Display Empty Queue
Input:
Display the queue when it is empty.
Expected Output:
Message indicating the queue is empty.
Test Case 8: Exit Program
Input:
Choose the option to exit the program.
Expected Output:
Program terminates without any errors.
