#include <stdio.h>
int main(int argc, char const *argv[])
{
    char vector2[10];
    printf("Ingrese su mensaje: \n");
    fgets(vector2,100,stdin);
    printf("%s", vector2);
    /*for (int i = 0; i <10; i++)
    {
        scanf("%c", &vector2[i]);

    }
    for (int i = 0; i <10; i++)
    {
        printf("%c \n", vector2[i]);
    }*/

    return 0;
}
