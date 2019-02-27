#ifndef PRODUCER_H
#define PRODUCER_H

#include <vector>

class Producer {
	private:
    std::vector<int> numberList;

    void generateRandomNumber();

	public:
	Producer();

    std::vector<int>* getListAddress();
};

#endif //PRODUCER_H
