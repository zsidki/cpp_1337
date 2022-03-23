#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	    ClapTrap{

	protected:
		std::string _name; // which is passed as parameter to a constructor
		int _hit_points;
		int _energy_point;
		int	_attack_damage;

	public:


		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap& claptrap);
		ClapTrap();
		~ClapTrap();

		void setAttack_Damage(unsigned int amount);
		unsigned int getAttack_Damage(void) const;


		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);


};

#endif


