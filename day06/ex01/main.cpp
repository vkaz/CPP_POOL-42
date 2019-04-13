#include <ctime>
#include <string>
#include <cstdlib>
#include <iostream>

struct Data
{
    int            n;
    std::string    s1;
    std::string    s2;
};

void *serialize(void)
{
    Data           *ret = new Data;
    static char    set[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    for (int i = 0; i < 8; i++)
    {
        int a = rand() % std::strlen(set);
        ret->s1 += set[a];
    }
    int a = rand() % 2;
    if (a == 1)
        ret->n = rand() * 1;
    else
        ret->n = rand() * -1;
    for (int i = 0; i < 8; i++)
    {
        int a = rand() % std::strlen(set);
        ret->s2 += set[a];
    }
    return (ret);
}

Data *deserialize(void *raw)
{
    Data *ret = reinterpret_cast<Data*>(raw);
    return (ret);
}

int
main(void)
{
    srand(time(0));
    void           *ser = serialize();
    Data           *des = deserialize(ser);

    std::cout << des->s1 << std::endl
              << des->n << std::endl
              << des->s2 << std::endl;
    delete des;
    return (0);
}
