#include <iostream>
#include <string>
#include <fstream>

void    wr(std::istream &str)
{
     std::cout << str.rdbuf();
}

int     main(int argc, char **argv)
{
    std::string file;

    if (argc == 1)
    {
        wr(std::cin);
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            file = argv[i];
            std::ifstream fi(file);
            if (!fi)
                std::cout << "can't open file!" << std::endl;
            else
                wr(fi);
            fi.close();
        }
    }
    return (0);
}
