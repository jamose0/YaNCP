#include <iostream>

int main(int argc, char *argv[])
{
	for (int iii{}; iii < argc; iii++)
		std::cout << argv[iii] << ' ';

	return 0;
}
