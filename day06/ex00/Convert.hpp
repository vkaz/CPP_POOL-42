#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <limits>

class Convert
{
private:
    std::string str;
public:
    Convert();
    ~Convert();
    Convert(Convert const &rhs);
    Convert(std::string str);
    Convert &operator=(Convert const &rhs);
    void toFloat(const char *str);
    void toChar(const char *str);
    void toInt(const char *str);
    void toDouble(const char *str);
};


#endif

