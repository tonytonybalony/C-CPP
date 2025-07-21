#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int d;
        for (int i=0; i*2 < sizeof(word1)/sizeof(word1[0]) && i*2 < sizeof(word2)/sizeof(word2[0]);i++){
            if (i%2==0){
                merged[i]=word1[i/2];
            }
            else if (i%2){
                merged[i]=word2[i/2];
            }
            d=i;
        }
        d++;
        return merged;
    }
};

int main() {
    
    
    return 0;
}