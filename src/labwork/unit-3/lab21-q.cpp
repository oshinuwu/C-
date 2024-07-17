#include <iostream>

class MultipleFinder {
private:
    int num;

public:
    MultipleFinder(int n) {
        this->num = n;
    }

    void findMultiples(int n) {
        std::cout << "The first " << n << " multiples of " << this->num << " are:" << std::endl;
        for (int i = 1; i <= n; i++) {
            std::cout << i * this->num << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    MultipleFinder finder(5);  // Initialize with 5
    finder.findMultiples(10);  // Find the first 10 multiples of 5

    std::cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:21-q";
    fflush(stdin);
    std::cin.get();
    return 0;
}