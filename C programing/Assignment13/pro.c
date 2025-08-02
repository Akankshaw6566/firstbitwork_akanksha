#include <stdio.h>


struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

void store(struct Product *p) {                          //pass by address
    printf("Enter Product ID: ");
    scanf("%d", &p->id);

    printf("Enter Product Name: ");
    scanf("%s", p->name);  

    printf("Enter Quantity: ");
    scanf("%d", &p->quantity);

    printf("Enter Price: ");
    scanf("%f", &p->price);
}


void displayByValue(struct Product p) {                         //pass by value
    
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Quantity: %d\n", p.quantity);
    printf("Price: %.2f\n", p.price);
}


void displayByPointer(struct Product *p) {                    //pass by address
    
    printf("ID: %d\n", p->id);
    printf("Name: %s\n", p->name);
    printf("Quantity: %d\n", p->quantity);
    printf("Price: %.2f\n", p->price);
}


void displayArray(struct Product p[], int n) {                  //using array
    
    for (int i = 0; i < n; i++) {
        printf("\nProduct %d:\n", i + 1);
        printf("ID: %d\n", p[i].id);
        printf("Name: %s\n", p[i].name);
        printf("Quantity: %d\n", p[i].quantity);
        printf("Price: %.2f\n", p[i].price);
    }
}


void main() {
    
    struct Product p1;

    store(&p1);                                 // pass by address
    displayByValue(p1);                             // pass by value
    displayByPointer(&p1);                                  // pass by pointer

    
    int n = 2;
    struct Product productList[2];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Product %d:\n", i + 1);
        store(&productList[i]);
    }

    
    displayArray(productList, n);
}