//
//  main.cpp
//  Partition Of A Set
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
    return 0;
}

int partition(int n, int k){
    if(!(1 <= k) || !(k <= n)) return 0;
    if(k == 1 || k == n) return 1;
    return partition(n - 1, k - 1) + k * partition(n - 1, k);
}
