#include <iostream>
#include <vector>

class Vertex {
private:
  float x, y, z;

public:
  Vertex(float x, float y, float z) : x(x), y(y), z(z) {}
  ~Vertex() {}

  Vertex(const Vertex &other) : x(other.x), y(other.y), z(other.z) {
    std::cout << "Copiado" << std::endl;
  }
};

int main(int argc, char *argv[]) {
  /* //OTIMIZADO */
  /* std::vector<Vertex> v; */
  /* v.reserve(3); */
  /* v.emplace_back(1,2,3); */
  /* v.emplace_back(4,5,6); */
  /* v.emplace_back(7,8,9); */

  // NAO_OTIMIZADO
  std::string teste = "teste";
  std::vector<Vertex> v;
  v.push_back(Vertex(1, 2, 3));
  v.push_back(Vertex(4, 5, 6));
  v.push_back(Vertex(7, 8, 9));

  return 0;
}
