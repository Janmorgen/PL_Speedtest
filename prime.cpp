
#include <stdio.h>
#include <iostream>
#include <ostream>
#include <chrono>


int main(){
    int targetNumber=1000;
    auto start = std::chrono::high_resolution_clock::now();
    for (int i=0;i<targetNumber;i++){
        int factors=0;
        for (int x=1;x<i+1;x++){
            if (i%x==0){
                factors++;
            }
        }
        if (factors==2){
            std::cout<<i<<std::endl;
        }
    }
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    std::cout<<duration.count()<<" microseconds"<<std::endl;
    return 0;
}
