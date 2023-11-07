#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    srand (time(NULL));
    int vector1[10];
    printf("Ingrese 10 numeros \n");
    for (int i = 0; i <10; i++)
    {
        //scanf("%d", &vector1[i]);
        vector1[i]=rand()%100+1;
    }
    for (int i = 0; i <10; i++)
    {
        printf("%d \n", vector1[i]);
    }


    return 0;
}
