
//condition_variable example
#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <condition_variable>

using namespace std;

   // std::vector<std::thread> vecOfThreads;
    std::condition_variable cv;
    std::mutex mtx;
    bool ready = false;

    void print() {
        // std::lock_guard<std::mutex>lockGuard(mtx);
        std::cout << "Waiting" << std::endl;
        std::unique_lock<std::mutex> guard1(mtx);
        cv.wait(guard1);
        std::cout << " Running! Hello from thread " << std::this_thread::get_id() << std::endl;
    }
    void notify() {
        std::cout << "Data prepared" << std::endl;
        cv.notify_all();
    }

   // std::this_thread::sleep_for(std::chrono::milliseconds(1));

int main() {

    std::cout << std::endl;

//    std::vector<std::thread> vecOfthreads;
//    for (int i = 0; i < 5; ++i) {
//       vecOfthreads.push_back(std::thread(print));
//    }

    std::thread t1(print);
    std::thread t2(notify);

    std::cout << std::endl;




//    for(auto& thread : vecOfthreads){
//
//        if(thread.joinable())
//                thread.join();
//    }

    return 0;

}