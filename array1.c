#include<stdio.h>
void main()
{
    // int marks[5];
    // int value = 0;
    int n;

    printf("enter size of marks : ");
    scanf("%d",&n);

    int marks[n];

    // int count=1;

    // marks[0] = 20;
    // marks[1] = 20;
    // marks[2] = 20;
    // marks[3] = 200;
    // marks[4] = 200;

    for(int i=0 ; i<n ; i++){
        printf("enter marks for student : ");
        scanf("%d",&marks[i]);
        // marks[i] = value ; 
    }


    // printf("%d",marks[0]);
    // printf("\n%d",marks[4]);

    for(int i=0 ; i<n ; i++){
        printf("\nmarks%d : %d",i+1,marks[i]);
        // count++;
    }
}

