#include <iostream>
#include <stdlib.h>
#include <sambel.h>
#include <unistd.h>
#include <limits.h>
#include <math.h>
#include <chrono>
#include "complex.h"
#include "omp.h"
// #include "fftw3.h"

void testingOpenMP()
{
    const int N = 10;
    int sum = 0;

#pragma omp parallel for reduction(+ : sum)
    for (int i = 0; i < N; ++i)
    {
        sum += i;
    }

    std::cout << "Sum: " << sum << std::endl;
}

void loopBiasa()
{
    std::cout << "\n"
              << std::endl;
    for (int i = 0; i < 10; i++)
    {
        printf("%i\n", i);
    }
}

void test()
{
    char path[PATH_MAX];
    ssize_t length = readlink("/proc/self/exe", path, sizeof(path) - 1);

    if (length != -1)
    {
        path[length] = '\0';
        std::cout << "Executable path: " << path << std::endl;
    }
    else
    {
        std::cerr << "Failed to retrieve executable path" << std::endl;
        // Handle error
    }
}

void test2()
{
    std::string helper = "C:\\path\\to\\file.txt";

    size_t pos = helper.find_last_of("\\");
    if (pos != std::string::npos)
    {
        std::string directory = helper.substr(0, pos + 1);
        std::cout << "Directory: " << directory << std::endl;
    }
    else
    {
        std::cout << "Backslash not found in the string" << std::endl;
    }
}

int main()
{
    std::system("cat ../LICENSE");

    auto sambelbawang = Sambel();
    sambelbawang.createSambel(10, true);
    sambelbawang.sajikanSambel(sambelbawang.getSambel());
    test();
    test2();
    loopBiasa();
    testingOpenMP();

    return 0;
}