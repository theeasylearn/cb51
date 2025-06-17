// write a program that perform grad system
// 90-100 -> A
// 80-90 -> B
// 70-80 -> C
// 60-70 -> D
// 60>N -> F(FAIL)

// 3 subject marks -> percentage -> grad

// step
// 1) take 3 sub marks input
// 2) calculate percentage
// 3) give grad according to percentage

#include<stdio.h>
void main()
{
    int eng,maths,science;
    float percentage;
    char grad;

    printf("enter eng marks : ");
    scanf("%d",&eng);

    printf("enter maths marks : ");
    scanf("%d",&maths);

    printf("enter science marks : ");
    scanf("%d",&science);

    if((eng<=100 && eng>=0) && (maths<=100 && maths>=0) && (science<=100 && science>=0)){
        percentage = ((eng+maths+science)*100)/300 ;

        if(percentage>=90 && percentage<=100){
            grad='A';
        }
        else if (percentage>=80 && percentage<=89)
        {
            grad='B';
        }

        else if (percentage>=70 && percentage<=79)
        {
            grad='C';
        }
        else if (percentage>=60 && percentage<=69)
        {
            grad='D';
        }
        else{
            grad='F';
        }

        printf("\npercentage : %.2f %%",percentage);
        printf("\ngrad : %c",grad);
        if(percentage>=60){
            printf("\nresult : pass");
        }   
        else{
            printf("\nresult : fail");
        }     

    }
    else{
        printf("enter valid marks!!!");
    }
    



}