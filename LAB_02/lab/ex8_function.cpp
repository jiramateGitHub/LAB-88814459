//*********************************
// Author: <Jiramate Phuaphan>
// Example define function
//*********************************
#include <iostream>
#include <cmath>
using namespace std;
double hypothenuse (double a, double b) {
 return sqrt(a * a + b * b);
}
int main() {
 double x = 5, y = 7;
 cout << hypothenuse(x, y) << endl;
 cout << sqrt(x * x + y * y) << endl;
 return 0;
}
