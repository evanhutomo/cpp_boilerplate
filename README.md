## C++ tiny boilerplate

## Structure

```
./cpp_boilerplate
├── app
│   └── main.cpp
├── CMakeLists.txt
├── inc
│   └── sambel.h
├── LICENSE
├── README.md
└── src
    └── sambel.cpp
```

## How to build (cmake)

```
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build
cd build && ./sambel
```