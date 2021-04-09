#include <iostream>
#define size 5
#include <string.h>

template<typename T>
bool less(T x, T y)
{
    return x<y;
}

template<>
bool less<const char*>(const char* x, const char* y)
{
    return strcmp(x,y)<0;
}

int main()
{
    int x = 1;
    int y = 25;
    bool res = less(x,y);
    if(res == 1)
        std::cout << "X больше чем Y" << std::endl;
    else
        std::cout << "Y больше чем X" << std::endl;
    std::cout << res << std::endl;
    bool result = less("minimum", "max");
    if(result == 1)
        std::cout << "Я выиграл 8" << std::endl;
    else
        std::cout << "Я всё ещё выиграл 8" << std::endl;
    return 0;
}
