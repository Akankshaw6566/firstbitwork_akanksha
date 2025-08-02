//using type 2

#include<stdio.h>
float basic();
void main(){
    float a=basic();
    printf("%d",a);
}
float basic(){
    float basic,total,da,ta,hr;
    printf("enter your salary");
    scanf("%d",&basic);

    if(basic<=5000){
        da=(10*basic)/100.0;
        ta=(20*basic)/100.0;
        hr=(25*basic)/100.0;
        float total=da+ta+hr+basic;
        return total;
    }
    else{
        da=(15*basic)/100.0;
        ta=(25*basic)/100.0;
        hr=(30*basic)/100.0;
        total=da+ta+hr+basic;
        return total;
    }
}