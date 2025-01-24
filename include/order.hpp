#ifndef ORDER_HPP
#define ORDER_HPP

#include <string>
#include <chrono>

using TimePoint = std::chrono::time_point<std::chrono::high_resolution_clock>;

class Order {
private:
    std::string side;
    std::string type;
    double price;
    int size;
    TimePoint timestamp;
    TimePoint exec_timestamp;

public:
    Order(std::string side, std::string type, double price, int size);
    // Getters
    std::string getSide() const { return side; }
    std::string getType() const { return type; }
    double getPrice() const { return price; }
    int getSize() const { return size; }
    TimePoint getTimestamp() const { return timestamp; }
};

#endif