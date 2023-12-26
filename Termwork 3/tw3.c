#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 10 // Maximum size of the stack

// Stack structure
struct Stack {
    int top;
    unsigned capacity;
    char array[MAX];
};

// Function to create a stack
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    return stack;
}

// Stack is full when the top is equal to the last index
bool isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// Stack is empty when top is -1
bool isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to add an item to stack
void push(struct Stack* stack, char item) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->array[++stack->top] = item;
    printf("Pushed to stack: %c\n", item);
}

// Function to remove an item from stack
char pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack->array[stack->top--];
}

// Function to return the top element of the stack
char peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is Empty\n");
        return -1;
    }
    return stack->array[stack->top];
}

// Function to display the stack
void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are:\n");
    for (int i = stack->top; i >= 0; i--)
        printf("%c\n", stack->array[i]);
}

// Function to check if the number is a palindrome
bool isPalindrome(char str[], struct Stack* stack) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        push(stack, str[i]);
    }

    for (int i = 0; i < length; i++) {
        if (str[i] != pop(stack))
            return false;
    }

    return true;
}

int main() {
    struct Stack* stack = createStack(MAX);
    int choice;
    char item;

    while (1) {
        printf("\n1. Push to stack\n2. Pop from stack\n3. Display top element\n4. Display all stack elements\n5. Check if a number is a palindrome\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a character to push: ");
                scanf(" %c", &item); // Note the space before %c
                push(stack, item);
                break;
            case 2:
                item = pop(stack);
                if (item != -1)
                    printf("Popped from stack: %c\n", item);
                break;
            case 3:
                item = peek(stack);
                if (item != -1)
                    printf("Top element is: %c\n", item);
                break;
            case 4:
                display(stack);
                break;
            case 5: {
                char number[100];
                printf("Enter a number: ");
                scanf("%s", number);
                if (isPalindrome(number, stack))
                    printf("The number is a palindrome.\n");
                else
                    printf("The number is not a palindrome.\n");
                break;
            }
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
