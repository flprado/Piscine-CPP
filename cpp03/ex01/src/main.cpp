#include "../inc/ScavTrap.hpp"

int	main(void)
{
	ClapTrap henk("Henk");
	ClapTrap peter("Peter");
	henk.takeDamage(5);
	peter.attack("Piet");
	peter.beRepaired(3);
	ScavTrap peer("Peer");
	ScavTrap peers;
	peers = peer;
	peers.guardGate();
}