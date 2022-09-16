#include <iostream>

/* TODO: criar um snippet de classe <17-07-22, erlonbie> */
/* NOTE: criar um snippet de classe <17-07-22, erlonbie> */
/* WARN: criar um snippet de classe <17-07-22, erlonbie> */
/* BUG: criar um snippet de classe <17-07-22, erlonbie> */

template <typename T> void Print2(T &value) {
  std::string s = value + std::string("teste");
  std::cout << s << std::endl;
}
template <typename T, int N> class Array {
private:
  T m_Array[N];

public:
  Array() {}
  ~Array() {}

  int get_size() const { return N; }
};

int main(int argc, char *argv[]) {
  int x = 1;
  float y = 2.3f;
  char a = 'a';
  std::string frase = "Hello World";

  /* Print2(x); */
  /* Print2(y); */
  /* Print2(y); */
  /* Print2(a); */
  /* Print2(frase); */

  Print2(a);
  Print2(frase);

  Array<float, 3> ar2;
  std::cout << ar2.get_size() << std::endl;

  Array<int, 5> arr;
  std::cout << arr.get_size() << std::endl;

  Array<double, 5> arr2;
  std::cout << arr.get_size() << std::endl;
  return 0;
}
