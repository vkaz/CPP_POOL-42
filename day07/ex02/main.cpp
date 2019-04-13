#include <string>
#include <iostream>
#include <exception>
#include "Array.tpp"

int				main(void)
{
	Array<int>		a1(20);
	Array<int>		a2;

	std::cout << "a1 size = " << a1.size() << "; a2 size = " << a2.size() << ";" << std::endl;
	a1[1] = 11;
	a1[2] = 42;
	std::cout << "a1[1] = " << a1[1] << "; a1[2] = " << a1[2] << ";" << std::endl;
	a2 = a1;
	std::cout << "a2[1] = " << a2[1] << "; a2[2] = " << a2[2] << ";" << std::endl;

	std::cout << "Try out of range" << std::endl;
	try {
		a1[30] = 42;
		std::cout << "SUCCESS!" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "ERROR " << e.what() << std::endl;
	}

	return (0);
}
