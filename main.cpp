#include "Producer.h"
#include "Consumer.h"

int main() {
	Producer* pro = new Producer();
    Consumer* con = new Consumer(pro->getListAddress());
	con->print();
	return 0;
}
