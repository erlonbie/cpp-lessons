#include <iostream>
#include <string.h>

class My_String
{
private:
    char * m_Buffer;
    unsigned int m_Size;

public:
    My_String (const char * text) 
    {
        m_Size = strlen(text);
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, text, m_Size);
        m_Buffer[m_Size] = 0;
    }
    ~My_String () 
    {
        delete[] m_Buffer;
    }

    My_String(const My_String& other)
       : m_Size(other.m_Size)
    {
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    }

    friend std::ostream& operator<<(std::ostream& stream, const My_String& text) 
    {
        stream << text.m_Buffer;
        return stream;
    }
    
    unsigned int getSize() const
    {
        return m_Size;
    }

    char& operator[](unsigned int index)
    {
        return m_Buffer[index];
    }
};




int main(int argc, char *argv[])
{
    My_String text = "Erlon";
    My_String other_Text = text;

    other_Text[3] = 'i';

    std::cout << text << ": " << text.getSize() << std::endl;
    std::cout << other_Text << ": " <<other_Text.getSize() << std::endl;

    return 0;
}
