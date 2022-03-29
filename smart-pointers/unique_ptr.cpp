#include <iostream>
#include <memory>

class Entity
{
public:
    Entity ()
    {
        std::cout << "Entity created" << std::endl;
    }
    ~Entity ()
    {
        std::cout << "Entity deleted" << std::endl;
    }
    void Print() { std::cout << "Test" << std::endl; }
};

int main(int argc, char *argv[])
{
    {
        std::unique_ptr<Entity> e = std::make_unique<Entity>();
        e->Print();
    }

    return 0;
}


