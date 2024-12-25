// //pre-processor derective
// #include <iostream>

// void my_log(const char *s)
// {
// 	// std is an object
// 	//cout object displays everything gived to it into console
// 	// << is an inserting operator
// 	std::cout << s << std::endl << std::endl << std::endl;
// }

// int main()
// {
// 	my_log("hello world!");
// }


# include "header.h"

/* when u write std:: you use objects from the iostream 
    for that u need to call everytime "std::" then shoose the object 
	  u want to use, so when we declare it as a namespace we do not
		 need to call std:: everytime , just we will write 'cout << ...'
*/


void display_list(vector<string> list)
{
	cout << "Printing ... \n\n\n\n\n";
	for (size_t i = 0; i < list.size(); i++)
	{
		cout << i << ": " <<  list[i] << "\n";
	}

	cout << "enter M to return to Menu" << endl;
}

void	Add_to_list(vector<string> &list){
	string item;

	cout << "\n\n\nAdding to list ...\n\n" << endl;
	cin >> item;
	list.push_back(item);
	cout << "the New item:" << item << "added succesfully!" << endl;
	cin.clear();
}

void Delete_from_list(vector<string> list){
	// (void)list;
	cout << "** Delet Item **\n" << endl;
	cout << "select an item from the list to delete it\n";
	if (list.size())
	{
		size_t i = 0;
		while (i < list.size())
		{
			cout << i << ": " << list[i] << endl;
			i++;
		}
		int choice; 
		cin >> choice;
		for (size_t j = 0; j < list.size(); j++)
		{
			if (list.size() && j == i)
			{
				list.
			}
		}
	}
	else
	{
		cout << "No item in the list\n";
	}
}
void	process_list(string name, char **av)
{
	int choice;
	vector<string> list;
	(void)av;

	while (true)
	{
		cout << "Hello There!, u Welcom " << name << "\n" << endl;
		cout << "1 - Print list.\n" << endl;
		cout << "2 - Add to list\n" << endl;
		cout << "3 - Delet from list.\n" << endl;
		cout << "4 - Quit.\n" << endl;
		cout << "Enter your choice and press enter.\n" << endl;
		cin >> choice;
		if (choice == 1)
		{
			display_list(list);
		}
		else if (choice == 2)
		{
			//add to list
			Add_to_list(list);
		}
		else if (choice == 3)
		{
			// Delete from the list
			Delete_from_list(list);
		}
		else if (choice == 4)
			return ;
		else 
		{
			cout << "still not implemented\n" << endl;
			return ;
		}
	}

}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		string name(argv[1]);
		process_list(name, argv);
	}
	else
		cout << "Username not supplied. . . exiting" << endl;
}
