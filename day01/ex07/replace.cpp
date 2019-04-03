#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        std::string p = " ";
        size_t i;
        unsigned long i2;
        if (!filename.empty() && !s1.empty() && !s2.empty())
        {
            std::string s3;
            std::string out = filename + ".replace";
            std::ifstream   file("filename");
            file.open(filename);
            if(!file)
            {
                std::cout << "Cant find this file : " << filename << std::endl;
                return (0);
            }
            std::ofstream  out_file(out);
            while (std::getline(file, s3))
            {
                i2 = 0;
                for (i = s3.find(s1); i != std::string::npos; i = s3.find(s1, i + 1))
                {
                    if (i != std::string::npos)
                    {
                        while (s3[i + i2] == s1[i2])
                            i2++;
                        s3.erase(i, i2);
                        if (i == 0)
                            s3 = s2 + s3;
                        else
                            s3.append(s2);
                    }
                }
                out_file << s3 << std::endl;
            }
            file.close();
            out_file.close();
        }
    }
    else
        std::cout << "Wrong number of lines!" << std::endl;
    return (0);
}