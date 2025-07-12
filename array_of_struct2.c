// write a program that make student structure
// find the topper

#include <stdio.h>
int topper[5];

struct student
{
    char name[50];
    int age;
    int marks[3];
    int total;
    float avg;
};


void display(struct student s[5])
{
    for (int j = 0; j < 5; j++)
    {
        printf("\nname : ");
        for (int i = 0; i < 50; i++)
        {
            printf("%c", s[j].name[i]);
            if (s[j].name[i] == '\n')
            {
                break;
            }
        }

        printf("\nage : %d", s[j].age);
        printf("\nmarks : sub1=%d sub2=%d sub3=%d", s[j].marks[0], s[j].marks[1], s[j].marks[2]);
        printf("\ntotal : %d", s[j].total);
        printf("\navg : %.2f %%", s[j].avg);
    }

    // for(int i=0;i<5;i++)
    // {
    //     printf("\n%d",s[i].age);
    // }
}

void find_topper(struct student s[5])
{
    int top=0;
    for (int i = 0; i < 5; i++)
    {
        if (s[i].total > top)
        {
            top = s[i].total;
            // printf("\n%d",top);
            topper[i] = top;

        }
    }

    int index = 0;
    for(int i =0;i<5;i++)
    {
        int high =0;
        if(topper[i]>high){
            high=topper[i];
            index = i;
        }

    }

    // printf("%d",index);
    printf("\ntopper student");
    printf("\nname: ");
    for(int i=0;i<50;i++)
    {
        printf("%c",s[index].name[i]);
        if(s[index].name[i] == '\n'){
            break;
        }
    }

    printf("\nage : %d\nmarks : sub1=%d sub2=%d sub3=%d\ntotal:%d\navg:%.2f %%",s[index].age,s[index].marks[0],s[index].marks[1],s[index].marks[2],s[index].total,s[index].avg);
    
}

void main()
{
    struct student s[5];

    for (int j = 0; j < 5; j++)
    {
        printf("\n-------------- student %d -----------------\n", j + 1);
        fflush(stdin);
        printf("enter student name : ");
        for (int i = 0; i < 50; i++)
        {
            scanf("%c", &s[j].name[i]);
            if (s[j].name[i] == '\n')
            {
                break;
            }
        }

        printf("enter student age : ");
        scanf("%d", &s[j].age);

        for (int i = 1; i <= 3; i++)
        {
            printf("enter subject%d marks : ", i);
            scanf("%d", &s[j].marks[i - 1]);
        }

        s[j].total = s[j].marks[0] + s[j].marks[1] + s[j].marks[2];
        s[j].avg = s[j].total / 3;
    }

    // display(s);
    find_topper(s);
    
    // printf("\n");
    // for(int i=0;i<50;i++)
    // {
    //     printf("%c",s[0].name[i]);
    //     if(s[0].name[i] == '\n'){
    //         break;
    //     }
    // }

    // printf("\nage : %d",s[0].age);
    // printf("\nsub1 : %d",s[0].marks[0]);
    // printf("\nsub2 : %d",s[0].marks[1]);
    // printf("\nsub3 : %d",s[0].marks[2]);
    // printf("\ntotal : %d",s[0].total);
    // printf("\navg : %.2f %%",s[0].avg);
}