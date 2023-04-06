#include "AMateria.hpp"

class Ice : public AMateria{
    private:
        std::string type;
    public:
        Ice();
        ~Ice();
        Ice &operator=(const Ice &Ice);
        Ice(const Ice &Ice);
        Ice clone();

};