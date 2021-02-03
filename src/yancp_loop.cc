#include "yancp_loop.h"

#include <iostream>
#include <string>

bool Yancp_loop::prompt()
{
	while (true)
	{
		std::cout << "YaNCP ~ [VERSION] | ";
		std::string inp{};
		std::getline(std::cin, inp);

		std::cout << inp << '\n';
		std::cout << Yancp_loop::toPostfix(inp) << '\n';
	}

	return false;
}

std::string Yancp_loop::toPostfix(std::string s)
{
	// Shunting-Yard
	std::cout << s << '\n';
	for (int iii{}; iii < s.length(); ++iii)
	{
		std::cout << "it: " << iii << '\n';
		if (s[iii] == '*' && s[iii - 1] != ' ')
		{
			s.insert(iii, " ");
			iii += 2;
			if (s[iii] != ' ')
				s.insert(iii, " ");
		}
		
	}
	std::cout << s << '\n';

	return "hi";
}
