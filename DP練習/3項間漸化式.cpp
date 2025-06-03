#include <iostream>
#include <vector>

class ReccurenceFormula
{
private:
    int first_term;
    int second_term;
    
public:
    ReccurenceFormula(int first_term, int second_term)
    {
        this->first_term = first_term;
        this->second_term = second_term;
    }

    int get_nth_num(int num)
    {
        std::vector<int> nums;
        nums.push_back(this->first_term);
        nums.push_back(this->second_term);
        for(int i = 2; i < num; i++)
        {
            nums.push_back(nums[i - 1] + nums[i - 2]);
        }
        
        return nums.back();
    }
};

int main(){
    int first_term = 1;
    int second_term = 1;
    int num;
    std::cin >> num;
    
    auto reccurence_formula = new ReccurenceFormula(first_term, second_term);
    std::cout << reccurence_formula->get_nth_num(num) << std::endl;
    delete reccurence_formula;
    
    return 0;
}