#include <stdio.h>


struct Date {
    int day;
    int month;
    int year;
};


void store(struct Date *d) {                       //pass by address
    printf("Enter Day: ");
    scanf("%d", &d->day);

    printf("Enter Month: ");
    scanf("%d", &d->month);

    printf("Enter Year: ");
    scanf("%d", &d->year);
}


void displayByValue(struct Date d) {                       //pass by value
    
    printf("Date: %02d/%02d/%04d\n", d.day, d.month, d.year);
}


void displayByPointer(struct Date *d) {                  //pass by address
    
    printf("Date: %02d/%02d/%04d\n", d->day, d->month, d->year);
}


void displayArray(struct Date d[], int n) {                // using array
    
    for (int i = 0; i < n; i++) {
        printf("Date %d: %02d/%02d/%04d\n", i + 1, d[i].day, d[i].month, d[i].year);
    }
}


void main() {
    
    struct Date d1;

    
    store(&d1);                                       // pass by address
    displayByValue(d1);                                      // pass by value
    displayByPointer(&d1);                                  // pass by pointer

    
    int n = 2;
    struct Date dateList[2];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Date %d:\n", i + 1);
        store(&dateList[i]);
    }

    
    displayArray(dateList, n);
}