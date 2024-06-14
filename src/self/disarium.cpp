#include <iostream>
#include <cmath>
class Disarium {
private:
    int num;
public:
    Disarium(int n) : num(n) {} //define a constructor

    int getDigitCount() {
        int count = 0;
        int temp = num;
        while (temp != 0) {
            temp /= 10;
            count++;
        }
        return count;
    }

    int getDigit(int pos) {
        int temp = num;
        for (int i = 1; i < pos; i++) {
            temp /= 10;
        }
        return temp % 10;
    }

    bool isDisarium() {
        int sum = 0;
        int digitCount = getDigitCount();
        for (int i = 1; i <= digitCount; i++) {
            sum += pow(getDigit(i), i);
        }
        return sum == num;
    }

    void checkDisarium() {
        if (isDisarium()) {
            std::cout << num << " is a Disarium number." << std::endl;
        } else {
            std::cout << num << " is not a Disarium number." << std::endl;
        }
    }
};

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    Disarium d(num);
    d.checkDisarium();

    fflush(stdin);
    std::cin.get();
    return 0;
}