#include "phonebook.hpp"
class Phonebook{

    private:
	std::string array_contacts[8];

    public :

};

class Contact{

    private:

    int index;
    std::string first_name;
    std::string last_name;
    std::string nickname;



    public :
    int set_index();
    std::string set_first_name();
    std::string set_last_name();
    std::string set_nickname();

    int get_index();
    std::string get_first_name();
    std::string get_last_name();
    std::string get_nickname();


};

int     main()
{

}