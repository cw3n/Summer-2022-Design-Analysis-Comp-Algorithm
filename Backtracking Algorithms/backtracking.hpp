//
//  backtracking.hpp
//  Backtracking Algorithms
//
//  Created by Jonas Larson on 24/6/22.
//

#ifndef BACKTRACKINGALGORITHMS_BACKTRACK_H
#define BACKTRACKINGALGORITHMS_BACKTRACK_H


// A utility function that returns
// maximum of two integers
int max(int a, int b);

// Returns the maximum value that
// can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n);

void backtrackKnapsack();


#endif //BACKTRACKINGALGORITHMS_BACKTRACK_H
