#ifndef CONSUMER_H
#define CONSUMER_H

#include "Producer.h"

#include <thread>

class Consumer {
    private:        
        Producer*       prod;

        void            print();

        std::thread     printT;

    public:
                        Consumer(Producer* prod);
                        ~Consumer();

        void            run();
        
};

#endif //CONSUMER_H
