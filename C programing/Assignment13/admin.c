#include <stdio.h>


struct Admin {
    int id;
    char name[50];
    float salary;
    float allowance;
};


void store(struct Admin *a) {                     //pass by address
    printf("Enter Admin ID: ");
    scanf("%d", &a->id);

    printf("Enter Name: ");
    scanf("%s", a->name);  

    printf("Enter Salary: ");
    scanf("%f", &a->salary);

    printf("Enter Allowance: ");
    scanf("%f", &a->allowance);
}


void displayByValue(struct Admin a) {                  //pass by value
    
    printf("ID: %d\n", a.id);
    printf("Name: %s\n", a.name);
    printf("Salary: %.2f\n", a.salary);
    printf("Allowance: %.2f\n", a.allowance);
}


void displayByPointer(struct Admin *a) {                      //pass by address
    
    printf("ID: %d\n", a->id);
    printf("Name: %s\n", a->name);
    printf("Salary: %.2f\n", a->salary);
    printf("Allowance: %.2f\n", a->allowance);
}


void displayArray(struct Admin a[], int n) {         //using array

    for (int i = 0; i < n; i++) {
        printf("\nAdmin %d:\n", i + 1);
        printf("ID: %d\n", a[i].id);
        printf("Name: %s\n", a[i].name);
        printf("Salary: %.2f\n", a[i].salary);
        printf("Allowance: %.2f\n", a[i].allowance);
    }
}


void main() {
    
    struct Admin a1;

    
    store(&a1);                              // pass by address
    displayByValue(a1);                               // pass by value
    displayByPointer(&a1);                        // using pointer

    
    int n = 2;
    struct Admin adminList[2];

    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Admin %d:\n", i + 1);
        store(&adminList[i]);
    }


    displayArray(adminList, n);
}
