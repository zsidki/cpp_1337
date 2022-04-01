#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	    ClapTrap{

	private:

		std::string _name;
		int _hit_points;
		int _energy_point;
		int	_attack_damage;

	public:

	    //----- Constructor & Destructor -------//
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap& claptrap);
		ClapTrap();
		~ClapTrap();

    	//---------- Setter & Getter ------------//
		void setAttack_Damage(unsigned int amount);
		unsigned int getAttack_Damage(void) const;

		//----------- Member function ----------//
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif
