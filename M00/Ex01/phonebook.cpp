#include "phonebook.hpp"

void ft_add (contact *cnt)
{
	std::cout << "Please enter the first name:" << std::endl;
	std::cin >> cnt->fname;
	std::cout << "Please enter the last name:" << std::endl;
	std::cin >> cnt->lname;
	std::cout << "Please enter the nickname:" << std::endl;
	std::cin >> cnt->nick;
	std::cout << "Please enter the phone number:" << std::endl;
	std::cin >> cnt->phone;
	std::cout << "Please reveal your darkest secret:" << std::endl;
	std::cin >> cnt->secret;
}

void ft_search (contact	*cnt, int i)
{
	char 	com = 0;

	while (com < 48 || com > (i + 48))
	{
		ft_printl (cnt, i);
		std::cout << "\nEnter the contact # you want to search" << std::endl;
		std::cin >> com;
		if (com < 48 || com > (i + 48))
			std::cout << "\n Invalid contact #, try again." << std::endl;
	}
	cnt += (com - 49);
	cnt->printc();
}

void ft_printl (contact	*cnt, int i)
{
	int j = 0;

	std::cout << "I IS: " << i;
	std::cout << "\n#|FIRST NAME|LAST NAME | NICKNAME |  PHONE # | DARK SEC |" << std::endl;
	while (j++ < i)
	{
		std::cout << j  << "|" << tench(cnt->fname) << "|" << tench(cnt->lname) << "|" << tench(cnt->nick) << "|" << tench(cnt->phone) << "|" << tench(cnt->secret) << "|" << std::endl;
		cnt++;
	}
}

std::string tench(std::string input)
{
	int i = 0;

	std::string output = "          ";
	while (input[i])
	{
		if (i < 10)
			output[i] = input[i];
		i++;
	}
	if (i > 10)
		output[9] = 46;
	return (output);
}

int	main ()
{
	char 	*com = new char;
	contact	cnt[8];
	int	i = 0;

	while (strcmp(com, "EXIT"))
	{
		com = new char;
		std::cout << "WELCOME TO MY AWESOME PHONEBOOK\n";
		std::cout << "ADD, SEARCH or EXIT?" << std::endl;
		std::cin >> com;
		if (!strcmp(com, "ADD"))
		{
			if (i < 8)
				i++;
			ft_add(&cnt[i - 1]);
		}
		else if (!strcmp(com, "SEARCH"))
		{
			if (i > 0)
				ft_search(cnt, i);
			else
				std::cout << "\nPhonebook is empty\n" << std::endl;
		}
	}
	return 0;
}