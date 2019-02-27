#ifndef CONSUMER_H
#define CONSUMER_H

#include <iostream>
#include <vector>

class Consumer {
	private:
	std::vector<int> numberList;

	public:
	Consumer(std::vector<int>* numberList);

	void print();
};

#endif //CONSUMER_H
