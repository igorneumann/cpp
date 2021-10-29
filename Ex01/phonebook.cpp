#include "phonebook.h"

void ft_add (t_data	*data)
{
	data->i = 1;
	std::cout << "add function!\n";
}

void ft_search (t_data	*data)
{
	data->i = 0;
	std::cout << "search function!\n";
}

int	main ()
{
	char 	*com = new char;
	t_data	*data = new t_data;

	while (strcmp(com, "EXIT"))
	{
		com = new char;
		std::cout << "WELCOME TO MY AWESOME PHONEBOOK\n";
		std::cout << "ADD, SEARCH or EXIT?\n";
		std::cin >> com;
		if (!strcmp(com, "ADD"))
			ft_add(data);
		else if (!strcmp(com, "SEARCH"))
			ft_search(data);
	}
	return 0;
}