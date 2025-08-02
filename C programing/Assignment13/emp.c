#include<stdio.h>


struct Employee {
    int id;
    char name[50];
    float salary;
};

void store(struct Employee *e) {                   //pass by address
    printf("Enter Employee ID: ");
    scanf("%d", &e->id);

    printf("Enter Name: ");
    scanf("%s", e->name);  

    printf("Enter Salary: ");
    scanf("%f", &e->salary);
}


void displayByValue(struct Employee e) {               //pass by value
    
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
}


void displayByPointer(struct Employee *e) {                               //pass by address
    
    printf("ID: %d\n", e->id);
    printf("Name: %s\n", e->name);
    printf("Salary: %.2f\n", e->salary);
}


void displayArray(struct Employee e[], int n) {                              //array

    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", e[i].id);
        printf("Name: %s\n", e[i].name);
        printf("Salary: %.2f\n", e[i].salary);
    }
}

void main() {

    struct Employee e1;


    store(&e1);

    displayByValue(e1);

    
    displayByPointer(&e1);


    int n = 2;
    struct Employee empList[2];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        store(&empList[i]);
    }
    displayArray(empList, n);
}