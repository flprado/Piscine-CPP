#include "Animals.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    //const Animals* meta = new Animals();
    const Animals* j = new Dog();
    const Animals* i = new Cat();
    const WrongAnimal *k = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    i->MakeSound(); //will output the cat sound!
    j->MakeSound();
    k->MakeSound();
    //meta->MakeSound();

    delete i;
    

    return 0;
}