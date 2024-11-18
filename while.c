#include <stdio.h>

int main(){
    int i=1;
    int n;
    printf("Enter the number to generate the natural numbers...!\n");
    scanf("%d" , &n);

    while(i<=n){
        printf("%d\n" ,i);
        i++;
    }
    return 0;
}