#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Zombie{
	private:
	std::string name;

	public:

	Zombie(std::string name);
	Zombie();
	~Zombie();
	void set_name(std::string name);
	std::string get_name();
	void	announce(void);

};

Zombie* zombieHorde( int N, std::string name );



#endif
