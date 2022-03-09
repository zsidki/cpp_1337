#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	check_index = 0;
	n_contacts = 0;
	array_contacts = new Contact[8];
}

void Contact::set_index(int i)
{
    index = i;
}
void Contact::set_first_name(std::string f)
{
    first_name = f;
}
void Contact::set_last_name(std::string l)
{
    last_name = l;
}
void Contact::set_nickname(std::string n)
{
    nickname = n;
}
void Contact::set_phone_number(std::string p)
{
	phone_number = p;
}
void Contact::set_dark_secret(std::string d)
{
	dark_secret = d;
}
int Contact::get_index()
{
    return index;
}
std::string Contact::get_first_name()
{
    return first_name;
}
std::string Contact::get_last_name()
{
    return last_name;
}
std::string Contact::get_phone_number()
{
	return phone_number;
}
std::string Contact::get_nickname()
{
    return nickname;
}

std::string Contact::get_dark_secret(){
    return dark_secret;
}

std::string Contact::input_str( std::string str)
{
	std::string input;	
	while(input.length() == 0)
	{
		getline(std::cin, input);
		if (input.length() > 10)
			input =	input.replace(input.begin()+9, input.end() , 1, '.');
			
		if( input.length() == 0)
			std::cout << "Please enter " << str << std::endl;
	}
	return input;
}

void Phonebook::add()
{
	
	Contact contact1;

	std::cout << "Please enter First name: \n"; 
	contact1.set_first_name(contact1.input_str("First name:"));
	std::cout << "Please enter Last name: \n";
	contact1.set_last_name(contact1.input_str("Last name:"));
	std::cout << "Please enter Nickname: \n";
	contact1.set_nickname(contact1.input_str("Nickname:"));
	std::cout << "Please enter Phone number: \n";
	contact1.set_phone_number(contact1.input_str("Phone number:"));
	std::cout << "Please enter Darkest secret: \n";
	contact1.set_dark_secret(contact1.input_str("Darkest secret:"));
	contact1.set_index((check_index) % 8);
	array_contacts[(check_index++) % 8] = contact1;
	if(n_contacts < 8)
		n_contacts++;
}

int 	Phonebook::check_indeex(std::string indeex)
{
	int index;

	for (size_t i = 0; i < indeex.length(); i++)
	{
		if(!isdigit(indeex[i]))
			return -1;
	}
	index = std::atoi(indeex.c_str());
	
	if (index >= 0  && index < n_contacts)
		return index;
	return -1;
}

void	Phonebook::search()
{
	std::cout<<std::endl;
	std::cout<< std::setw(10) <<"Index"<< "|" ;
	std::cout<< std::setw(10) <<"First Name"<< "|" ;
	std::cout<< std::setw(10) <<"Last name"<< "|" ;
	std::cout<< std::setw(10) <<"Nickname";
	std::cout <<std::endl;
	std::cout<<"--------------------------------"<<std::endl;

	for (int i = 0; i < n_contacts; i++)
	{
		std::cout << std::setw(10) << array_contacts[i].get_index()<< "|";
		std::cout << std::setw(10) << array_contacts[i].get_first_name()<< "|";
		std::cout << std::setw(10) << array_contacts[i].get_last_name() << "|" ;
		std::cout << std::setw(10) << array_contacts[i].get_nickname() ;
		std::cout << std::endl;
	}
	std::cout<<"--------------------------------"<<std::endl;

	std::string input_index = "20";
	int i;
	while((i = check_indeex(input_index)) < 0)
	{
		std::cout << "Please enter a valid index \n";
		getline(std::cin, input_index);
	}
	std::cout<<"\n\n----------------- Contact " << i << " -----------------"<<std::endl;
	std::cout<< "Index: " << array_contacts[i].get_index()<< std::endl;
	std::cout<< "First name: " << array_contacts[i].get_first_name()<< std::endl;
	std::cout<< "Last name: " << array_contacts[i].get_last_name()<< std::endl;
	std::cout<< "Nickname: " << array_contacts[i].get_nickname()<< std::endl;
	std::cout<< "Phone number: " << array_contacts[i].get_phone_number()<< std::endl;
	std::cout<< "Darkest secret: " << array_contacts[i].get_dark_secret()<< std::endl;

}

int     main()
{
	std::string str;
	Contact contact1;
	std::string command = " ";

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



