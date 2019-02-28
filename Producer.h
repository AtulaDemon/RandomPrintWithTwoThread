#ifndef PRODUCER_H
#define PRODUCER_H

#include <queue>
#include <thread>

class Producer {
    private:
        std::queue<int>     numberList;

        void                generateRandomNumber();

        std::thread         generateT;

    public:
                            Producer();
                            ~Producer();

        int                 takeOneInt();
    
        void                run();
        
};

#endif //PRODUCER_H
