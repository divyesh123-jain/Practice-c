#include<iostream>
 
using namespace std;

int main() 

{
//type conversion = conversion a value of one data type to another
//     implicit = automatic
// explicit = precede value with new data type(int)

// -------implicit------------

// int x = 3.14;


// -------------------explicit---------------

// double x = (int) 3.14;

// cout << x;


int correct = 7;
int question = 10;

double score = correct/(double)question*100;

cout << score <<"%";



return 0;

}