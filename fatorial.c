
int fatorial_func(int* fatorial)
{
    unsigned long aux = 1;

    for (int i = 1; i <= *fatorial; i++)
    {
        aux *= i;
    }

    return aux;
};
