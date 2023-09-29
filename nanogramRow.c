#include <string.h>
#include <stdio.h>

int main(){

    int saisi[100];
    int saisiSize=0;
    int tmp=0;

    while(tmp==0 || tmp==1){
        printf("enter 1 or 0 (other number to stop): ");
        scanf("%d",&saisi[saisiSize]);
        tmp=saisi[saisiSize];
        saisiSize++;
    }

    int counterOfOne = 0;
    int oneRows[100];
    tmp=0;

    for(int i=0;i<saisiSize;i++){
        if(saisi[i]==1){
            counterOfOne++;
        }
        //if(saisi[i+1]==0){
            if(counterOfOne!=0){
                oneRows[tmp]=counterOfOne;
            }
            if(saisi[i]==0){
                tmp++;
                counterOfOne=0;
            }
        //}
    }
    
    for(int j=0;j<=tmp;j++){
        printf("%d\n",oneRows[j]);
    }

    return 0;
}