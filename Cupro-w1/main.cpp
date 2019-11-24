#include <iostream>
#include <thread>
#include <string>
#include <vector>


void print(int n){


    std::cout << "message is " << n << std::endl;

}


int main() {
    // std::string s = "test";
    int i = 26;
    std::thread t(&print, i); // t start running
    t.join();
    return 0;

}