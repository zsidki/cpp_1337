#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

class Phonebook{

    private:

	Contact *array_contacts;
	int check_index;
	int n_contacts;

    public :

	Phonebook();
	void add();
	void search();
    int 	check_indeex(std::string indeex);

};

#endif // PHONEBOOK_HPP