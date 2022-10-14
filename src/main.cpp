#include <iostream>
#include <chrono>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
int calc(boost::multiprecision::int1024_t num){
    cout << "Starting at: \n" << num << endl;
    while(num > 1) {
        if (num % 2 == 0) {
            num = num / 2;
        } else {
            num = num * 3;
            num = num + 1;
        };
        cout << num << endl;
    };
    return 0;
};
int main() {
    using chrono::high_resolution_clock;
    using chrono::duration_cast;
    using chrono::duration;
    using chrono::milliseconds;
    boost::multiprecision::int1024_t a;
    cout << "Enter a number: ";
    cin >> a;
    auto t1 = high_resolution_clock::now();
    calc(a);
    auto t2 = high_resolution_clock::now();
    auto ms_int = duration_cast<milliseconds>(t2 - t1);
    cout<< "Process finished in " << ms_int.count() << "ms\n";
    return 0;
}
