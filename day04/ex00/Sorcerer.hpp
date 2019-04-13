#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
private:
    std::string _name;
    std::string _title;
public:
    Sorcerer(void);
    ~Sorcerer(void);
    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer const &rhs);
    Sorcerer &operator=(Sorcerer const &rhs);
    void setName(std::string name);
    void setTitle(std::string title);
    std::string getName(void) const;
    std::string getTitle(void) const;
    void polymorph(Victim const &victim) const;
};

std::ostream &operator<< (std::ostream &out, const Sorcerer &rhs);

#endif
