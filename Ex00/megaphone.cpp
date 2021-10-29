#include <iostream>

int main (int argc, char **argv)
{
	int i = 0;
	int j;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
			std::cout << (char)toupper(argv[i][j++]);
	}
	std::cout << '\n';
	return 0;		
}