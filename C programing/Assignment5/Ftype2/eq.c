//using type 2

#include<stdio.h>
int triangle();
void main(){
    int t=triangle();
       if(t==1)
        printf("is it equilatoral triangle");
        else if(t==2)
        printf("is it isoscalen triangle");
        else
        printf("is it scalen tirangle");
}
int triangle(){
    int x,y,z;
    printf("enter three positive side");
    scanf("%d %d %d",&x,&y,&z);

    if(x==y&&y==z&&z==x){
        return 1;
    }
    else if(x==y || x==z || y==z){
        return 2;
    }
    else{
        return 3;
    }
}

       
