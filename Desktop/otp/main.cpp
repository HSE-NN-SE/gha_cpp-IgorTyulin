#include "task1.h"
#define size 5

int main()
{
    int x = 1;
    int y = 25;
    bool res = less(x,y);
    std::cout << res << std::endl;
    bool result = less("minimum", "max");
    std::cout << result << std::endl;
    int mass[size] = {1,2,3,4,5};
    std::cout << averageArr(mass,size);
    return 0;
}
