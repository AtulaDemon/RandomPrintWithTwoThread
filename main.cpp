#include "Producer.h"
#include "Consumer.h"

int main() {
    Producer* prod = new Producer();
    Consumer* cons = new Consumer(prod);
    prod -> run();
    cons -> run();
	return 0;
}
