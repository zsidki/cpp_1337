#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	    ClapTrap{

	private:
		std::string _name; // which is passed as parameter to a constructor
		int _hit_points;
		int _energy_point;
		int	_attack_damage;

	public:


    	ClapTrap();
		ClapTrap(std::string _name);
    	//ClapTrap();
    	~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);


};

#endif


