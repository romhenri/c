#include <stdio.h>

struct Human
{
    int id;
    char[20] name;
    int age;
    int size;
    int money;
    int level;
};

int main()
{

    struct Human mano;

    mano.name = "Pedro";
    mano.age = 19;
    mano.size = 1.86;
    mano.money = 2023;
    mano.level = 11;

    return 0;
}
