#include <iostream>
#include <list>

int main() {
    // Create a list of integers
    std::list<int> myList;

    // Add elements to the list using push_back()
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);
    myList.push_back(50);

    // Display the list using an iterator
    std::cout << "List elements: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Insert an element at the beginning of the list using push_front()
    myList.push_front(5);
    std::cout << "List elements after push_front(5): ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Remove the first element of the list using pop_front()
    myList.pop_front();
    std::cout << "List elements after pop_front(): ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Remove the last element of the list using pop_back()
    myList.pop_back();
    std::cout << "List elements after pop_back(): ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Insert an element at a specific position using insert()
   auto it2= myList.begin();
    std::advance(it2, 2); // move the iterator 2 positions forward
    myList.insert(it2, 25); // insert 25 at the current position
    std::cout << "List elements after insert(25) at position 2: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Remove an element at a specific position using erase()
    auto it1 = myList.begin();
    std::advance(it1, 2); // move the iterator 2 positions forward
    myList.erase(it1); // erase the element at the current position
    std::cout << "List elements after erase() at position 2: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Check if the list is empty using empty()
    if (myList.empty()) {
        std::cout << "The list is empty." << std::endl;
    } else {
        std::cout << "The list is not empty." << std::endl;
    }

    // Clear the list using clear()
    myList.clear();
    std::cout << "List elements after clear(): ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }

     // Check if the list is empty using empty()
    if (myList.empty()) {
        std::cout << "The list is empty." << std::endl;
    } else {
        std::cout << "The list is not empty." << std::endl;
    }
    std::cout << std::endl;

    std::cin.get();
    return 0;
}