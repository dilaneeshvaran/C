#include <string.h>
#include <stdio.h>
#include<stdlib.h>

int main(){

    int saisi[100];
    int saisiSize=0;
    int tmp=0;

    int *p=&saisi[0];

  

    while(tmp==0 || tmp==1){
        printf("enter 1 or 0 (other number to stop): ");
        scanf("%d",&saisi[saisiSize]);
        tmp=saisi[saisiSize];
        saisiSize++;
    }
  p=(int*)malloc(saisiSize*sizeof(int));

  int size=sizeof(saisi)/sizeof(saisi[0]);
    printf("%d saisi size\n",size);

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