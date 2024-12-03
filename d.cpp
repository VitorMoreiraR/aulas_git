#include <iostream>

class Animal {
    public:
        virtual ~Animal() = default;
       virtual void Breathe() {std::cout << "azzzzzzzz";}
        virtual void Eat() {std::cout << "aaaaRRRRRRRRaa";}
    private:
};

// Two classes virtually inheriting Animal:
class Mammal: public virtual Animal {
    public:
        virtual void Breathe() {std::cout << "aacccccccaaaa";}
     private:
};

class WingedAnimal: public virtual Animal {
    public:
        virtual void Flap() {std::cout << "aaaaaa";}
       
     private:
};

// A bat is still a winged mammal
class Bat: public Mammal, WingedAnimal {};

int main () {

    Bat b;
    
    b.Eat();
    b.Breathe();
}