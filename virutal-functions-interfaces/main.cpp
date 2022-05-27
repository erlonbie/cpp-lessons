#include <iostream>

class Printable {
public:
  virtual std::string GetClasseName() = 0;
};

class Entity : public Printable {
private:
  /* data */

public:
  Entity()
  /* member_initializers */ {}
  ~Entity() {}
  virtual std::string GetName() {
    return "Entity";
  } // uso do virutal no métdo base para Polimorfismo 
  /* virtual std::string GetName() = 0; //faz com que a a classe se torne uma
   * interface */

  std::string GetClasseName() override { return "I'm Entity"; }
};

class Player : public Entity {
private:
  std::string m_Name;

public:
  Player(const std::string &name) : m_Name(name) {}
  ~Player() {}
  std::string GetName() override {
    return m_Name;
  } // uso de override pra indicar que sobrepõe um método base (ajuda a debugar)
  std::string GetClasseName() override { return "I'm Player"; }
};

void PrintName(Entity *entity) { std::cout << entity->GetName() << std::endl; }

void Print(Printable *p) { std::cout << p->GetClasseName() << std::endl; }

int main(int argc, char *argv[]) {
  Entity *e = new Entity();
  /* PrintName(e); */
  Print(e);

  Player *p = new Player("Cherno");
  /* PrintName(p); */
  Print(p);

  return 0;
}
