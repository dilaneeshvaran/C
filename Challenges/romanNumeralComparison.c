#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isValidRomanNumber(char saisi[],char rNums[],int saisiSize,int rNumsSize);
int compare(char saisi1[],char saisi2[],int saisi1Size,int saisi2Size);

int main(){

    char saisi1[100];
    char saisi2[100];

    printf("enter 2 roman numbers in roman letters and i will tell if the 1st is larger than second\n");
    printf("Roman Letters = M : 1000, D : 500, C : 100, L : 50, X : 10, V : 5, I : 1\n");
    printf("1st number : ");
    scanf("%s",&saisi1);
    printf("2nd number : ");
    scanf("%s",&saisi2);

    int saisi1Size=strlen(saisi1);
    int saisi2Size=strlen(saisi2);

    compare(saisi1,saisi2,saisi1Size,saisi2Size);

    return 0;
}



//PROCESS INPUTS AS NUMBERS FOR COMPARISON
int compare(char saisi1[],char saisi2[],int saisi1Size, int saisi2Size){

    char rNums[7]={'M','D','C','L','X','V','I'};
    int sizeRnums=sizeof(rNums)/sizeof(rNums[0]);

    int saisi1Number=0;
    int saisi2Number=0;

    if(isValidRomanNumber(saisi1,rNums,saisi1Size,sizeRnums)&&isValidRomanNumber(saisi2,rNums,saisi2Size,sizeRnums)){
        for(int i=0;i<saisi1Size;i++){
            if(saisi1[i]=='M'){
                saisi1Number+=1000;
            }else if(saisi1[i]=='D'){
                saisi1Number+=500;
            }else if(saisi1[i]=='C'){
                saisi1Number+=100;
            }else if(saisi1[i]=='L'){
                saisi1Number+=50;
            }else if(saisi1[i]=='X'){
                saisi1Number+=10;
            }else if(saisi1[i]=='V'){
                saisi1Number+=5;
            }else if(saisi1[i]=='I'){
                saisi1Number+=1;
            }
        }
        for(int j=0;j<saisi1Size;j++){
            if(saisi2[j]=='M'){
                saisi2Number+=1000;
            }else if(saisi2[j]=='D'){
                saisi2Number+=500;
            }else if(saisi2[j]=='C'){
                saisi2Number+=100;
            }else if(saisi2[j]=='L'){
                saisi2Number+=50;
            }else if(saisi2[j]=='X'){
                saisi2Number+=10;
            }else if(saisi2[j]=='V'){
                saisi2Number+=5;
            }else if(saisi2[j]=='I'){
                saisi2Number+=1;
            }
        }
    }else{
        printf("not valid roman numbers");
        return 0;
    }

    if(saisi1Number<saisi2Number){
        printf("ok %d < %d",saisi1Number,saisi2Number);
        return 1;
    }else{
        printf("not ok %d > %d",saisi1Number,saisi2Number);
        return 0;
    }
}


//FIND IF INPUTS ARE CORRECT ROMAN NUMBERS
int isValidRomanNumber(char saisi[],char rNums[],int saisiSize,int rNumsSize){

    int counter=0;

    for(int i=0;i<saisiSize;i++){
        for(int j=0;j<rNumsSize;j++){
            if(saisi[i]==rNums[j]){
                counter++;
            }
        }
    }
    if(counter==saisiSize){
        return 1;
    }else{
        return 0;
    }
}
