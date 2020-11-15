#include <iostream> // for std :: cout , std :: cerr , and std :: cin
#include <string>
auto main ( int argc , char * argv []) -> int
{
auto const a = std :: stoi ( argv [0]);
auto const b = std :: stoi ( argv [1]);
std :: cout << (a + b ) << "\n ";
return 0;
}