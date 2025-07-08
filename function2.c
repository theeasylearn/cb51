// write a function find user bmi
#include<stdio.h>

void BMI(float weight,float height)
{
    height = height/100 ; 
    float ans = weight / (height*height);
    printf("\nyour BMI : %.2f\n",ans);

    if(ans<18.5){
        printf("status : underweight");
    }
    else if(ans>=18.5 && ans<=24.9){
        printf("status : healthy");
    }
    else if(ans>=25 && ans<=29.9){
        printf("status : overweight");
    }
    else if(ans>=30){
        printf("status : obesity");

    }
}

void main()
{
    //BMI(52,161);
    //BMI(30,151);
    //BMI(60,151);
    //BMI(100,151);

    float weight,height;
    printf("enter your weight(kg) : ");
    scanf("%f",&weight);

    printf("enter your height(cm) : ");
    scanf("%f",&height);

    BMI(weight,height);
}