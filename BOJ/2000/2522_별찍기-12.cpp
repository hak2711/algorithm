#include <stdio.h>

int main(void){
    int n, i=1;
    bool afterN = false;
    scanf("%d",&n);
    
    while(i<=n && i>=1){
        if(i==n) afterN = true;
        
        for(int j = 1; j<=(n-i); j++)
            printf(" ");
        for(int k = 1; k<=i; k++)
            printf("*");
        printf("\n");
        if(afterN) i--;
        else i++;
    }
}