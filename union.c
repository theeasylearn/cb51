// person

#include<stdio.h>

union country{
    int adhar_no[12];
    int passport;
};

struct person{
    char name[50];
    int age;
    int mobile[10];
    union country status;

};

void main()
{
    struct person p1;
    char check;

    printf("enter your name : ");
    for(int i=0;i<50;i++ )
    {
        scanf("%c",&p1.name[i]);
        if(p1.name[i]=='\n'){
            break;
        }
    }

    printf("enter your age : ");
    scanf("%d",&p1.age);

    printf("enter your mobile : ");
    for(int i=0;i<10;i++)
    {
        if(i==9){
            scanf("%d",&p1.mobile[i]);
            break;
        }
    }

    fflush(stdin);
    printf("are you indian(t=true,f=false) : ");
    scanf("%c",&check);

    if(check=='t' || check =='T'){
        printf("enter your adhar no : ");
        for(int i=0;i<12;i++)
        {
            if(i==11){
                scanf("%d",&p1.status.adhar_no[i]);
                break;
        }
        }
    }
    else if(check=='f' || check =='F'){
        printf("enter your passport no : ");
        scanf("%d",&p1.status.passport);
    }

    printf("\n\nname : ");
    for(int i=0;i<50;i++)
    {
        printf("%c",p1.name[i]);
        if(p1.name[i]=='\n'){
            break;
        }
    }

    printf("age : %d",p1.age);
    printf("\nmobile : ");
    for(int i=0;i<10;i++)
    {
        if(i==9){
            printf("%d",p1.mobile[i]);
            break;
        }
    }

    printf("\nstatus : ");
    if(check=='t' || check =='T'){
        printf(" your adhar no : ");
        for(int i=0;i<12;i++)
        {
             if(i==11){
                printf("%d",p1.status.adhar_no[i]);
                break;
        }
        }
    }
    else if(check=='f' || check =='F'){
        printf(" your passport no : ");
        printf("%d",p1.status.passport);
    }

}