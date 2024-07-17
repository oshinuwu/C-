#include <iostream>

class Distance {
private:
    int feet;
    int inches;

public:
    Distance() : feet(0), inches(0) {}
    Distance(int f, int i) : feet(f), inches(i) {}

    void input() {
        std::cout << "Enter feet: ";
        std::cin >> feet;
        std::cout << "Enter inches: ";
        std::cin >> inches;
    }

    void display() const {
        std::cout << feet << " feet " << inches << " inches" << std::endl;
    }

    friend Distance add(const Distance& d1, const Distance& d2);
};

Distance add(const Distance& d1, const Distance& d2) {
    Distance result;
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet + result.inches / 12;
    result.inches %= 12;
    return result;
}

int main() {
    Distance d1, d2, result;

    std::cout << "Enter first distance:" << std::endl;
    d1.input();

    std::cout << "Enter second distance:" << std::endl;
    d2.input();

    result = add(d1, d2);

    std::cout << "Sum of distances: ";
    result.display();

    std::cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:21-o";
    fflush(stdin);
    std::cin.get();
    return 0;
}