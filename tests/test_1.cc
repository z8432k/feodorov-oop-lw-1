#include <iostream>
#include <string>
#include <Rangechecker.h>

using namespace std;

int main(int argc, char** argv) {
    cout << "Lab 1" << endl << endl;

    double left = 10.5;
    double right = 15.7;
    double num = 12;

    Rangechecker rchecker {};

    rchecker.setLeft(left);
    rchecker.setRight(right);

    bool result = rchecker.rangecheck(num);

    cout << "From: " << left << endl;
    cout << "To: " << right << endl;
    cout << "Num: " << num << endl << endl;

    cout << "Result: " << result << endl;

    exit(!result);
}
