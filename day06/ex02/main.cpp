#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <iostream>

Base *generate(void)
{
    Base *b;

    int i = rand() % 3;
    if (i == 0)
    {
        std::cout << "A class created!" << std::endl;
        b = new A();
    }
    else if (i == 1)
    {
        std::cout << "B class created!" << std::endl;
        b = new B();
    }
    else
    {
        std::cout << "C class created!" << std::endl;
        b = new C();
    }
    return (b);
}

void identify_from_pointer(Base *p)
{
    A *cl = dynamic_cast<A*>(p);
    if (cl)
    {
        std::cout << "A class identity pointer" << std::endl;
    }
    B *cl1 = dynamic_cast<B*>(p);
    if (cl1)
    {
        std::cout << "B class identity pointer" << std::endl;
    }
    C *cl2 = dynamic_cast<C*>(p);
    if (cl2)
    {
        std::cout << "C class identity pointer" << std::endl;
    }
}

void identify_from_reference(Base &p)
{
    try
    {
        A &cl = dynamic_cast<A&>(p);
        static_cast<void>(cl);
        std::cout << "A class identity reference" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "A class error reference" << std::endl;
    }
    try
    {
        B &cl1 = dynamic_cast<B&>(p);
        static_cast<void>(cl1);
        std::cout << "B class identity reference" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "B class error reference"<< std::endl;
    }
    try
    {
        C &cl2 = dynamic_cast<C&>(p);
        static_cast<void>(cl2);
        std::cout << "C class identity reference" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "C class error reference" << std::endl;        
    }
}

int main(void)
{
    srand(time(NULL));
    Base *b = generate();
    identify_from_pointer(b);
    identify_from_reference(*b);
    return (0);
}