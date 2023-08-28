
void id_generator(int *id)
{
    *id = rand();
}

struct Pessoa {
    unsigned int id;
    char nome[30];
    char email[50];
};

void test() {
    int x = 5;
    char hello;

    hello = (x == 5) ? 'H' : 'W';

    printf("%c", hello);
}

void bitwise() {
    int x = 10; // 0000 1010
    //  >>  05     0000 0101
    //  <<  20     0001 0100
    printf("%d\n", x);
    printf("%d\n", x>>1);
    printf("%d\n", x<<1);
}

void sign_up() {
    struct Pessoa pessoa;
    unsigned int *id = &pessoa.id;
    
    printf("\nDigite seu nome: ");
    scanf("%s", &pessoa.nome);
    
    printf("\nDigite seu email: ");
    scanf("%s", &pessoa.email);
    
    bool isEmail = false;
    
    for (int i = 0; i < strlen(pessoa.email); i++)
    {    
        if (pessoa.email[i] == '@')
        {
            isEmail = true;
        }
    }
    
    if (isEmail == false)
    {
        printf("\nEmail inválido");
        return;
    }
    
    id_generator(id);
    
    printf("\n\nId: %u", pessoa.id);
    printf("\nNome: %s", pessoa.nome);
    printf("\nEmail: %s", pessoa.email);
}
