#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main()
{
    Character *me = new Character("me");
    Character *bob = new Character("bob");
    AMateria *tpm = new AMateria("ice");
    me->equip(tpm);
    delete me;
    return 0;

}