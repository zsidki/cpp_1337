#include "Phonebook.hpp"
class Phonebook{

    private:
	std::string array_contacts[8];

    public :

};

class Contact{

    private:

    std::string index;
	std::string phone_number;
    std::string first_name;
    std::string last_name;
    std::string nickname;
	std::string dark_secret;



    public :
    void set_index(std::string i)
    {
        index = i;
    }

    void set_first_name(std::string f)
    {
        first_name = f;
    }

    void set_last_name(std::string l)
    {
        last_name = l;
    }

    void set_nickname(std::string n)
    {
        nickname = n;
    }

	void set_phone_number(std::string p)
	{
		phone_number = p;
	}

	void set_dark_secret(std::string d)
	{
		dark_secret = d;
	}

    std::string get_index()
    {
        return index;
    }

    std::string get_first_name()
    {
        return first_name;
    }

    std::string get_last_name()
    {
        return last_name;
    }

	std::string get_phone_number()
	{
		return phone_number;
	}

    std::string get_nickname()
    {
        return nickname;
    }

	std::string get_dark_secret()
    {
        return dark_secret;
    }

	std::string input_str( std::string str)
	{
		std::string input;	
		while(input.length() == 0)
		{
				getline(std::cin, input);
				if( input.length() == 0)
					std::cout << "Please enter " << str << std::endl;
		}
		return input;
	}
};


int     main()
{
	std::string str;
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


	std::cout<< "First name: " << contact1.get_first_name()<< std::endl;
	std::cout<< "Last name: " << contact1.get_last_name()<< std::endl;
	std::cout<< "Nickname: " << contact1.get_nickname()<< std::endl;
	std::cout<< "Phone number: " << contact1.get_phone_number()<< std::endl;
	std::cout<< "Darkest secret: " << contact1.get_dark_secret()<< std::endl;



	if(!(str.compare("EXIT")))
		exit(0);


    return 0;
}