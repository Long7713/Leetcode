#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
class solatnguoc {
public:
    // Hàm kiểm tra số đối xứng (palindrome)
    bool laSoDoiXung(int n) {
        int soGoc = n;
        int soLatNguoc = 0;
        while (n > 0) {
            int chuSo = n % 10;
            soLatNguoc = soLatNguoc * 10 + chuSo;
            n /= 10;
        }
        return soGoc == soLatNguoc;
    }
};

