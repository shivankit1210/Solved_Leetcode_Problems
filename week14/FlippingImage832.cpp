// BruteForce

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        int temp;

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n; j++) {
                temp = image[i][j];
                image[i][j] = image[i][n - j - 1];
                image[i][n - j - 1] = temp;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (image[i][j] == 0) {
                    image[i][j] = 1;
                } else
                    image[i][j] = 0;
            }
        }

        return image;
    }
};

//Optimise solution using not operator

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();

        for (int i = 0; i < n; i++) {
            // Reverse and invert in a single pass
            for (int j = 0; j < (n + 1) / 2; j++) { 

                int temp = image[i][j] ^ 1;
                image[i][j] = image[i][n - j - 1] ^ 1;
                image[i][n - j - 1] = temp;
            }
        }

        return image; 
    }
};
