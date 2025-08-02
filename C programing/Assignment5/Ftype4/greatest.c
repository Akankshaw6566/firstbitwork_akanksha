//using type 4 using nested if else

#include<stdio.h>
int great(int,int,int);
void main(){
    int x,y,z;
    printf("enter the number");
    scanf("%d %d %d",&x,&y,&z);
    int a=great(x,y,z);
    if(a==1){
        printf("%d",x);
    }
    else if(a==2){
        printf("%d",y);
    }
   else{ 
        printf("%d",z);
    }
    int great(int x,int y,int z);
    if(x>z){
        if(x>y){
        return 1;
    }
    else{
        return 3;
    }
}
else{
    if(y>z){
        return 2;
    }
    else{
        return 3;
    }
}
}
