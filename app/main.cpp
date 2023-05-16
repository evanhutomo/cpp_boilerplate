#include <iostream>
#include <stdlib.h>
#include <sambel.h>

int main() {    
    std::system("cat ../LICENSE");

    auto sambelbawang = Sambel();
    sambelbawang.createSambel(10, true);
    sambelbawang.sajikanSambel(sambelbawang.getSambel());

    return 0;
}