## RREF
這個程式主要是處理「線性方程組」（Linear System）
- 找 CSV 檔:會在程式所在的資料夾裡找第一個 csv 檔案，讀取矩陣把 CSV 裡的數字讀進程式裡，存成二維陣列
- 高斯消去（Gaussian Elimination):把矩陣化成「簡化列階梯形式（Reduced Row Echelon Form, RREF）」：
- 找出每一列的主元素（pivot），交換列讓主元素不為零，將主元素變成 1，並把其他列消掉對應欄位的值。
- 計算 rank
- 顯示 Rank(A)、Rank(Ab)。
- 顯示方程組是否有解。
## Traveling Salesman Problem
- 讀入城市距離矩陣 (25City_forTSP.csv)。
- 生成 TSP 的整數線性規劃模型
- 決策變數 x_i_j 表示是否從城市 i 到城市 j。
- 目標函數：最小化總距離。
- 約束條件：
每個城市正好出發一次、正好到達一次。
子回路消除（MTZ 法）。
