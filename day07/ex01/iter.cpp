#include <iostream>
#include <string>

template <typename T>
void iter(T *array, int length, void (*func)(T const &))
{
    for (int i = 0; i < length; i++)
    {
        func(array[i]);
    }
}
template <typename T>
void show(T &a)
{
    std::cout << a << std::endl;
}

int     main(void)
{
    int foo[5] = { 16, 2, 77, 40, 12071 };
    std::string str[5] = {"qwerty", "wasd", "asd", "sfg", "dzxc"};
    float f[5] = {1.24, 34.2, 234.345346, 2.1243647567, 3.1};
    std::cout << "INT:" << std::endl;
    iter<int>(foo, 5, show);
    std::cout << "FLOAT:" << std::endl;
    iter<float>(f, 5, show);
    std::cout << "STRING:" << std::endl;
    iter(str, 5, show);
    return (0);
} 
