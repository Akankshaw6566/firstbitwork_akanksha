#include <stdio.h>


struct Time {
    int hour;
    int min;
    int sec;
};


void store(struct Time *t) {                             //pass by address
    printf("Enter Hour: ");
    scanf("%d", &t->hour);

    printf("Enter Minutes: ");
    scanf("%d", &t->min);

    printf("Enter Seconds: ");
    scanf("%d", &t->sec);
}


void displayByValue(struct Time t) {                    //pass by value
    
    printf("Time: %02d:%02d:%02d\n", t.hour, t.min, t.sec);
}


void displayByPointer(struct Time *t) {                           //pass by address
    
    printf("Time: %02d:%02d:%02d\n", t->hour, t->min, t->sec);
}


void displayArray(struct Time t[], int n) {                     //using array

    for (int i = 0; i < n; i++) {
        printf("Time %d: %02d:%02d:%02d\n", i + 1, t[i].hour, t[i].min, t[i].sec);
    }
}


void main() {
    
    struct Time t1;

    
    store(&t1);                                          // pass by address
    displayByValue(t1);                               // pass by value
    displayByPointer(&t1);                             // pass by pointer

    
    int n = 2;
    struct Time timeList[2];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Time %d:\n", i + 1);
        store(&timeList[i]);
    }

    
    displayArray(timeList, n);
}