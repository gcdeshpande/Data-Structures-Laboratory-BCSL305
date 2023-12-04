#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;        // Name of the day
    int date;          // Date of the day
    char *description; // Description of the activity
} Day;

void create(Day *week, int size) {
    for (int i = 0; i < size; i++) {
        week[i].name = (char *)malloc(20 * sizeof(char)); // Allocate memory for name
        week[i].description = (char *)malloc(100 * sizeof(char)); // Allocate memory for description
    }
}

void read(Day *week, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter name of day %d: ", i + 1);
        scanf("%s", week[i].name);
        printf("Enter date: ");
        scanf("%d", &week[i].date);
        printf("Enter description: ");
        scanf(" %[^\n]", week[i].description); // Read a line of text including spaces
    }
}

void display(Day *week, int size) {
    printf("\nWeek's Activity Details:\n");
    for (int i = 0; i < size; i++) {
        printf("Day: %s, Date: %d, Activity: %s\n", week[i].name, week[i].date, week[i].description);
    }
}

int main() {
    int size = 7; // 7 days in a week
    Day *week = (Day *)malloc(size * sizeof(Day)); // Dynamically allocate the array

    create(week, size); // Allocate memory for names and descriptions
    read(week, size);   // Read data from user
    display(week, size); // Display the week's activities

    // Free the allocated memory
    for (int i = 0; i < size; i++) {
        free(week[i].name);
        free(week[i].description);
    }
    free(week);

    return 0;
}
