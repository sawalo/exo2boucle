#include<stdio.h>
#include<stdlib.h>


int main(){
    int n,i;
    printf("saisir un nombre: ");
    scanf("%d",&n);

    /*while(n>1){
        printf("%d\n",n);
        n--;
    }*/
    for(i=n; i>0; i--){
        printf("%d\n",i);
    }
    return 0;

}