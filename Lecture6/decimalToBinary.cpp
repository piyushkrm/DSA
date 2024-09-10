

// decimal to binary number systems

#include <iostream>
using namespace std;

int binaryToDecimal(int decimal) {

    int answer = 0;
    int power = 1;
    int reminder;

    while (decimal > 0) {
        reminder = decimal % 2;
        decimal /= 2;

        answer += reminder * power;
        power *= 10;
    }

    return answer;
}

int main(){
    int decimal;
    cout << "Enter decimal number : ";
    cin >> decimal;
    cout << "Binary equivalent of " << decimal << " is: " << binaryToDecimal(decimal) << endl;
    
    return 0;
}