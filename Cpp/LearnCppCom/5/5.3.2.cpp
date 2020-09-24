#include <string>
#include <iostream>

enum Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    ostrich
};

std::string getAnimalName(Animal animal)
{
    
    switch (animal)
    {
        case pig:
            return "Pig";
        case chicken:
            return "chicken"; 
        case goat:
            return "Goat";
        case cat:
            return "Cat";
        case dog:
            return "Dog";
        case ostrich:
            return "Ostrich";
    
        default:
            return "what are you input？";
    }
}

void printAnimalLegs(Animal animal)
{
    std::cout << "A " << getAnimalName(animal) << " hase ";
    
    switch (animal)
    {
        case pig:
        case goat:
        case cat:
        case dog:
        case ostrich:
            std::cout << "4";
            break;
        case chicken:
            std::cout << "2";
            break;
        default:
            std::cout << "Nothing happen";

    }
}

int main()
{
    printAnimalLegs(pig);
    std::cout << "\n";
    printAnimalLegs(chicken);

    return 0;
}
