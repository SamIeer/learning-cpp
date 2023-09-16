// ANSWER 1
// #include <iostream>
// using namespace std;
// int main(){
//     for (int i = 1; i <= 10; i++)
//     {
//        cout<<i<<"\t";
//         }
//     return 0;
// }

// ANSWER 2
// #include <iostream>
// using namespace std;

// int main() {
//     cout << "The perfect numbers between 1 and 500 are:" << endl;
//     for (int num = 1; num <= 500; num++) {
//         int sum = 1;
//         for (int i = 2; i * i <= num; i++) {
//             if (num % i == 0) {
//                 sum += i;
//                 if (i * i != num) {
//                     sum += num / i;
//                 }
//             }
//         }
//         if (sum == num) {
//             cout << num << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }

// Answer3
#include <iostream>
using namespace std;

int main() {
    int a , b;
    int arr[10];
    cin>>a>>b;
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
        }
    cout<<a;
    return 0;
}