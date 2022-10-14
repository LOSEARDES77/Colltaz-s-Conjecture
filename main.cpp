#include <iostream>
using namespace std;
int calc(int num){
    while(num != 1){
        if (num %2 == 0){
            num= num/2;
        }else{
            num = 3*num+1;
        }
        cout << num << endl;
    }
    return 0;
};
int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    calc(a);
    return 0;
}
