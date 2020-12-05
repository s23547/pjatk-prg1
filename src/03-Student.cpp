#include <s23547/stundent.h>
#include <iostream>
#include <sstream>

s23547::Student::Student(
     std::string  n,
     std::string  sn,
    unsigned int idx,
    unsigned int vt,
    float gpa)
    : name{ std::move(n) },
    surname{ std::move(sn) },
    index{ std::move(idx) },
    valid_term{ std::move(vt) },
    gpa{ std::move(gpa) }
{}

auto s23547::Student::to_string() const -> std::string
{
    auto out = std::ostringstream{};
    out << name <<" "<<  surname <<" "<< index <<" "<< valid_term <<" "<< gpa;
    return out.str();
}

auto main() ->int
{
    auto student = s23547::Student{ "Jolanta","Michalczyk",23547,1,5.2345672 };
    std::cout << student.to_string() << "\n";
    return 0;
}