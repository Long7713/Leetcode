#include <bits/stdc++.h>
using namespace std;
class Solution
{
    // Dạng bài đã cho trước rằng size của nums1 là bằng m+n
    // nums 1 đủ chổ cho nums 2 được nhét vào( nums1 to hơn nums2)
    //  Với mảng nums1 và nums2 đã được sắp xếp tăng dần
    //  m là số thực tồn tại, n cũng vậy tức ví dụ
    //[1,2,3,0,0,0] thì m=3 do chỉ có 3 số thực tồn tại
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;       // vị trí cuối cùng của mảng nums1
        while (i >= 0 && j >= 0) // khi i và j lớn hơn hoặc bằng 0 tức vẫn đang trong mảng
        {
            if (nums1[i] > nums2[j]) // xét tại vị trí hiện tại
            {
                nums1[k] = nums1[i]; // nhét nó vào nums1
                i--;
                k--;
            }
            else // tương tự với phần tử ở nums 2 lớn hơn
            {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }
        while (j >= 0)
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};