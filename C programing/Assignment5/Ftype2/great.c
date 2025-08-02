//using type 2

#include<stdio.h>
char great();
void main(){
    char a=great();
    printf("%c",a);
}
char great(){
    int x,y,z;
    printf("enter three number");
    scanf("%d%d%d",&x,&y,&z);

    if(x>y){
        if(x>z){
       return 'x';
    }
    else {
        return 'z';
    }
}
else{
    if(y>z){
        return 'y';
    }
    else{
        return 'z';
    }
}

}