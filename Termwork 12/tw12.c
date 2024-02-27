#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 100 // Size of the hash table

typedef struct {
    int key;
    int flag; // 0 if empty, 1 if occupied
} HashTableEntry;

HashTableEntry HT[TABLE_SIZE];

// Initialize hash table
void initializeHashTable() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        HT[i].flag = 0; // Mark all entries as empty
    }
}

// Hash function
int hashFunction(int key) {
    return key % TABLE_SIZE;
}

// Insert a key into the hash table
void insert(int key) {
    int index = hashFunction(key);
    int originalIndex = index;
    while (HT[index].flag == 1) {
        index = (index + 1) % TABLE_SIZE;
        if (index == originalIndex) { // Table is full
            printf("Hash table is full. Cannot insert key: %d\n", key);
            return;
        }
    }
    HT[index].key = key;
    HT[index].flag = 1;
    printf("Inserted key: %d at index: %d\n", key, index);
}

// Search for a key in the hash table
int search(int key) {
    int index = hashFunction(key);
    int originalIndex = index;
    while (HT[index].flag != 0) {
        if (HT[index].key == key) {
            return index; // Key found
        }
        index = (index + 1) % TABLE_SIZE;
        if (index == originalIndex) {
            break; // Came full circle, key not found
        }
    }
    return -1; // Key not found
}

int main() {
    initializeHashTable();

    // Example usage
    insert(1024);
    insert(2028);
    insert(1024); // This will cause a collision and will be resolved by linear probing

    int key = 1024;
    int searchResult = search(key);
    if (searchResult != -1) {
        printf("Key %d found at index: %d\n", key, searchResult);
    } else {
        printf("Key %d not found\n", key);
    }

    return 0;
}
