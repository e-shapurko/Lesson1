#include  "lib.h"
#include <spdlog/spdlog.h>
#include <stdio.h>

int main ()
{

	std::cout << "build " << version() << std::endl;
	std::cout << "Hello, World! " << version() << std::endl;

	return 0;
}