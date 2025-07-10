#include<stdio.h>

// defining struct
struct student{
    char name[50];
    int roll;
    int age;
    float marks;
};

void main()
{
    // creating obj of student struct
    struct student s1;

    // s1.roll = 101;
    // printf("%d",s1.roll);

    printf("enter student name : " );
    for(int i=0;i<50;i++){
        scanf("%c",&s1.name[i]);
        if(s1.name[i] == '\n'){
            break;
        }
    }

    printf("enter roll number : ");
    scanf("%d",&s1.roll);

    printf("enter student age  : ");
    scanf("%d",&s1.age);

    printf("enter student marks: ");
    scanf("%f",&s1.marks);


    printf("\nname : ");
    for(int i=0;i<50;i++){
        printf("%c",s1.name[i]);
        if(s1.name[i]=='\n'){
            break;
        }
    }
    printf("\nroll no:%d\nage : %d\nmarks : %.2f %%",s1.roll,s1.age,s1.marks);
    
}