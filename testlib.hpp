#pragma once

#include <iostream>
#include <vector>

template<typename...Ts>
void print(Ts&&...ts) {
    (std::cout << ... << ts) << std::endl;
}

class trace {
    // Something to actually cause a crash
    std::vector<double> _crash {1, 2, 3, 4, 5, 7};

public:
    trace() { print("trace() ", this); }
    ~trace() { print("~trace() ", this, " ", _crash.back()); }
};

struct S {
    static inline trace _tr;
};

void libfoo();