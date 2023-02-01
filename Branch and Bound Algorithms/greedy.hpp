//
//  greedy.hpp
//  Branch and Bound Algorithms
//
//  Created by Jonas Larson on 1/7/22.
//

#ifndef BRANCH_BOUND_GREEDY_H
#define BRANCH_BOUND_GREEDY_H


bool cmp(struct Item a, struct Item b);
double greedyKnapsack(int W, struct Item arr[], int n);


#endif //BRANCH_BOUND_GREEDY_H
