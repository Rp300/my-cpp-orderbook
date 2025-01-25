// order.cpp

#include "../include/order.hpp" // header in local directory
#include <iostream> // header in standard library
#include <string>
#include <ctime>
#include <chrono>

using namespace std;
// using TimePoint = chrono::time_point<chrono::high_resolution_clock>;

Order::Order(Side side, OrderType type, double price, int size) {
    
    // Order::timestamp = std::chrono::high_resolution_clock::now();
    const auto p1 = chrono::system_clock::now();
    Order::timestamp = chrono::system_clock::to_time_t(p1);
    Order::side = side;
    Order::type = type;
    Order::price = price;
    Order::size = size;
    Order::filled = false;
};

Side Order::getSide() const { return side; }
OrderType Order::getType() const { return type; }
double Order::getPrice() const { return price; };
int Order::getSize() const { return size; };
time_t Order::getTimestamp() const { return timestamp; };
bool Order::getFilled() const { return filled; };

char* Order::printTimestamp() const { return ctime(&timestamp); }
char* Order::printExecTimestamp() const { return ctime(&exec_timestamp); }


void Order::executeOrder() {
    auto const now = std::chrono::system_clock::now();
    Order::exec_timestamp = std::chrono::system_clock::to_time_t(now);
    time_t duration = Order::exec_timestamp - Order::getTimestamp();

    cout << "Order Executed!: " << Order::printExecTimestamp() << endl;
    cout << "Duration: " << duration << "s" << endl;
    Order::filled = true;
}


// std::chrono::duration<double> duration = orderExecutionTime - orderPlacementTime;

// // Get the duration in seconds as a double
// double seconds = duration.count(); 