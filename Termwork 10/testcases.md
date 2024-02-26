Test Case 1: Create BST and Test Inorder Traversal
Objective: Verify that the BST is correctly created and that Inorder traversal displays elements in ascending order.
Input: Insert sequence: 6, 9, 5, 2, 8, 15, 24, 14, 7
Expected Output: 2, 5, 6, 7, 8, 9, 14, 15, 24
Test Case 2: Preorder Traversal
Objective: Ensure Preorder traversal follows the root-left-right order.
Input: Use the BST created in Test Case 1.
Expected Output: Sequence that starts with the root and follows the root-left-right pattern.
Test Case 3: Postorder Traversal
Objective: Ensure Postorder traversal follows the left-right-root order.
Input: Use the BST created in Test Case 1.
Expected Output: Sequence that ensures all left nodes and right nodes are visited before the root in each subtree.
Test Case 4: Search for an Element that Exists
Objective: Verify that the search function correctly identifies an existing element.
Input: Search for 7.
Expected Output: Element found
Test Case 5: Search for an Element that Does Not Exist
Objective: Verify that the search function correctly handles a non-existing element.
Input: Search for 11.
Expected Output: Element not found
Test Case 6: Insert Duplicate Elements
Objective: Test how the program handles the insertion of duplicate elements.
Input: Insert 6, 9, 5, 2, 8, 15, 24, 14, 7, 8, 5, 2 (note the duplicates).
Expected Behavior: The BST does not include duplicate entries. Verify with Inorder traversal.
Expected Output: 2, 5, 6, 7, 8, 9, 14, 15, 24
Test Case 7: Empty BST Traversal
Objective: Ensure traversals handle an empty BST gracefully.
Action: Attempt Inorder, Preorder, and Postorder traversal on an empty BST.
Expected Output: No output or a specific message indicating the BST is empty.
Test Case 8: Search in an Empty BST
Objective: Test the search function on an empty BST.
Input: Attempt to search for any element, e.g., 10, in an empty BST.
Expected Output: Element not found
