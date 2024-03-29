//
//  brute.cpp
//  Branch and Bound Algorithms
//
//  Created by Jonas Larson on 1/7/22.
//

#include "Header.h"
using namespace std;

// A utility function that returns
// maximum of two integers
int max(int a, int b) { return (a > b) ? a : b; }

// Returns the maximum value that
// can be put in a knapsack of capacity W
int bruteKnapSack(int W, int wt[], int val[], int n)
{

    // Base Case
    if (n == 0 || W == 0)
        return 0;

    // If weight of the nth item is more
    // than Knapsack capacity W, then
    // this item cannot be included
    // in the optimal solution
    if (wt[n - 1] > W)
        return bruteKnapSack(W, wt, val, n - 1);

        // Return the maximum of two cases:
        // (1) nth item included
        // (2) not included
    else
        return max(
                val[n - 1]
                + bruteKnapSack(W - wt[n - 1],
                           wt, val, n - 1),
                bruteKnapSack(W, wt, val, n - 1));
}


#include "brute.hpp"
