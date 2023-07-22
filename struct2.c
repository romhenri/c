#include <stdio.h>
#include <string.h>
#define TAMANHO_NOME 100
#define QTDE_PESSOAS 100

struct Human
{
    int id;
    int age;
    char name[TAMANHO_NOME];
    int size;
};

int main()
{
    struct Human personagens[QTDE_PESSOAS];

    for (int i = 0; i < QTDE_PESSOAS; i++)
    {
        scanf("%d\n", &personagens[i].id);
        scanf("%[^\n]s", &personagens[i].name);
        scanf("%f", &personagens[i].size);
    }

    for (int i = 0; i < QTDE_PESSOAS; i++)
    {
        printf("Idade: %d\n", personagens[i].id);
        printf("Nome: %s\n", personagens[i].name);
        printf("Altura: %f\n", personagens[i].size);
    }

    return 0;
}
