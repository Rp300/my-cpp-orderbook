// test.cpp

#include "../include/order.hpp"
#include <iostream>
#include <unistd.h>

// This is where I am going to write tests from the orders class
using namespace std;

int main() {
    // Testing Order object creation
    cout << "\nTesting Order object creation" << endl;

    // Initialize Order object
    Order myOrder(ask, limit, 100.05, 10);

    // Tests
    cout << "Tests" << "\n" << "==========" << endl;
    // check if myOrder is created
    bool test1 = (myOrder.getSide() == ask);
    bool test2 = (myOrder.getType() == limit);

    double price = myOrder.getPrice();
    bool test3 = (price== 100.05);

    int size = myOrder.getSize();
    bool test4 = (size == 10);

    cout << "Order created: " << myOrder.printTimestamp()<< endl;
    
    cout << "Test 1 " << "Passed: " << test1 << endl;
    cout << "Test 2 " << "Passed: " << test2 << endl;
    cout << "Test 3 " << "Passed: " << test3 << endl;
    cout << "Test 4 " << "Passed: " << test4 << endl;

    cout << "Go to sleep..." << endl;
    sleep(3);
    cout << "...Wake! \n" << endl;
    myOrder.executeOrder();
}