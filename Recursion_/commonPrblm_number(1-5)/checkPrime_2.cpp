#include <iostream>
using namespace std;


bool is_prime(int num, int i = 2) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % i == 0) {
        return false;
    }
    if ((i*i) > num) {
        return true;
    }

    return is_prime(num,i+1) ;

}

int main() {
   int num = 17 ;

    if (is_prime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}

