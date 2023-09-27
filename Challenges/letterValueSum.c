#include <stdio.h>

int main(){

    char str[26];

    printf("enter word : ");
    scanf("%s",&str);

    int len=strlen(str);
    int sum=0;
    
    for(int i=0;i<len;i++){
        int tmp=str[i];
        sum+=(tmp-96);
    }

    printf("%d",sum);

    return 0;
}