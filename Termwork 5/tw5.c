#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define MAX 100


// Stack structure for postfix evaluation
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};

// Function to create a stack of given capacity
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

// Stack is full when top is equal to the last index
bool isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// Stack is empty when top is -1
bool isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to add an item to the stack
void push(struct Stack* stack, int item) {
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}

// Function to remove an item from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack))
        return -1;
    return stack->array[stack->top--];
}

// Function to evaluate a postfix expression
int evaluatePostfix(char* exp) {
    struct Stack* stack = createStack(strlen(exp));
    int i;

    for (i = 0; exp[i]; ++i) {
        // If the scanned character is an operand (number here), push it to the stack.
        if (isdigit(exp[i]))
            push(stack, exp[i] - '0');
        else {
            int val1 = pop(stack);
            int val2 = pop(stack);
            switch (exp[i]) {
            case '+': push(stack, val2 + val1); break;
            case '-': push(stack, val2 - val1); break;
            case '*': push(stack, val2 * val1); break;
            case '/': push(stack, val2 / val1); break;
            case '%': push(stack, val2 % val1); break;
            case '^': push(stack, (int)pow(val2, val1)); break;
            }
        }
    }
    return pop(stack);
}

// Recursive function to solve the Tower of Hanoi problem
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}


int main() {
    int choice;
    char postfixExp[MAX];
    int n;

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Evaluate Postfix Expression\n");
        printf("2. Solve Tower of Hanoi\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter postfix expression: ");
                scanf("%s", postfixExp);
                printf("Postfix Evaluation: %s = %d\n", postfixExp, evaluatePostfix(postfixExp));
                break;
            case 2:
                printf("Enter the number of disks: ");
                scanf("%d", &n);
                printf("The sequence of moves involved in the Tower of Hanoi are:\n");
                towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
                break;
            case 3:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
