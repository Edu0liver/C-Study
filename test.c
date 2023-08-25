#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void id_generator(int *id)
{
    *id = rand();
}

struct Pessoa {
    unsigned int id;
    char nome[30];
    char email[50];
};

int main() {
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
