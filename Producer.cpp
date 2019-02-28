#include "Producer.h"

#include <random>
#include <iostream>

Producer::Producer() {
} 

Producer::~Producer() {
}

void Producer::generateRandomNumber() {
    std::random_device rd;
    std::mt19937_64 gen(rd());  //Predefined random number generators
    std::uniform_int_distribution<int> dis(1,1000); //Random number distributions
    while(true) {
        numberList.push(dis(gen));
    }
}

void Producer::run() {
    generateT = std::thread(&Producer::generateRandomNumber, this);
}

int Producer::takeOneInt() {
    int oneNumber = 0;
    if(!numberList.empty()) {
        oneNumber = numberList.front();
        numberList.pop();
    }
    return oneNumber;
}
