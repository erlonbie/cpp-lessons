#include <iostream>
#include "static.h"

int printa();
/* extern int s_Variable;  // usado pra referenciar uma variável externa ao arquivo atual*/

int main(int argc, char *argv[])
{
    s_Variable = 4;
    std::cout << "Local: " << s_Variable << std::endl;
    std::cout << "static: " << printa() << std::endl;
    return 0;
}
