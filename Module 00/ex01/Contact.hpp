
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact{

    private:

    int index;
	std::string phone_number;
    std::string first_name;
    std::string last_name;
    std::string nickname;
	std::string dark_secret;

    public :

    void set_index(int i);
    void set_first_name(std::string f);
    void set_last_name(std::string l);
    void set_nickname(std::string n);
	void set_phone_number(std::string p);
	void set_dark_secret(std::string d);

    int get_index();
    std::string get_first_name();
    std::string get_last_name();
	std::string get_phone_number();
    std::string get_nickname();
	std::string get_dark_secret();
	std::string input_str( std::string str);


};

#endif