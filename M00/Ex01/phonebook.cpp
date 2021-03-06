#include "phonebook.hpp"

void ft_add (contact *cnt)
{
	std::string buff;

	std::cout << "Please enter the first name:" << std::endl;
	getline(std::cin, cnt->fname);
	std::cout << "Please enter the last name:" << std::endl;
	getline(std::cin, cnt->lname);
	std::cout << "Please enter the nickname:" << std::endl;
	getline(std::cin, cnt->nick);
	std::cout << "Please enter the phone number:" << std::endl;
	getline(std::cin, cnt->phone);
	std::cout << "Please reveal your darkest secret:" << std::endl;
	getline(std::cin, cnt->secret);
}

void ft_search (contact	*cnt, int i)
{
	std::string 	com;

	while (com[0] < 49 || com[0] > (i + 48) || com[1] != 0 )
	{
		ft_printl (cnt, i);
		std::cout << "\nEnter the contact # you want to search" << std::endl;
		getline(std::cin, com);
		if ( com[0] < 49 || com[0] > (i + 48) || com.length() != 1 )
			std::cout << "\n Invalid contact #, try again." << std::endl;
	}
	cnt += (com[0] - 49);
	cnt->printc();
}

void ft_printl (contact	*cnt, int i)
{
	int j = 0;

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
	std::string com;
	contact	cnt[8];
	int	i = 0;
	int j = 0;

	while (com != "EXIT")
	{
		com = new char;
		std::cout << "WELCOME TO MY AWESOME PHONEBOOK\n";
		std::cout << "ADD, SEARCH or EXIT?" << std::endl;
		getline(std::cin, com);
		if (com == "ADD")
		{
			if (i != 8)
				i++;
			ft_add(&cnt[j++]);
			if (j > 7)
				j = 0;
		}
		else if (com == "SEARCH")
		{
			if (i > 0)
				ft_search(cnt, i);
			else
				std::cout << "\nPhonebook is empty\n" << std::endl;
		}
	}
	return 0;
}
