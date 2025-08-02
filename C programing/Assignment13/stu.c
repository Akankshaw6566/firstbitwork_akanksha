#include <stdio.h>


struct Student {
    int rollno;
    char name[50];
    float marks;
};
void store(struct Student *s) {                        //pass by address
    printf("Enter Roll Number: ");
    scanf("%d", &s->rollno);

    printf("Enter Name: ");
    scanf("%s", s->name);  

    printf("Enter Marks: ");
    scanf("%f", &s->marks);
}


void displayByValue(struct Student s) {                    //pass by value
    
    printf("Roll Number: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}


void displayByPointer(struct Student *s) {                             //pass by address
    
    printf("Roll Number: %d\n", s->rollno);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);
}

void displayArray(struct Student s[], int n) {                        //pass by array
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Roll Number: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }
}


void main() {
    
    struct Student s1;


    store(&s1);                          // pass by address

                    
    displayByValue(s1);                  //pass by value

    displayByPointer(&s1);


    int n = 2;
    struct Student sList[2];                // Array of students


    for(int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i+1);
        store(&sList[i]);
    }


    displayArray(sList, n);
}