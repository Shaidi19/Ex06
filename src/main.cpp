#include "Prime.h"
#include <iostream>

using namespace std;

int main() {
	Prime num1, num2;
    num1.setValue(2);
    num2 = num1.nextPrime();
    cout << num1.getValue << num2 << endl;
    bool result = num1.checkPrime(17); 
    cout << result << endl;
    num2.setValue(17);             
    int count = num2.countBetween(num1);
    bool ans = num2.isValid();
    cout << num2.getValue << count << ans;
}