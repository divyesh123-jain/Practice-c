#include<iostream>


namespace first{
   int x=1;
}

namespace second{
    int x=2;
}



int main() {
    //Namespace  = provides  a soln for preventing same conflicts in large projects . Each entitity needs a unique name.
    // A  namespace allows for  idntically named entities as long as  the name spaces are different
 using  namespace first;

    std::cout << x;
    



 



    return 0;
}