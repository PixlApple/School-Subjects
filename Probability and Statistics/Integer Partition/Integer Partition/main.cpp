//
//  main.cpp
//  Integer Partition
//
//  Created by PixelApple on 2018. 3. 18..
//  Copyright © 2018년 PixelApple. All rights reserved.
//

#include <iostream>

int partition(int n, int k);

int main() {
    int n, k;
    std::cin >> n >> k;
    std::cout << partition(n, k);
}

int partition(int n, int k){
    if(k > n) return 0;
    if(n == k || k == 1) return 1;
    return partition(n - 1, k - 1) + partition(n - k, k);
}
