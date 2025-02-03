# map
## 初期化

std::map<int, int> student_score_pairs =
{
    {1, 100},
    {2, 60}
}

# vector
## 最大値を取得

*std::max_element(scores.begin(), scores.end())

## 加減処理の上限を指定
std::min()自体は、渡した数字や配列の中で最も小さい数字を取得する関数。
この使い方はそれを応用したもの。

std::min(loss_point_sum + loss_point, 100);