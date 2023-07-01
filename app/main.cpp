#include <iostream>
#include <memory>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include "sambel.h"
#include "lat1.h"

int main()
{
#if 0
    std::system("cat ../LICENSE");
    auto sambelbawang = Sambel();
    sambelbawang.createSambel(10, true);
    sambelbawang.sajikanSambel(sambelbawang.getSambel());
#endif

    // lat1
    std::wstring japstr = L"穫トぞすな域応選こーがク究8生ニソサラ現手ス消団メタカ気今げへっ関航稿マ里非メヲ済欧ぽ政道ツ何産禁リぞす要調浅添さぼリ。";
    std::wstring engstr = L"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc eleifend dui sem, id sodales sapien fringilla quis.";
    auto a = std::make_unique<LATCPP::BASIC1::Latihan1>();
    a->exampleStrncpy(engstr);
    a->getWindowsPath();
    a->getExecutablePath();
    a->t_strcopy({1,2,3,4});
    return 0;
}