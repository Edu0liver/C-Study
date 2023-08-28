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
    printf("%s", time_const);
    printf("%s", date_const);
}
