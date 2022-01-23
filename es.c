#include <stdio.h>
int main(int argc, char *argv[])
{
        int num1 = 0;
        int num2 = 0;
        int rapp = num1 / num2;
        do
        {
                printf("Inserisci il valore del dividendo");
                scanf("%d", &num1);
                printf("Inserisci il valore del divisore");
                scanf("%d", &num2);
                printf(rapp);
        }while(num1 != 0 && num2 != 0)
        return 0;
}
