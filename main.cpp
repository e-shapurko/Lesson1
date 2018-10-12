#include  "lib.h"
#include <spdlog/spdlog.h>
#include <stdio.h>

int main ()
{
	printf("build %d", version());
	printf("Hello, World!");
	auto logger = spdlog::stdout_logger_mt("console");
	logger->info("version {} was started", version());

	return 0;
}