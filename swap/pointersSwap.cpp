//
//  pointersSwap.cpp
//  swap
//
//  Created by Andrea d Cazares on 10/8/24.
//
#include <iostream>
#include "pointersSwap.hpp"

void pointerSwap(int n, int v){
    int* ptr1 = &n;
    int* ptr2 = &v;
    std::cout << " n is: " << *ptr1 <<"    "<< "v is:" << *ptr2<<std::endl;
    
    ptr2 = &n;
    std::cout << "pointer v is now: "<< *ptr1<< std::endl;
    
    ptr1 = &v;
    std::cout << "pointer n is now: "<< *ptr1<<std::endl;
    
    /*ptr2 = &n;
    std::cout<< "pointer v is now"<< *ptr1<< std::endl;
    return 0;*/
}
