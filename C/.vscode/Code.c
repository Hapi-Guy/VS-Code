#include <stdio.h>
#include <string.h>

// Define a structure to store name and age
struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person people[10]; // Assuming a maximum of 10 entries
    int numEntries = 0;

    // Populate the data (you can also read data from a file)
    strcpy(people[0].name, "Alice");
    people[0].age = 30;
    strcpy(people[1].name, "Bob");
    people[1].age = 25;

    // Add more entries if needed

    char inputName[50];

    while (1) {
        printf("Enter a name (or 'exit' to quit): ");
        scanf("%s", inputName);

        if (strcmp(inputName, "exit") == 0) {
            break;
        }

        // Search for the name and display age if found
        int found = 0;
        for (int i = 0; i < numEntries; i++) {
            if (strcmp(inputName, people[i].name) == 0) {
                printf("%s's age is %d\n", inputName, people[i].age);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Name not found\n");
        }
    }

    return 0;
}
