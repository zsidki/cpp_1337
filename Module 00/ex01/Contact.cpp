#include "Contact.hpp"

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