#include "phonebook.hpp"

void ft_add (contact *cnt)
{
	cout << "Please enter the first name:" << endl;
	cin >> cnt->fname;
	cout << "Please enter the last name:" << endl;
	cin >> cnt->lname;
	cout << "Please enter the nickname:" << endl;
	cin >> cnt->nick;
	cout << "Please enter the phone number:" << endl;
	cin >> cnt->phone;
	cout << "Please reveal your darkest secret:" << endl;
	cin >> cnt->secret;
}

void ft_search (contact	*cnt, int i)
{
	char 	com = 0;

	while (com < 48 || com > (i + 48))
	{
		ft_printl (cnt, i);
		cout << "\nEnter the contact # you want to search" << endl;
		cin >> com;
		if (com < 48 || com > (i + 48))
			cout << "\n Invalid contact #, try again." << endl;
	}
	cnt += (com - 49);
	cnt->printc();
}

void ft_printl (contact	*cnt, int i)
{
	int j = 0;

	cout << "I IS: " << i;
	cout << "\n#|FIRST NAME|LAST NAME | NICKNAME |  PHONE # | DARK SEC |" << endl;
	while (j++ < i)
	{
		cout << j  << "|" << tench(cnt->fname) << "|" << tench(cnt->lname) << "|" << tench(cnt->nick) << "|" << tench(cnt->phone) << "|" << tench(cnt->secret) << "|" << endl;
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
		cout << "ADD, SEARCH or EXIT?" << endl;
		cin >> com;
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
				cout << "\nPhonebook is empty\n" << endl;
		}
	}
	return 0;
}