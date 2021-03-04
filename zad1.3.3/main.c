#include <stdio.h>
#include <stdlib.h>
int main()
{
    int liczba1,liczba2,liczba3;
    printf("Podaj liczbe1 calkowita: ");
    scanf("%d",&liczba1);
    printf("Podaj liczbe2 calkowita: ");
    scanf("%d",&liczba2);
    printf("Podaj liczbe3 calkowita: ");
    scanf("%d",&liczba3);
    if(liczba1>liczba2&&liczba1>liczba3)
    {
        printf("najwieksza cyfra %d",liczba1);
    }
    if(liczba2>liczba1&&liczba2>liczba3)
    {
        printf("najwieksza cyfra %d",liczba2);
    }
    if(liczba3>liczba1&&liczba3>liczba2)
    {
        printf("najwieksza cyfra %d",liczba3);
    }
    if(liczba1==liczba2&&liczba1==liczba3)
    {
        printf("liczby rowne");
        return 0;
    }
    if(liczba1==liczba2)
    {
        printf("liczba1 i liczba2 sa rowne");
        return 0;
    }
    if(liczba1==liczba3)
    {
        printf("liczb1 i liczba3 sa rowne");
        return 0;
    }
    if(liczba2==liczba3)
    {
        printf("liczba2 i liczba3 sa rowne");
        return 0;
    }
    return 0;
}
