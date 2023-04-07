#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"


int	main(void)
{
	ClapTrap henk("Henk");
	ClapTrap peter("Peter");
    ScavTrap harry("Harry");
	henk.takeDamage(5);
	peter.attack("Piet");
	peter.beRepaired(3);
    harry.guardGate();
	FragTrap peer("Peer");
	peer.highFivesGuys();

}