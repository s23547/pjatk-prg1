#ifndef S23547_STUDENT_H
#define S23547_STUDENT_H
#include <string>

namespace s23547 {

    struct Time {

        unsigned int hour;
        unsigned int minute;
        unsigned int second;
        constexpr static size_t max_hour{ 23 };
        constexpr static size_t max_minute{ 59 };
        constexpr static size_t max_second{ 59 };

        Time(std::string);
        Time(size_t = max_hour, size_t = max_minute, size_t = max_second);


        auto next_hour() -> void;
        auto next_minute() -> void;
        auto next_second() -> void;

        auto time_of_day()->void;

        //pora dnia
        enum class Time_of_day 
        {
        
               morning =5,
               day =  10,
               evening = 18,
               night = 21,

        };
        

       //Time_of_day();
       auto to_string() -> void;

    };
}


#endif