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
    std::cout << res << std::endl;
    bool result = less("minimum", "max");
    std::cout << result << std::endl;
    return 0;
}
