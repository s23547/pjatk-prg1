#include "times.h" //#include <s23547/times.h> dopisać i przekopiować na koniec
#include <sstream>
#include <iostream>


s23547::Time::Time(size_t h, size_t m, size_t s)
    : hour{ std::move(h) },
    minute{ std::move(m) },
    second{ std::move(s) }
{}


auto s23547::Time::to_string() -> void
{
    while(hour<25)
    {
        system("cls");
        next_second(); 
        if (hour < 10) {
            std::cout << "0";
        }
            std::cout << hour << ":";
        if (minute < 10) {
            std::cout << "0";
        } 
            std::cout << minute << ":";

        if (second < 10) {
            std::cout << "0";
        }
            std::cout << second << std::endl;
        time_of_day();
       
    }
}


auto s23547::Time::next_hour() -> void
{
    ++hour;
    if (hour > 23) {
        hour = 0;
        next_second();
    }
   
   
}

auto s23547::Time::next_minute() -> void
{
    ++minute;
    if (minute > 59) {
        minute = 0;
        next_hour();
    }
   
}

auto s23547::Time::next_second() -> void
{
    ++second;
    if (second > 60) {
        second = 0;
        next_minute();
  
    }
 
}

auto s23547::Time::time_of_day() -> void
{
    
    if (hour < 10 && hour >= 5) {
       
        std::cout << "The morning";
    

    }
    else if (hour < 18 && hour>=10) {
       
        std::cout << "The day";
       
    }
    else if (hour < 21 && hour>=18) {
      
        std::cout << "The evening";
        
    }
    else if (hour < 5 || hour>=21) {
      
        std::cout << "The night";
        
    }
   
}


auto main() -> int
{
    s23547::Time time; 
    time.to_string();
    return 0;
}