//
// Created by Alptekin's Macbook on 18.01.2024.
//

#ifndef BIL142_TEST_H
#define BIL142_TEST_H


int calculateSum(const int first, const int second);

int calculateDiv(const double first, const double second);

double calculateMultiple(const double first, const int second);

double withoutNames(int, int);
/*
 #include <iostream>
using namespace std;
#include "Test.h"
int main()
{
      int result = calculateSum(1, 2);
      cout << "Result is: " << result << "\n";
      result = calculateMultiple(3, 4);
      cout << "Result is: " << result << "\n";
      result = static_cast<int>(withoutNames(20.0, 10.0));
      cout << "Result is: " << result << "\n";
}
*/

using namespace std;
class Foo {
public:
    void abc() {
        int a;
        a++;
    }
};
#endif //BIL142_TEST_H
