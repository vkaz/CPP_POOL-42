#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
private:
    std::string _name;
public:
    Victim(void);
    ~Victim();
    Victim(std::string name);
    Victim(Victim const &rhs);
    Victim &operator=(Victim const &rhs);
    void setName(std::string name);
    std::string getName(void) const;
    void getPolymorphed(void) const;
};

std::ostream &operator<< (std::ostream &out, const Victim &rhs);

#endif
