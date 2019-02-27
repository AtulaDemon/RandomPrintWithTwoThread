#include "Consumer.h"

Consumer::Consumer(std::vector<int>* numberList) {
	this->numberList = *numberList;
}

void Consumer::print() {
	int s = numberList.size();
	for(int i=0; i<s; i++) {
		std::cout << numberList[i] << std::endl;
	}
}
