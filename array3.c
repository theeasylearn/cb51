// write a program that check a string is palimbrom or not
// madam => reverse> madam => palimbrom

// 1. string input
// 2. reverse a string
// 3. check bot are same
// 4. same = palimbrom or not same = not palimbrom

#include<stdio.h>
void main()
{
    char name[50];
    char reverse[50];
    int last;
    int count=0 ;

    // string input = hello
    printf("enter a string : ");
    for(int i=0 ; i<50 ; i++){
        scanf("%c",&name[i]);
        if(name[i]=='\n'){
            last = i;
            break;
        }
    }

    // reverse string = olleh
    for(int i=last-1 ; i>=0 ; i--){
        // printf("%c",name[i]);

        reverse[count] = name[i];
        count++;
    }

    // print reverse string
    for(int i=0; i<last;i++){
       printf("%c",reverse[i]);
    }

    // check both array
    for(int i=0 ; i<last ;i++){
        if(name[i]==reverse[i]){
            //printf("\n%d is same",i);
            if(i==last-1){
                printf("\nit is palimbrom");
            }
        }
        else{
            printf("\nit is not palimbrom");
            break;
        }
    }




    //char name[5] = {'h','e','l','l','o'};

    //reverse[0] = name[4];
    //reverse[1] = name[3];
    //reverse[2] = name[2];
    //reverse[3] = name[1];
    //reverse[4] = name[0];

    //printf("%c",reverse[0]);
    //printf("%c",reverse[1]);
    //printf("%c",reverse[2]);
    //printf("%c",reverse[3]);
    //printf("%c",reverse[4]);

}