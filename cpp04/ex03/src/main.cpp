#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"

int main()
{
    ICharacter *me = new ICharacter("me");
    ICharacter *bob = new ICharacter("bob");
    AMateria *tpm = new AMateria("ice");
    me->equip(tpm);
    delete me;
    return 0;

}