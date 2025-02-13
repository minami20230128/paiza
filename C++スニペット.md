# map
## 初期化

std::map<int, int> student_score_pairs =
{
    {1, 100},
    {2, 60}
}

## キーとバリューに名前をつけて回す
for (const auto& [threshold, penalty] : loss_table) {
            if (diff <= threshold) {
                return penalty;
            }
        }

# vector
## 最大値を取得

*std::max_element(scores.begin(), scores.end())

## ２次元配列初期化

vector<vector<int>> data(3, vector<int>(4));

## 加減処理の上限を指定
std::min()自体は、渡した数字や配列の中で最も小さい数字を取得する関数。
この使い方はそれを応用したもの。

std::min(loss_point_sum + loss_point, 100);

# 連番で初期化
第三引数は最初の数字

std::iota(v.begin(), v.end(), 0);

# 既存の配列の前半分を別の配列に持たせる
std::vector<int> half_array(original.begin(), original.begin() + half_size);