#include<bits/stdc++.h>
using namespace std ;

void printIntersection(vector<int> nums1, vector<int> nums2){
    // write your code here
    int n = nums1.size(), m = nums2.size();
    int a_index = 0, b_index = 0;
    int a_element, b_element;
    int common_elements = 0;
    while (a_index < n && b_index < m)
    {
        a_element = nums1[a_index]; b_element = nums2[b_index];
        if (a_element == b_element)
        {
            cout << to_string(a_element)+" ";
            ++common_elements;
            a_index++; b_index++;
        } else if (b_element < a_element) {
            b_index++;
        } else {
            a_index++;
        }
    }
    if (common_elements == 0) cout << -1;
}
