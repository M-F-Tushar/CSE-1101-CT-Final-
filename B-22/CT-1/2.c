2. C Program to Store and Display Scientist Information Using Structure
#include <stdio.h>

// Define a structure for Scientist
struct Scientist {
    char name[20];
    float age;
    int publications;
};

int main() {
    // Declare and initialize two Scientist variables
    struct Scientist sntst1 = {"Dr. Mamun", 55.5, 45};
    struct Scientist sntst2 = {"Einstein", 78.5, 53};

    // Print the details of sntst1
    printf("Name: %s\n", sntst1.name);
    printf("Age: %.1f\n", sntst1.age);
    printf("Publication: %d\n", sntst1.publications);

    return 0;
}
Sample Output
Name: Dr. Mamun
Age: 55.5
Publication: 45

