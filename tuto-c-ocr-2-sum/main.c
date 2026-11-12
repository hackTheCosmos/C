#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb1, nb2, sum_result;

    printf("Choisir un nombre : \n");
    scanf("%d", &nb1);
    printf("Choisir un deuxieme nombre : \n");
    scanf("%d", &nb2);

    sum_result = nb1 + nb2;
    printf("%d + %d = %d\n", nb1, nb2, sum_result);
    return 0;
}
