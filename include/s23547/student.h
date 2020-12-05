#ifndef S23547_STUDENT_H
#define S23547_STUDENT_H
#include <string>

namespace s23547{

    struct Student{
        std::string const name;
        std::string const surname;
        unsigned int index;
        unsigned int valid_term;
        float gpa;

        Student(std::string);

        Student( std::string  n,  std::string sn,
            unsigned int idx, unsigned  int vt, float gp);
            
        auto to_string() const -> std::string; //f.skladowa
    };
}

#endif