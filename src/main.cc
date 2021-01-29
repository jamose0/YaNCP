#include "yancp_loop.h"

#include <iostream>

int main(int argc, char *argv[])
{
	for (int iii{}; iii < argc; iii++)
		std::cout << argv[iii] << ' ';


	Yancp_loop session{};
	session.prompt();

	return 0;
}
