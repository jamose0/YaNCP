#include "yancp_loop.h"

#include <iostream>

bool Yancp_loop::prompt()
{
	while (true)
	{
		std::cout << "YaNCP ~ [VERSION] | ";
		std::string inp{};
		std::getline(std::cin, inp);

		std::cout << inp << '\n';
	}

	return false;
}
