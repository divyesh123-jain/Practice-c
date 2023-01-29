#include<iostream>

int main()
{

//cout <<  (insertion operator)
//cin << (extraction operator)

    std::string name;
    int age;

    std::cout << "whats ur name?: ";
    std::cin >> name;


     std::cout << "whats ur age?: " ;
    std::cin >> age;


    std::cout << "hello " << name << '\n';
    std::cout << "u are" << age << "year old";



    return 0;
}