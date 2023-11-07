#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int num=0,contador=0,i=0;
    srand (time(NULL));
    int vector1[20];
    for (int i = 0; i <20; i++)
    {
        //scanf("%d", &vector1[i]);
        vector1[i]=rand()%10+1;
        
    }
    for (int i = 0; i <20; i++)
    {
        printf("%d ", vector1[i]);
    }

    printf("\n Ingrese un numero de la lista presentada \n");
    scanf("%d", &num);
    for (int i = 0; i < 20; i++)
    {
        if (num == vector1[i])
        {
            contador+=1;  
        }
    }
    printf("El numero %d se repite %d",num,contador);
    return 0;
}
