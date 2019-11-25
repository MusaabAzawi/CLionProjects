
//mutex example
#include <iostream>
#include <thread>
#include <vector>
#include <mutex>


std::vector<std::thread> vecOfThread;
std::mutex mtx;

void print(){

    std::cout << "Hello from thread " << std::this_thread::get_id() << std::endl;

}

int main() {

    std::vector<std::thread> vecOfthreads;
    for (int i = 0; i < 5; ++i) {
        vecOfthreads.push_back(std::thread(print));
    }
    mtx.lock();
    for(auto& thread : vecOfthreads){

        if(thread.joinable())
                thread.join();
    }
    mtx.unlock();

    return 0;

}