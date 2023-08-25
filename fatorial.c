
int fatorial_func(int* fatorial)
{
    int aux = 1;

    for (int i = 1; i <= *fatorial; i++)
    {
        aux *= i;
    }

    return aux;
};

// int main()
// {
//     int x = 7;
//     fatorial_func(&x);

//     printf("Fatorial de %d: %d\n", x, fatorial_func(&x));
// }

