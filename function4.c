// write a function that calculate add,sub,div,mul
// with argument with return value function
#include<stdio.h>

int add(int a,int b)
{
    int ans = a+b;
    return ans;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
float div(float a,float b){return a/b;}


// wthout argument with return value function
float getpi(){
    return 3.14 ;
}

void main()
{
    // int addition;
    // addition = add(1,2);
    // printf("%d",addition);

    // printf("\n%d",add(2,3));
    // printf("\n%d",sub(2,3));
    // printf("\n%d",mul(2,3));
    // printf("\n%f",div(2,3));

    // find circle area pi r r

    float r;
    printf("enter radius : ");
    scanf("%f",&r);
    float area = getpi()*r*r;
    printf("circle area : %.2f",area);
}