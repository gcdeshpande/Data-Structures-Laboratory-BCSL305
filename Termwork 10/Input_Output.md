Let's consider the Binary Search Tree (BST) operations as described in the program. Given the input sequence of integers to create the BST:

```
6, 9, 5, 2, 8, 15, 24, 14, 7, 8, 5, 2
```
Note: Duplicates will be ignored in this implementation since we haven't handled duplicates specifically. The BST will only include unique values from this sequence.

Sample Input and Output
Menu Display

Menu
1. Display Inorder
2. Display Preorder
3. Display Postorder
4. Search
5. Exit \
Enter your choice:
Option 1: Display Inorder \
When the user selects option 1, the output will be the BST traversed in Inorder, which displays elements in ascending order.

Input
```
1
```
Output

```
2 5 6 7 8 9 14 15 24
```
Option 2: Display Preorder
Selecting option 2 displays the BST traversed in Preorder (root, left, right).

Input
```
2
```
Output
```
6 5 2 8 7 9 15 14 24
``` 
Option 3: Display Postorder
Selecting option 3 displays the BST traversed in Postorder (left, right, root).

Input
```
3
```
Output
```
2 7 8 5 14 24 15 9 6
```
Option 4: Search \
When the user selects option 4, they are prompted to enter an element to search for in the BST. The program will then report whether the element is found or not.

Input (Element found)
```4```
Enter the element to search: 7
Output
Element found

Input (Element not found)
```4```
Enter the element to search: 10
Output

Element not found
Option 5: Exit \
Selecting option 5 exits the program.

Input
```
5
```
Output

Exiting... 

