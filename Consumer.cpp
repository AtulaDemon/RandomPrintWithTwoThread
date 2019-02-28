#include "Consumer.h"

#include <iostream>
#include <chrono>

Consumer::Consumer(Producer* prod) {
    this -> prod = prod;
}

Consumer::~Consumer() {
}

void Consumer::print() {
    int theNumber;
    for(int i=0; i<10000; i++) {
        theNumber = prod->takeOneInt();
        if(theNumber != 0) {
            std::cout << theNumber << " - ";
            //std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }
}

void Consumer::run() {
    printT = std::thread(&Consumer::print, this);
    printT.join();
}
