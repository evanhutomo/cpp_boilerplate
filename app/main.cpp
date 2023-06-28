#include <iostream>
#include <memory>
#include <stdlib.h>
#include <sambel.h>
#include <unistd.h>
#include <math.h>
#include "lat1.h"

int main()
{
    std::system("cat ../LICENSE");
    auto sambelbawang = Sambel();
    sambelbawang.createSambel(10, true);
    sambelbawang.sajikanSambel(sambelbawang.getSambel());
    
    // lat1
    auto a = std::make_unique<LATCPP::BASIC1::Latihan1>();
    a->getWindowsPath();
    a->getExecutablePath();
    a->t_strcopy({1,2,3,4});
    return 0;
}