#include <iostream>

template <typename T>
void Print(T& value) 
{
    std::string s = value + std::string("teste");
    std::cout << s << std::endl;
}

template <typename T, int N>
class Array
{
private:
    T m_Array[N];

public:
    Array () {}
    ~Array () {}

    int get_size() const { return N; }
};

int main(int argc, char *argv[])
{
    int x = 1;
    float y = 2.3f;
    char a = 'a';
    std::string frase = "Hello World";

    /* Print(x); */ 
    /* Print(y); */
    /* Print(y); */
    /* Print(a); */ 
    /* Print(frase); */ 
    
    Print(a); 
    Print(frase); 

    Array<int, 5> arr;
    std::cout << arr.get_size() << std::endl;

    Array<double, 5> arr2;
    std::cout << arr.get_size() << std::endl;

    return 0;
}
