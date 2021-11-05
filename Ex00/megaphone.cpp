#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
	int i = 0;
	int j;

	if (argc < 2)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
			cout << (char)toupper(argv[i][j++]);
	}
	cout << endl;
	return 0;		
}