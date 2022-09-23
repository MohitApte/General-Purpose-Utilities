#include<stdio.h>
#include<stdlib.h>

char *str;
void freeup1(){

    free(str);
    printf("The allocated memory is freed\n");
}
void freeup2(){

    printf("The allocated memory can be changed\n");
}


int main(){

    int retValue;
    retValue = atexit(freeup1);
    if(retValue != 0){
        printf("Registration of function 1 failed");
        exit(1);
    }
    retValue = atexit(freeup2);
    if(retValue != 0){
        printf("Registration of function 2 failed");
        exit(1);
    }



    str = malloc(20*sizeof(char));
    if(str == NULL){
        printf("Error has occured in allocating memory to the string\n");
    }


    printf("Enter the string:");
    scanf("%s",str);
    printf("The string entered is %s\n",str);






    return 0;
}
