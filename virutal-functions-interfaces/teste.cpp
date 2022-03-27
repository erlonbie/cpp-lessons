#include <iostream>

class nome_da_classe
{
private:
    int m_x, m_y, m_z;

public:
    mutable int count_construtor = 0, count = 0;
    nome_da_classe ();
    nome_da_classe (int x, int y, int z);
    virtual ~nome_da_classe ();

    void printa_nomes() const
    {
        count++;
        std::cout << "X: " << m_x << std::endl;
        std::cout << "Y: " << m_y << std::endl;
        std::cout << "Z: " << m_z << std::endl;
        std::cout << "Count: " << count << std::endl;
        std::cout << "Count_constructor: " << count_construtor << std::endl;
    }
};

nome_da_classe::nome_da_classe () { count++; count_construtor++; }

nome_da_classe::nome_da_classe (int x, int y, int z) :
    m_x(x), m_y(y), m_z(z) { count++; count_construtor++; }

nome_da_classe::~nome_da_classe () {}



int main(int argc, char *argv[])
{
    nome_da_classe n;
    n = nome_da_classe(1,2,3);
    n.printa_nomes();
    
    return 0;
}
