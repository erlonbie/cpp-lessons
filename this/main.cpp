#include <iostream>
#include <string>

class Entity
{
public:
    int x;

public:
    Entity (int x) 
    {
        /* x = x; */
       this->x = x;
    }
    ~Entity () {}
};

int main(int argc, char *argv[])
{
    /* Entity * e = new Entity(1); */
    /* Entity e = 1; */
    /* Entity e = Entity(1); */
    Entity e(1);
    std::cout << e.x << std::endl;
    return 0;
}



