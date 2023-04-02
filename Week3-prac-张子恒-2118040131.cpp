// Week3-prac-张子恒-2118040131.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include <string>

// Base class Pie
class Pie {
public:
    // Pure virtual function
    virtual std::string description() = 0;
};

// Derived class ApplePie
class ApplePie : public Pie {
public:
    std::string description() override {
        return "Apple Pie";
    }
};

// Derived class RaspberryPie
class RaspberryPie : public Pie {
public:
    std::string description() override {
        return "Raspberry Pie";
    }
};

// Derived class ApricotPie
class ApricotPie : public Pie {
public:
    std::string description() override {
        return "ApricotPie Pie";
    }
};

int main() {
    // Create an ApplePie object
    ApplePie applePie;

    // Print out the description of the ApplePie
    std::cout << applePie.description() << std::endl;

    // Create a RaspberryPie object
    RaspberryPie raspberryPie;

    // Print out the description of the RaspberryPie
    std::cout << raspberryPie.description() << std::endl;

    // Create a ApricotPie object
     ApricotPie apricotPie;

    // Print out the description of the RaspberryPie
    std::cout << apricotPie.description() << std::endl;

    return 0;
}