#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;
    int m;
    int n;
    printf("How many elements you wish to add:");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;++i){
        scanf("%d",&ptr[i]);
    }
    printf("The elements entered are:\n");
    for(int i=0;i<n;++i){
        printf("%d\n",ptr[i]);
    }
    printf("How many elements you wish to add more:");
    scanf("%d",&m);
    ptr = realloc(ptr,(m+n)*sizeof(int));

    printf("Enter %d elements:\n",m);

    for(int i=n;i<n+m;++i){
        scanf("%d",&ptr[i]);

    }

    printf("The elements entered are:\n");
    for(int i=0;i<(n+m);++i){
        printf("%d\n",ptr[i]);
    }
    printf("How many elements you want to keep\n");
    scanf("%d",&m);
    ptr = realloc(ptr,m*sizeof(int));
    printf("The elements entered are:\n");
    for(int i=0;i<(m);++i){
        printf("%d\n",ptr[i]);
    }
    return 0;
}
