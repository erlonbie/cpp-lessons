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
        std::shared_ptr<Entity> e;
        {
            std::shared_ptr<Entity> e1 = std::make_shared<Entity>();
            e = e1;
        }
        e->Print();
    }

    /* { */
    /*     std::weak_ptr<Entity> e; */
    /*     { */
    /*         std::weak_ptr<Entity> e1 = std::weak_ptr<Entity>(); */
    /*         e = e1; */
    /*     } */
    /*     e->Print(); //não vai funcionar pois não aumenta o número de referências */
    /* } */

    return 0;
}


