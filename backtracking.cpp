//
//  backtracking.cpp
//  Backtracking Algorithms
//
//  Created by Jonas Larson on 24/6/22.
//

#include <iostream>
#include "backtracking.hpp"


// A utility function that returns
// maximum of two integers
int max(int a, int b) { return (a > b) ? a : b; }

// Returns the maximum value that
// can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{

    // Base Case
    if (n == 0 || W == 0)
        return 0;

    // If weight of the nth item is more
    // than Knapsack capacity W, then
    // this item cannot be included
    // in the optimal solution
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);

        // Return the maximum of two cases:
        // (1) nth item included
        // (2) not included
    else
        return max(
                val[n - 1]
                + knapSack(W - wt[n - 1],
                           wt, val, n - 1),
                knapSack(W, wt, val, n - 1));
}

void backtrackKnapsack()
{
    int val[] = { 100, 200, 300 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    std::cout << knapSack(W, wt, val, n);
}
