#include <iostream>

/// @brief Print help message in console
void printHelp()
{
	std::cout << "Usage:\n"
		"main [-h] - Print 'Hello, CMake Project'\n"
		"\n"
		"Arguments:\n"
		"-h - print this message";
}

/// @brief Main function
/// @returns 0 if successfully exits, 1 otherwise
int main(int argc, char* argv[])
{
	if (argc > 1)
	{
		printHelp();
		return 0;
	}

	std::cout << "Hello, \033[32mCMake Project\033[0m." << std::endl;

	std::cout << "This is just a test!" << std::endl;
	return 0;
}
