

class Solution {
    public:
        bool checkStraightLine(vector<vector<int>>& coordinates) {
            int x1 = coordinates[0][0], y1 = coordinates[0][1];
            int x2 = coordinates[1][0], y2 = coordinates[1][1];
    
            // Compute initial slope difference
            int dx = x2 - x1;
            int dy = y2 - y1;
    
            // Check for all other points
            for (int i = 2; i < coordinates.size(); i++) {
                int x = coordinates[i][0], y = coordinates[i][1];
    
                // Using cross multiplication to check collinearity
                if ((y - y1) * dx != (x - x1) * dy) {
                    return false;
                }
            }
            
            return true;
        }
    };
    