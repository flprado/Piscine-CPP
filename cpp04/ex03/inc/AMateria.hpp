#include <string>
#include <iostream>

class AMateria
{
    protected:
    public:
        AMateria();
        ~AMateria();
        AMateria(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        virtual ~AMateria() = 0;
};