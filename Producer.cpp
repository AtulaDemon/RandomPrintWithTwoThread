#include "Producer.h"

Producer::Producer() {
	for(int i = 0; i<6; i++)
        numberList.push_back(i);
}

std::vector<int>* Producer::getListAddress() {
    return &numberList;
}
