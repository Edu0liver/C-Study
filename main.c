#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// Paths
#include "fatorial.c"
#include "test.c"
#include "pyramid.c"

// Constants
#define PI 3.14159
#define DATE __DATE__
#define TIME __TIME__

const char time_const[] =  __TIME__;
const char date_const[] = __DATE__;

void main()
{
    // Variables
    int option;
    bool exit = false;

    // Menu
    do
    {
        printf("\n\n");
        printf("1 - Fatorial\n");
        printf("2 - Test\n");
        printf("3 - Pyramid\n");
        printf("4 - Sign Up\n");
        printf("5 - Exit\n");
        printf("Option: ");
        scanf("%d", &option);

        switch (option)
        {
            case 1:
                int x;
                printf("Digite um numero: ");
                scanf("%d", &x);

                printf("Fatorial de %d: %d", x, fatorial_func(&x));
                
                break;
            case 2:
                test();
                break;
            case 3:
                pyramid();
                break;
            case 4:
                sign_up();
                break;
            case 5:
                exit = true;
                break;
            default:
                printf("Invalid option\n");
                break;
        }
    } while (exit == false);
}
