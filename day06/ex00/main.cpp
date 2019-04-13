#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Convert con;
        con.toChar(argv[1]);
        con.toInt(argv[1]);
        con.toFloat(argv[1]);
        con.toDouble(argv[1]);
    }
    else
    {
        std::cout << "Wrong input" << std::endl;
    }
    return (0);
}