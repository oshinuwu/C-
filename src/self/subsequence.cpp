#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

// Function to find the longest increasing subsequence
vector<int> longestIncreasingSubsequence(vector<int>& sequence) {
    int n = sequence.size();
    
    // Initialize vectors to store lengths and predecessors
    vector<int> lengths(n, 1);
    vector<int> predecessors(n, -1);

    // Initialize index of maximum length
    int maxLengthIndex = 0;

    // Iterate over the sequence to fill lengths and predecessors vectors
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (sequence[i] > sequence[j] && lengths[i] < lengths[j] + 1) {
                lengths[i] = lengths[j] + 1;
                predecessors[i] = j;
            }
        }
        if (lengths[maxLengthIndex] < lengths[i]) {
            maxLengthIndex = i;
        }
    }

    // Reconstruct the longest increasing subsequence
    vector<int> longestSubsequence;
    for (int i = maxLengthIndex; i!= -1; i = predecessors[i]) {
        longestSubsequence.push_back(sequence[i]);
    }
    reverse(longestSubsequence.begin(), longestSubsequence.end());

    return longestSubsequence;
}

int main() {
    // Example sequence
    vector<int> sequence = {10, 22, 9, 33, 21, 50, 41, 60, 80};

    // Find the longest increasing subsequence
    vector<int> longestSubsequence = longestIncreasingSubsequence(sequence);

    // Print the longest increasing subsequence
    cout << "Longest increasing subsequence: ";
    for (int num : longestSubsequence) {
        cout << num << " ";
    }
    cout << endl;

    fflush(stdin);
    cin.get();
    return 0;
}