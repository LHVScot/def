#include <iostream>


using namespace std;
void pryam(int n, int k) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << "*";
        }
        cout << "\n";
        }
}


int fact(int a) {
    int res = 1;
    for (int i = 1; i <= a; i++) {
        res *=i;
    }
    return res;
}
int kub(int a) {
    int res = 0;
    a *= (a * a);
    res += a;
    return res;
}
#include <iostream>

using namespace std;

bool is_prime(int n) {
    cout << "если 1 - простое число\nесли 0 - не простое:\n";
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int max1(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}
bool ToF(int a) {
    if (a < 0) {
        return false;
    }
    if (a > 0) {
        return true;
    }
    if (a == 0) {
        cout << "это ноль";
    }
}

int main() {
    setlocale(LC_ALL, "ru");
  
    pryam(10, 15);
    cout<< fact(5)<<endl;
    cout << is_prime(3)<<endl;
    cout << kub(2)<<endl;
    cout<<max1(2, 4)<<endl;
    cout << ToF(0)<<endl;
    return 0;
}
