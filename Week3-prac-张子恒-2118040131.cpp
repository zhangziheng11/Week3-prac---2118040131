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

int main() {
    Pie* piePtr = nullptr; // pointer to Pie

    std::cout << "What type of pie would you like?" << std::endl;
    std::cout << "1 represents Apple Pie" << std::endl;
    std::cout << "2 represents Raspberry Pie" << std::endl;
    std::cout << "Please type your choice 1 or 2 ?" << std::endl;
    int choice;
    std::cin >> choice;

    switch (choice) {
    case 1:
        piePtr = new ApplePie();
        break;
    case 2:
        piePtr = new RaspberryPie();
        break;
    default:
        std::cout << "Invalid choice, exiting." << std::endl;
        return 0;
    }

    // Create a ApricotPie object
     ApricotPie apricotPie;


