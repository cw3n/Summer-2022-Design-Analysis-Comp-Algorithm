//
//  main.cpp
//  Backtracking Algorithms
//
//  Created by Jonas Larson on 24/6/22.
//

#include <iostream>
#include <chrono>
#include "backtracking.hpp"
#include "dynamic.hpp"


int main() {
    //Backtrack
    std::cout << "Backtrack result: ";
    auto backtrack_start = std::chrono::steady_clock::now();
    backtrackKnapsack();
    auto backtrack_end = std::chrono::steady_clock::now();
    std::chrono::duration<double> backtrack_seconds = backtrack_end-backtrack_start;
    std::cout << "\nBacktrack time: " << backtrack_seconds.count() << "s\n";

    //Dynamic
    std::cout << "Dynamic result: ";
    auto dynamic_start = std::chrono::steady_clock::now();
    dynamicKnapsack();
    auto dynamic_end = std::chrono::steady_clock::now();
    std::chrono::duration<double> dynamic_seconds = dynamic_end-dynamic_start;
    std::cout << "\nDynamic time: " << dynamic_seconds.count() << "s\n";
}
