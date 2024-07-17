#include <iostream>

class Matrix {
private:
    int rows;
    int cols;
    int data[2][2];

public:
    Matrix(int rows, int cols) : rows(rows), cols(cols) {}

    void setElement(int row, int col, int value) {
        if (row >= 0 && row < rows && col >= 0 && col < cols) {
            data[row][col] = value;
        }
    }

    int getElement(int row, int col) {
        if (row >= 0 && row < rows && col >= 0 && col < cols) {
            return data[row][col];
        }
        return 0;
    }

    Matrix add(Matrix other) {
        if (rows!= other.rows || cols!= other.cols) {
            throw std::runtime_error("Matrix dimensions do not match for addition");
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.setElement(i, j, getElement(i, j) + other.getElement(i, j));
            }
        }
        return result;
    }

    void print() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << getElement(i, j) << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Matrix m1(2, 2);
    m1.setElement(0, 0, 1);
    m1.setElement(0, 1, 2);
    m1.setElement(1, 0, 3);
    m1.setElement(1, 1, 4);

    Matrix m2(2, 2);
    m2.setElement(0, 0, 5);
    m2.setElement(0, 1, 6);
    m2.setElement(1, 0, 7);
    m2.setElement(1, 1, 8);

    std::cout << "Matrix 1:" << std::endl;
    m1.print();

    std::cout << "Matrix 2:" << std::endl;
    m2.print();

    Matrix m3 = m1.add(m2);
    std::cout << "Matrix 1 + Matrix 2:" << std::endl;
    m3.print();

    std::cout<<"\nName: Oshin Pant Roll NO:23 Lab_no:21-m";
    fflush(stdin);
    std::cin.get();
    return 0;
}