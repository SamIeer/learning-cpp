// ANSWER 1: Write a program in C++ to find the first 10 natural numbers.
// Sample output: The natural numbers are:1 2 3 4 5 6 7 8 9 10
#include <iostream>
    using namespace std;
    int main(){
        for (int i = 1; i <= 10; i++)
        {
        cout<<i<<"\t";
            }

        return 0;
    }


// ANSWER 2; Write a program in C++ to find the perfect numbers between 1 and 500.                                                                         
//  The perfect numbers between 1 to 500 are: 
    #include <iostream>
    using namespace std;

    int main() {
        cout << "The perfect numbers between 1 and 500 are:" << endl;
        for (int num = 1; num <= 500; num++) {
            int sum = 1;
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    sum += i;
                    if (i * i != num) {
                        sum += num / i;
                    }
                }
            }
            if (sum == num) {
                cout << num << " ";
            }
        }
        cout << endl;
        return 0;
    }


// Answer3 :Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.
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
