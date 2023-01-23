#include<iostream>
#include<vector>

// typedef std::vector<std::pair<std::string,int paralist_t;>>
typedef std::string text_t;
typedef int number_t;
int main() {
    //typedef = reserved keyword  usedd to create an additional name 
    //(alias) for another  data type .
    //new identifier  for an existence type 
    //helps with readability and reduces typo

text_t firstname = "Bro";
number_t age =21;

std::cout << firstname << '\n';
std::cout << age << '\n';
return 0;
}