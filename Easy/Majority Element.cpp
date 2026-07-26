// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times.
// You may assume that the majority element always exists in the array.
// Cho 1 dãy số có kích thước n,trả lại phần tử có số lần xuất hiện nhiều nhất
// phần từ có số lần xuất hiện nhiều nhất có thể xuất hiện hơn n/2 lần
// bạn có thể cho rằng phần tử nhiều nhất luôn xuất hiện trong dãy
#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &res)
{
    int bestvalue = res[0];
    int bestfre = 0;
    for (auto x : res)
    {
        if (bestfre == 0)
        {
            bestvalue = x;
            bestfre = 1;
        }
        else if (bestvalue == x)
        {
            bestfre++;
        }
        else
            bestfre--;
    }
    return bestvalue;
}
// Ý niệm thuật toán,dùng cách tính thẳng vào số lần xuất hiện
// khởi tạo phần tử so sánh đầu bằng phần tử đầu tiên của mảng
// ta mặc định để gán giá trị đầu tiên của mảng vào bestvalue bằng cách cho bestfre(tức là số lần xuất hiện=0)
// Sau đó dùng điều kiện để đánh dấu nó đã xuất hiện lần đầu
// lần thứ 2 kiểm tra nếu ta thấy giá trị vừa rồi bằng với giá trị hiện tại đang xét thì tăng số lần xuất hiện lên
// cho tới khi có 1 phần tử khác lúc đó ta kiểm tra phần tử lúc vừa rồi có bằng phần tử hiện tại hay không
// nếu không ta giảm số lần xuất hiện của phần tử vừa rồi xuống nếu nó được giảm xuống bằng 0;
// Tức tồn tại 1 giá trị nào đó có số lần xuất hiện >= phần tử đang xét
// sau đó ta gán giá trị có số lần xuất hiện cho phần tử làm cho bestfre =0;
// Ví dụ
//[2,2,1,1,1,2,2,2,]
// lần đầu ta gán được bestvalue=2;bestfre=1;
// lặp thứ 2 ta tăng bestfre lên =2;
// lần 3 ta có giá trị 1 khác với 2,ta giảm xuống còn bằng 1, bestfre=1;
// lần 4 ta có giá trị bằng 1 khác với bestvalue( là 2), giảm bestfre tiếp còn =0;
// lần 5 ta có bestfre=0,ta lặp lại việc gán giá trị bestvalue=1,bestfre=1,cho đến hết mảng