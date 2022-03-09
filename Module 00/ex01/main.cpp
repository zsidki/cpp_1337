#include "Phonebook.hpp"
#include "Contact.hpp"

int     main()
{
	std::string str;
	Contact contact1;
	std::string command;

	Phonebook phonebook1;
	while(command.compare("EXIT"))
	{
		std::cout << "Choose one to start 'ADD' 'SEARCH' and 'EXIT' \n";
		getline(std::cin, command);
			if(command.compare("EXIT") == 0)
				exit(1);
		if(command.compare("ADD") == 0)
		{
			phonebook1.add();
		}
		if(command.compare("SEARCH") == 0)
		{
			phonebook1.search();
		}
	}
    return 0;
}



