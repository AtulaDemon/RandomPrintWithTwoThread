#include <iostream>
#include <vector>

class Consumer {
	private:
	std::vector<int> numberList;

	public:
	Consumer(std::vector<int>* numberList);

	void print();
};
