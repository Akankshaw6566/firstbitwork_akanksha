#include <stdio.h>


struct Distance {
    int feet;
    int inch;
};


void store(struct Distance *d) {                            //pass by address
    printf("Enter Feet: ");
    scanf("%d", &d->feet);

    printf("Enter Inches: ");
    scanf("%d", &d->inch);
}


void displayByValue(struct Distance d) {                      //pass by value
    
    printf("Distance: %d feet %d inches\n", d.feet, d.inch);
}


void displayByPointer(struct Distance *d) {                         //pass by address
    
    printf("Distance: %d feet %d inches\n", d->feet, d->inch);
}


void displayArray(struct Distance d[], int n) {                           //using array

    for (int i = 0; i < n; i++) {
        printf("Distance %d: %d feet %d inches\n", i + 1, d[i].feet, d[i].inch);
    }
}


void main() {
    struct Distance d1;

    
    store(&d1);                               // pass by address
    displayByValue(d1);                         // pass by value
    displayByPointer(&d1);                               // pass by pointer


    int n = 2;
    struct Distance distList[2];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Distance %d:\n", i + 1);
        store(&distList[i]);
    }

    
    displayArray(distList, n);
}