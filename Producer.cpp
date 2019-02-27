#include "Producer.h"

#include<random>

Producer::Producer() {
    generateRandomNumber();
}

void Producer::generateRandomNumber() {
    std::random_device rd;
    std::mt19937_64 gen(rd());  //Predefined random number generators
    std::uniform_int_distribution<int> dis(0,1000); //Random number distributions
    for(int i=0; i<1000; i++) {
        numberList.push_back(dis(gen));
    }
}

std::vector<int>* Producer::getListAddress() {
    return &numberList;
}
