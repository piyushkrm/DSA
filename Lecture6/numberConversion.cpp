

// decimal to binary number systems

#include <iostream>
using namespace std;

// decimal to binary conversion
int decimalToBinary(int decimal) {

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

// Binary to decimal conversion
int binaryToDecimal(int binary) {
    int answer = 0;
    int power = 1;
    int reminder;
    while (binary > 0) {
        reminder = binary % 10;
        answer += power * reminder;
        binary = binary / 10;
        power =* 2;
    }
    return answer;
}

int main(){
    int decimal;
    cout << "Enter decimal number : ";
    cin >> decimal;
    cout << "Binary equivalent of " << decimal << " is: " << decimalToBinary(decimal) << endl;
    
    calculate from 1 to 10;
    for(int i = 1; i <= 10; i++){
        cout << "Binary equivalent of " << i << " is: " << decimalToBinary(i) << endl;
    }

    int binary;
    cout << "Enter binary number : ";
    cin >> binary;
    cout << "Decimal equivalent of " << binary << " is: " << binaryToDecimal(binary) << endl;
    
    return 0;
}