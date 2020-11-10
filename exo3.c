#include <stdio.h>
int main()
{
    int s,m,h;
    printf("saisir le nombre de seconde");
    scanf("%d",&s);
    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s%60;
    printf("le nombre de seconde données = %dh:%dm:%ds\n", h,m,s);

    return 0;
}
