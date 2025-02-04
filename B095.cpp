#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>

#define MAX_POINT 100

class Member
{
public:
    Member(std::vector<int>& pitches)
    {
        this->pitches = pitches;
    }
    
    int calculate_score(std::vector<int>& correct_pitches)
    {
        int loss_point_sum = 0;
        for(int i = 0; i < correct_pitches.size(); i++)
        {
            int loss_point = this->calculate_loss_score(correct_pitches[i], this->pitches[i]);
            loss_point_sum = loss_point_sum + loss_point > MAX_POINT ? MAX_POINT : loss_point_sum + loss_point;
        }
        
        return MAX_POINT - loss_point_sum;
    }

private:
    std::vector<int> pitches;

    int calculate_loss_score(int correct_pitch, int self_pitch)
    {
        int diff = abs(self_pitch - correct_pitch);

        if(diff <= 5) return 0;
        else if(diff <= 10) return 1;
        else if(diff <= 20) return 2;
        else if(diff <= 30) return 3;
        else return 5;
    }
};

int main()
{
    int menber_num, song_length;
    std::cin >> menber_num >> song_length;
    std::vector<int> correct_pitches(song_length);

    for(auto&& pitch : correct_pitches)
    {
        std::cin >> pitch;
    }

    std::vector<int> scores;
    for(int i = 0; i < menber_num; i++)
    {
        std::vector<int> member_pitches(song_length);
        for(auto&& pitch : member_pitches)
        {
            std::cin >> pitch;
        }

        auto member = new Member(member_pitches);
        int score = member->calculate_score(correct_pitches);
        delete member;
        scores.push_back(score);
    }

    std::sort(scores.begin(), scores.end());

    std::cout << *(scores.end() - 1) << std::endl;

    return 0;
}

//正しい音程を入力
//メンバーごとに音程計測
//