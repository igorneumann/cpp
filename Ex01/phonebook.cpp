#include "phonebook.h"

void ft_add (contact *cnt)
{
	cout << "Please enter the first name:\n";
	cin >> cnt->fname;
	cout << "Please enter the last name:\n";
	cin >> cnt->lname;
	cout << "Please enter the nickname:\n";
	cin >> cnt->nick;
	cout << "Please enter the phone number:\n";
	cin >> cnt->phone;
	cout << "Please enter the darkest secret:\n";
	cin >> cnt->secret;
}

void ft_search (contact	*cnt, int i)
{
	char 	com = 0;

	while (com < 48 || com > (i + 48))
	{
		ft_printl (cnt, i);
		cout << "\nEnter the contact # you want to search\n";
		cin >> com;
		if (com < 48 || com > (i + 48))
			cout << "\n Invalid contact #, try again.\n";
	}
	cnt += --i;
	cnt->printc();
}

void ft_printl (contact	*cnt, int i)
{
	int j = 0;

	cout << "\n#|FIRST NAME|LAST NAME | NICKNAME |  PHONE # | DARK SEC |\n" ;
	while (j++ < i)
	{
		cout << j  << "|" << tench(cnt->fname) << "|" << tench(cnt->lname) << "|" << tench(cnt->nick) << "|" << tench(cnt->phone) << "|" << tench(cnt->secret) << "|\n";
		cnt++;
	}
}

string tench(string input)
{
	int i = 0;

	string output = "          ";
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
		cout << "WELCOME TO MY AWESOME PHONEBOOK\n";
		cout << "ADD, SEARCH or EXIT?\n";
		cin >> com;
		if (!strcmp(com, "ADD"))
		{
			ft_add(&cnt[i]);
			if (i < 7)
				i++;
		}
		else if (!strcmp(com, "SEARCH"))
		{
			if (i > 0)
				ft_search(cnt, i);
			else
				cout << "\nPhonebook is empty\n\n";
		}
	}
	return 0;
}