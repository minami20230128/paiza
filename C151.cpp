#include <iostream>
#include <math.h>

int main()
{
    long N, R;
    std::cin >> N >> R;
    
    int r_digit_num = (int) (N / pow(10, R - 1)) % 10;
    if(R == 1)
    {
        r_digit_num = N % 10;
    }
    
    std::cout << r_digit_num << std::endl;
    
    long result = r_digit_num >= 5 ? ((long) (N / pow(10, R)) + 1) * pow(10, R) : (long) (N / pow(10, R)) * pow(10, R);
    
    std::cout << result << std::endl;
    
    return 0;
}

//R桁目で四捨五入
//->R桁目が4以下なら、R桁以下を0に置換
//R桁目が5以上なら、R+1桁に+1してR桁以下を0に置換