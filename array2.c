// write a program that take a string input
// a
// collection of characters : hello

#include<stdio.h>
void main()
{
    char name[50];
    int last ;

    printf("enter your name : ");
    for(int i=0;i<50;i++){
        scanf("%c",&name[i]);
        if(name[i]=='\n'){
            last = i;
            break;
        }
    }
    // scanf("%c",&name[1]);
    // scanf("%c",&name[2]);
    // scanf("%c",&name[3]);
    // scanf("%c",&name[4]);

    // for(int i=0;i<50;i++){
    //     printf("%c",name[i]);

    //     if(name[i]=='\n'){
    //         // printf("enter");
    //         break;
    //     }
    // }
    for(int i = last-1 ; i>=0 ;i--){
        printf("%c",name[i]);
    }


    
}
