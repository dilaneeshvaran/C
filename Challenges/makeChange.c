#include <stdio.h>

int main(){

    int saisi;

    printf("enter value : ");
    scanf("%d",&saisi);

    printf("%d",makeChange(saisi));

    return 0;
}

int makeChange(int saisi){

    int reste=0;

while(saisi>=500){
    saisi-=500;
    reste++;
}
while(saisi>=100){
    saisi-=100;
    reste++;
}
while(saisi>=25){
    saisi-=25;
    reste++;
}
while(saisi>=10){
    saisi-=10;
    reste++;
}
while(saisi>=5){
    saisi-=5;
    reste++;
}
while(saisi>=1){
    saisi-=1;
    reste++;
}
    return reste;
}