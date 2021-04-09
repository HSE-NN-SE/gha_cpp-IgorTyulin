#include <iostream>
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