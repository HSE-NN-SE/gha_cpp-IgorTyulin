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

template<typename T>
T averageArr(T* tar, int size)
{
    T res = 0;
    for(int i=0; i<size; i++)
    {
        res += tar[i];
    }
    return res/size;
}
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
