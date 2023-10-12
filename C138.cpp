#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

int main()
{
    int N;
    std::cin >> N;
    std::vector<int> records(N);
    for(auto&& record : records)
    {
        std::cin >> record;
    }

   for(int i = 0; i < N; i++)
    {
        int rank = 1;
        for(int j = 0; j < N; j++)
        {
            if(records[i] < records[j])
            {
                rank++;
            }
        }
        std::cout << rank << std::endl;
    }

    return 0;
}