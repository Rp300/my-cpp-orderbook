#ifndef ORDER_HPP
#define ORDER_HPP

#include <string>
#include <chrono>
#include <ctime>

using namespace std;
enum OrderType { limit, market };
enum Side { ask, bid };

class Order {
private:
    Side side;
    OrderType type;
    double price;
    int size;
    time_t timestamp;
    time_t exec_timestamp;
    bool filled;

public:
    // Constructor
    Order(Side side, OrderType type, double price, int size);

    // Getters
    Side getSide() const;
    OrderType getType() const;
    double getPrice() const;
    int getSize() const;
    time_t getTimestamp() const;
    bool getFilled() const;

    char* printTimestamp() const;
    char* printExecTimestamp() const;

    void executeOrder();
};

#endif