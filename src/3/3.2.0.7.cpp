#include <iostream>
#include <cstring>

typedef unsigned char byte;

void* memrev(void* s, size_t n) {
    byte* p = (byte*)s;
    byte t= (byte)42;

    while (n--)
        *p = *p ^ t;
         p++;
    return s;
}

int main()
{
    char a[] = "Hello World";
    size_t n = 10;
    std::cout<<"Before memrev function: "<< a <<std::endl;
    memrev(&a, n);
    std::cout <<"After memfrev function: "<< a<<std::endl;

    return 0;
}