#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int totalTime = 0;
        int n = points.size();
        
        for (int i = 1; i < n; i++) {
            int xDiff = abs(points[i][0] - points[i - 1][0]);
            int yDiff = abs(points[i][1] - points[i - 1][1]);
            totalTime += max(xDiff, yDiff); // Add the maximum of xDiff and yDiff
        }
        
        return totalTime;
    }
};