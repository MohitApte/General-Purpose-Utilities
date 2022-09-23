#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void someFunction(){

    for(int  i=1;i<=5000;i++){

        for(int j=1;j<=5000;j++);
    }


}
int main(){
    clock_t initialTime;
    clock_t finalTime;
    double timeConsumed;
    initialTime = clock();
    someFunction();
    finalTime = clock();
    timeConsumed = (double)(finalTime - initialTime)/CLOCKS_PER_SEC;
    printf("Clock ticks taken by the program is %.3f\n",(double)(finalTime - initialTime));
    printf("Time taken by the program is %.2f",timeConsumed);

    return 0;
}
