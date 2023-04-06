#include "AMateria.hpp"

class Cure : public AMateria{
    private:
        std::string type;
    public:
        Cure();
        ~Cure();
        Cure &operator=(const Cure &cure);
        Cure(const Cure &cure);

};