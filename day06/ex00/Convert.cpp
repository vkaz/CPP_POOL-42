#include "Convert.hpp"

Convert::Convert(){return ;}
Convert::~Convert(){return ;}
Convert::Convert(std::string str)
{
    this->str = str;
}
Convert::Convert(Convert const &rhs)
{
    *this = rhs;
}
Convert  &Convert::operator=(Convert const &rhs)
{
    if (this != &rhs)
    {
      this->str = rhs.str;
    }
    return *this;
}

void Convert::toFloat(const char *str)
{
    float f = static_cast<float>(strtof(str, NULL));
    if (floor(f + 0.5) == f && (strcmp(str, "nan") != 0 && strcmp(str, "nanf") != 0 && strcmp(str, "-inf") != 0 && strcmp(str, "+inf") != 0
         && strcmp(str, "+inff") != 0 && strcmp(str, "-inff") != 0 && strcmp(str, "inff") != 0 && strcmp(str, "inf") != 0))
        std::cout << "float: " << std::setprecision (std::strlen(str)) << f << ".0f" << std::endl;
    else
        std::cout << "float: " << std::setprecision (std::strlen(str)) << f << "f" << std::endl;  
}

void Convert::toDouble(const char *str)
{
    double d = static_cast<double>(atof(str));
    if (floor(d + 0.5) == d && (strcmp(str, "nan") != 0 && strcmp(str, "nanf") != 0 && strcmp(str, "-inf") != 0 && strcmp(str, "+inf") != 0
         && strcmp(str, "+inff") != 0 && strcmp(str, "-inff") != 0 && strcmp(str, "inff") != 0 && strcmp(str, "inf") != 0))
        std::cout << "double: " << std::setprecision (std::strlen(str)) << d << ".0" << std::endl;
    else
        std::cout << "double: " << std::setprecision (std::strlen(str)) << d << std::endl;    
}

void Convert::toChar(const char *str)
{
    char c = static_cast<char>(atoi(str));
    if (strcmp(str, "nan") == 0 || strcmp(str, "nanf") == 0 || strcmp(str, "-inf") == 0 || strcmp(str, "+inf") == 0
         || strcmp(str, "+inff") == 0 || strcmp(str, "-inff") == 0 || strcmp(str, "inff") == 0 || strcmp(str, "inf") == 0)
        std::cout << "char: impossible" << std::endl;
    else if (!isprint(c))
         std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
}

void Convert::toInt(const char *str)
{
    int i = static_cast<int>(atoi(str));
    if (atol(str) > 2147483647 || atol(str) < -2147483647 || strcmp(str, "nan") == 0 || strcmp(str, "nanf") == 0 || 
        strcmp(str, "-inf") == 0 || strcmp(str, "+inf") == 0 || strcmp(str, "+inff") == 0 || strcmp(str, "-inff") == 0
        || strcmp(str, "inff") == 0 || strcmp(str, "inf") == 0) 
        std::cout << "int: " << "impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
}
