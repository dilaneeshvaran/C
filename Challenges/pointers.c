#include <stdio.h>
#define size 5
void incre(int *);
void swap(int *, int *);
int sumOf(int []);
int* getArray();

int main(){
   // int value1,value2,i,sum;
   // int input[5];

  //  printf("enter value 1 ; ");
   // scanf("%d",&value1);

  //  incre(&value1);

    //printf("enter value 2 ; ");
   // scanf("%d",&value2);

   // swap(&value1,&value2);

   // printf("%d, %d",value1, value2);


    //printf("\nenter 5 values : ");

   // for(i=0;i<5;i++){
   //     scanf("%d",&input[i]);
  //  }

 //   sum=sumOf(input);

  //  printf("sum in main : %d",sum);
    int i,*p;

    p=getArray();

    for(int i=0;i<size;i++){
        printf("main : %d\n",*(p+i));
    }
    

    return 0;
}

void incre(int *ptr){

    (*ptr)++;

}

void swap(int *val1, int *val2){

    int tmp=*val1;
    *val1=*val2;
    *val2=tmp;

}

int sumOf(int input[]){
    int sum=0;

    for(int i=0;i<5;i++){
        sum+=input[i];
    }
    return sum;

}

int* getArray(){
    int i;
    static int arr[size];

    printf("enter 5 values ya : \n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    return arr;
}