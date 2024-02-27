Let's assume a smaller hash table size for simplicity in demonstration, say TABLE_SIZE = 10.

### Test Case 1: Simple Insert and Search
#### Input: Insert key 3
#### Expected Output:
- Inserted key: 3 at index: 3
- Search: 3
- Search Expected Output:
- Key 3 found at index: 3
### Test Case 2: Collision Resolution with Linear Probing
#### Input: Insert keys 13, 23, 33
#### Expected Output:
- Inserted key: 13 at index: 3
- Inserted key: 23 at index: 4 (Linear probing finds the next available slot after a collision with key 13)
- Inserted key: 33 at index: 5 (Linear probing resolves collision with keys 13 and 23)
- Search: 23
- Search Expected Output:
- Key 23 found at index: 4
### Test Case 3: Search for Non-existing Key
#### Input: Insert keys 1, 11
- Search: 21 (Do not insert this key)
#### Search Expected Output:
- Key 21 not found
### Test Case 4: Insert Into a Full Hash Table
- For this test case, first, ensure that TABLE_SIZE is small (e.g., 5) to easily demonstrate a full table.

#### Input: Insert keys to fill the table, e.g., 0, 1, 2, 3, 4
- Attempt to Insert: 5 after the table is full
#### Expected Output for Insertion of 5:
- Hash table is full. Cannot insert key: 5
### Test Case 5: Handling Sequential Collisions
#### Input: Insert keys that lead to sequential collisions, e.g., 7, 17, 27, 37
#### Expected Output:
- Inserted key: 7 at index: 7
- Inserted key: 17 at index: 8
- Inserted key: 27 at index: 9
- Inserted key: 37 at index: 0 (Circular wrap-around due to linear probing)
- Search: 37
- Search Expected Output:
- Key 37 found at index: 0
