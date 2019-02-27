#include <vector>

class Producer {
	private:
    std::vector<int> numberList;

	public:
	Producer();

    std::vector<int>* getListAddress();
};
