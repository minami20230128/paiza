#include <iostream>

int main()
{
    int m, p, q;
    std::cin >> m;
    std::cin >> p;
    std::cin >> q;

    auto percent_p = (float) p / 100;
    auto percent_q = (float) q / 100;

    auto consumed = m * percent_p + m * (1 - percent_p) * percent_q;
    std::cout << m - consumed << std::endl;

    return 0;
}