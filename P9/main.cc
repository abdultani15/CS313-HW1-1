#include <iostream>
#include <vector>
#include <random>
#include <math.h>
#include "arr.h"



int main(){
    srand(time(0));

    for(unsigned i=0; i<100; ++i){
        arr::solve_arr();
    }

    return 0;
}
