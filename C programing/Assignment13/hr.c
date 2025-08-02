#include <stdio.h>


struct HR {
    int id;
    char name[50];
    float salary;
    float commission;
};


void store(struct HR *h) {                       //pass by address
    printf("Enter HR ID: ");
    scanf("%d", &h->id);

    printf("Enter Name: ");
    scanf("%s", h->name);  

    printf("Enter Salary: ");
    scanf("%f", &h->salary);

    printf("Enter Commission: ");
    scanf("%f", &h->commission);
}


void displayByValue(struct HR h) {                       //pass by value
    
    printf("ID: %d\n", h.id);
    printf("Name: %s\n", h.name);
    printf("Salary: %.2f\n", h.salary);
    printf("Commission: %.2f\n", h.commission);
}


void displayByPointer(struct HR *h) {                              //pass by address
    
    printf("ID: %d\n", h->id);
    printf("Name: %s\n", h->name);
    printf("Salary: %.2f\n", h->salary);
    printf("Commission: %.2f\n", h->commission);
}


void displayArray(struct HR h[], int n) {                    //using array

    for (int i = 0; i < n; i++) {
        printf("\nHR %d:\n", i + 1);
        printf("ID: %d\n", h[i].id);
        printf("Name: %s\n", h[i].name);
        printf("Salary: %.2f\n", h[i].salary);
        printf("Commission: %.2f\n", h[i].commission);
    }
}


void main() {
    
    struct HR h1;

    
    store(&h1);                              // pass by address
    displayByValue(h1);                         // pass by value
    displayByPointer(&h1);                               // pass by pointer

    
    int n = 2;
    struct HR hrList[2];

    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for HR %d:\n", i + 1);
        store(&hrList[i]);
    }

    
    displayArray(hrList, n);
}