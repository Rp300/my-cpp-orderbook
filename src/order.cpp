// order.cpp

#include "../include/order.hpp" // header in local directory
#include <iostream> // header in standard library
#include <string>
#include <chrono>

using namespace std;
using TimePoint = std::chrono::time_point<std::chrono::high_resolution_clock>;

Order::Order(string side, string type, double price, int size) {
    
    TimePoint now = std::chrono::high_resolution_clock::now();

};


// std::chrono::duration<double> duration = orderExecutionTime - orderPlacementTime;

// // Get the duration in seconds as a double
// double seconds = duration.count(); 