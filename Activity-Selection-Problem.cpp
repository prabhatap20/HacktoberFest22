#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
 
struct Pair
{
    // stores start and finish time of the activities
    int start, finish;
};
 
// Activity selection problem
void selectActivity(vector<Pair> activities)        // no-ref, no-const
{
    // `k` keeps track of the index of the last selected activity
    int k = 0;
 
    // set to store the selected activities index
    unordered_set<int> out;
 
    // select 0 as the first activity
    if (activities.size() > 0) {
        out.insert(0);
    }
 
    // sort the activities according to their finishing time
    sort(activities.begin(), activities.end(),
        [](auto const &lhs, auto const &rhs) {
            return lhs.finish < rhs.finish;
        });
 
    // start iterating from the second element of the
    // vector up to its last element
    for (int i = 1; i < activities.size(); i++)
    {
        // if the start time of the i'th activity is greater or equal
        // to the finish time of the last selected activity, it
        // can be included in the activities list
 
        if (activities[i].start >= activities[k].finish)
        {
            out.insert(i);
            k = i;            // update `i` as the last selected activity
        }
    }
 
    for (int i: out)
    {
        cout << "{" << activities[i].start << ", " << activities[i].finish
             << "}" << endl;
    }
}
 
int main()
{
    // List of pairs with each pair storing start time
    // and finish time of the activities
    vector<Pair> activities =
    {
        {1, 4}, {3, 5}, {0, 6}, {5, 7}, {3, 8}, {5, 9},
        {6, 10}, {8, 11}, {8, 12}, {2, 13}, {12, 14}
    };
 
    selectActivity(activities);
 
    return 0;
}
