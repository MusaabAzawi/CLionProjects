
//mutex example
#include <iostream>
#include <thread>
#include <vector>
#include <mutex>


std::vector<std::thread> vecOfThread;
std::mutex mtx;

void print(){
   // std::lock_guard<std::mutex>lockGuard(mtx);
    mtx.lock();
    std::cout << "Hello from thread " << std::this_thread::get_id() << std::endl;
    mtx.unlock();

}

int main() {

    std::vector<std::thread> vecOfthreads;
    for (int i = 0; i < 5; ++i) {
        vecOfthreads.push_back(std::thread(print));
    }

    for(auto& thread : vecOfthreads){

        if(thread.joinable())
                thread.join();
    }

    return 0;

}