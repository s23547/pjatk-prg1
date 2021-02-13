#include <iostream>
#include <cstring>

typedef unsigned char byte;

void* memfrob(void* s, size_t n) 
{
    byte* p = (byte*)s;
    byte t= (byte)42;

    while (n--)
        *p = (*p ^ t);
         p++;
    return s;
}

int main()
{
    char a[] = "Hello World";
    size_t n = 3;
    std::cout<<"Before memfrob function: "<< a <<std::endl;
    memfrob(&a, n);
    std::cout <<"After memfrob function: "<< a<<std::endl;

    return 0;
}