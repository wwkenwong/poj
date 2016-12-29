作者：qscqesze
链接：https://www.zhihu.com/question/35852265/answer/64822110
来源：知乎
著作权归作者所有，转载请联系作者获得授权。

初期:
一.基本算法:
(1)枚举. (poj1753,poj2965)
(2)贪心(poj1328,poj2109,poj2586)
(3)递归和分治法.
(4)递推.
(5)构造法.(poj3295)
(6)模拟法.(poj1068,poj2632,poj1573,poj2993,poj2996)
二.图算法:
(1)图的深度优先遍历和广度优先遍历.
(2)最短路径算法(dijkstra,bellman-ford,floyd,heap+dijkstra)
(poj1860,poj3259,poj1062,poj2253,poj1125,poj2240)
(3)最小生成树算法(prim,kruskal)
(poj1789,poj2485,poj1258,poj3026)
(4)拓扑排序 (poj1094)
(5)二分图的最大匹配 (匈牙利算法) (poj3041,poj3020)
(6)最大流的增广路算法(KM算法). (poj1459,poj3436)
三.数据结构.
(1)串 (poj1035,poj3080,poj1936)
(2)排序(快排、归并排(与逆序数有关)、堆排) (poj2388,poj2299)
(3)简单并查集的应用.
(4)哈希表和二分查找等高效查找法(数的Hash,串的Hash) 
(poj3349,poj3274,POJ2151,poj1840,poj2002,poj2503)
(5)哈夫曼树(poj3253)
(6)堆
(7)trie树(静态建树、动态建树) (poj2513)
四.简单搜索
(1)深度优先搜索 (poj2488,poj3083,poj3009,poj1321,poj2251)
(2)广度优先搜索(poj3278,poj1426,poj3126,poj3087.poj3414)
(3)简单搜索技巧和剪枝(poj2531,poj1416,poj2676,1129)
五.动态规划
(1)背包问题. (poj1837,poj1276)
(2)型如下表的简单DP(可参考lrj的书 page149):
1.E[j]=opt{D+w(i,j)} (poj3267,poj1836,poj1260,poj2533)
2.E[i,j]=opt{D[i-1,j]+xi,D[i,j-1]+yj,D[i-1][j-1]+zij} (最长公共子序列) 
(poj3176,poj1080,poj1159)
3.C[i,j]=w[i,j]+opt{C[i,k-1]+C[k,j]}.(最优二分检索树问题)
六.数学
(1)组合数学:
1.加法原理和乘法原理.
2.排列组合.
3.递推关系.
(POJ3252,poj1850,poj1019,poj1942)
(2)数论.
1.素数与整除问题
2.进制位.
3.同余模运算.
(poj2635, poj3292,poj1845,poj2115)
(3)计算方法.
1.二分法求解单调函数相关知识.(poj3273,poj3258,poj1905,poj3122)
七.计算几何学.
(1)几何公式.
(2)叉积和点积的运用(如线段相交的判定,点到线段的距离等). (poj2031,poj1039)
(3)多边型的简单算法(求面积)和相关判定(点在多边型内,多边型是否相交)
(poj1408,poj1584)
(4)凸包. (poj2187,poj1113)


中级:
一.基本算法:
(1)C++的标准模版库的应用. (poj3096,poj3007)
(2)较为复杂的模拟题的训练(poj3393,poj1472,poj3371,poj1027,poj2706)
二.图算法:
(1)差分约束系统的建立和求解. (poj1201,poj2983)
(2)最小费用最大流(poj2516,poj2516,poj2195)
(3)双连通分量(poj2942)
(4)强连通分支及其缩点.(poj2186)
(5)图的割边和割点(poj3352)
(6)最小割模型、网络流规约(poj3308, )
三.数据结构.
(1)线段树. (poj2528,poj2828,poj2777,poj2886,poj2750)
(2)静态二叉检索树. (poj2482,poj2352)
(3)树状树组(poj1195,poj3321)
(4)RMQ. (poj3264,poj3368)
(5)并查集的高级应用. (poj1703,2492)
(6)KMP算法. (poj1961,poj2406)
四.搜索
(1)最优化剪枝和可行性剪枝
(2)搜索的技巧和优化 (poj3411,poj1724)
(3)记忆化搜索(poj3373,poj1691)

五.动态规划
(1)较为复杂的动态规划(如动态规划解特别的施行商问题等)
(poj1191,poj1054,poj3280,poj2029,poj2948,poj1925,poj3034)
(2)记录状态的动态规划. (POJ3254,poj2411,poj1185)
(3)树型动态规划(poj2057,poj1947,poj2486,poj3140)
六.数学
(1)组合数学:
1.容斥原理.
2.抽屉原理.
3.置换群与Polya定理(poj1286,poj2409,poj3270,poj1026).
4.递推关系和母函数.

(2)数学.
1.高斯消元法(poj2947,poj1487, poj2065,poj1166,poj1222)
2.概率问题. (poj3071,poj3440)
3.GCD、扩展的欧几里德(中国剩余定理) (poj3101)
(3)计算方法.
1.0/1分数规划. (poj2976)
2.三分法求解单峰(单谷)的极值.
3.矩阵法(poj3150,poj3422,poj3070)
4.迭代逼近(poj3301)
(4)随机化算法(poj3318,poj2454)
(5)杂题.
(poj1870,poj3296,poj3286,poj1095)
七.计算几何学.
(1)坐标离散化.
(2)扫描线算法(例如求矩形的面积和周长并,常和线段树或堆一起使用).
(poj1765,poj1177,poj1151,poj3277,poj2280,poj3004)
(3)多边形的内核(半平面交)(poj3130,poj3335)
(4)几何工具的综合应用.(poj1819,poj1066,poj2043,poj3227,poj2165,poj3429)


高级:
一.基本算法要求: 
(1)代码快速写成,精简但不失风格 
(poj2525,poj1684,poj1421,poj1048,poj2050,poj3306)
(2)保证正确性和高效性. poj3434
二.图算法:
(1)度限制最小生成树和第K最短路. (poj1639)
(2)最短路,最小生成树,二分图,最大流问题的相关理论(主要是模型建立和求解)
(poj3155, poj2112,poj1966,poj3281,poj1087,poj2289,poj3216,poj2446
(3)最优比率生成树. (poj2728)
(4)最小树形图(poj3164)
(5)次小生成树.
(6)无向图、有向图的最小环 
三.数据结构. 
(1)trie图的建立和应用. (poj2778)
(2)LCA和RMQ问题(LCA(最近公共祖先问题) 有离线算法(并查集+dfs) 和 在线算法
(RMQ+dfs)).(poj1330)
(3)双端队列和它的应用(维护一个单调的队列,常常在动态规划中起到优化状态转移的
目的). (poj2823)
(4)左偏树(可合并堆). 
(5)后缀树(非常有用的数据结构,也是赛区考题的热点).
(poj3415,poj3294)
四.搜索 
(1)较麻烦的搜索题目训练(poj1069,poj3322,poj1475,poj1924,poj2049,poj3426)
(2)广搜的状态优化:利用M进制数存储状态、转化为串用hash表判重、按位压缩存储状态、双向广搜、A*算法. (poj1768,poj1184,poj1872,poj1324,poj2046,poj1482)
(3)深搜的优化:尽量用位运算、一定要加剪枝、函数参数尽可能少、层数不易过大、可以考虑双向搜索或者是轮换搜索、IDA*算法. (poj3131,poj2870,poj2286)
五.动态规划 
(1)需要用数据结构优化的动态规划.
(poj2754,poj3378,poj3017)
(2)四边形不等式理论.
(3)较难的状态DP(poj3133)
六.数学 
(1)组合数学.
1.MoBius反演(poj2888,poj2154)
2.偏序关系理论.
(2)博奕论.
1.极大极小过程(poj3317,poj1085)
2.Nim问题.
七.计算几何学. 
(1)半平面求交(poj3384,poj2540)
(2)可视图的建立(poj2966)
(3)点集最小圆覆盖.
(4)对踵点(poj2079)
八.综合题.
(poj3109,poj1478,poj1462,poj2729,poj2048,poj3336,poj3315,poj2148,poj1263)

-----------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------
以及补充
Dp状态设计与方程总结

1.不完全状态记录
青蛙过河问题
利用区间dp
2.背包类问题
0-1背包，经典问题
无限背包，经典问题
判定性背包问题
带附属关系的背包问题
+ -1背包问题
双背包求最优值
构造三角形问题
带上下界限制的背包问题(012背包)
3.线性的动态规划问题
积木游戏问题
决斗（判定性问题）
圆的最大多边形问题
统计单词个数问题
棋盘分割
日程安排问题
最小逼近问题(求出两数之比最接近某数/两数之和等于某数等等)
方块消除游戏(某区间可以连续消去求最大效益)
资源分配问题
数字三角形问题
漂亮的打印
邮局问题与构造答案
最高积木问题
两段连续和最大
2次幂和问题
N个数的最大M段子段和
交叉最大数问题
4.判定性问题的dp(如判定整除、判定可达性等) 
模K问题的dp
特殊的模K问题，求最大(最小)模K的数
变换数问题
5.单调性优化的动态规划
1-SUM问题
2-SUM问题
序列划分问题(单调队列优化)
6.剖分问题(多边形剖分/石子合并/圆的剖分/乘积最大)
凸多边形的三角剖分问题
乘积最大问题
多边形游戏(多边形边上是操作符,顶点有权值)
石子合并(N^3/N^2/NLogN各种优化)
7.贪心的动态规划
最优装载问题
部分背包问题
乘船问题
贪心策略
双机调度问题Johnson算法
8.状态dp
牛仔射击问题(博弈类)
哈密顿路径的状态dp
两支点天平平衡问题
一个有向图的最接近二部图
9.树型dp
完美服务器问题(每个节点有3种状态)
小胖守皇宫问题
网络收费问题
树中漫游问题
树上的博弈
树的最大独立集问题
树的最大平衡值问题
构造树的最小环 

http://hi.baidu.com/goodmorning0610/blog/item/562ee61b22bb461c8718bf49.html 

1、 排序

1423, 1694, 1723, 1727, 1763, 1788, 1828, 1838, 1840, 2201, 2376, 2377, 2380, 
1318, 1877, 1928, 1971, 1974, 1990, 2001, 2002, 2092, 2379, 

1002（需要字符处理，排序用快排即可） 1007（稳定的排序） 2159（题意较难懂） 223
1 2371（简单排序） 2388（顺序统计算法） 2418（二叉排序树）

2、 搜索、回溯、遍历

1022 1111d 1118 1129 1190 1562 1564 1573 1655 2184 2225 2243 2312 2362 2378 238
6 1010,1011,1018,1020,1054,1062,1256,1321,1363,1501，1650,1659,1664,1753,2078
,2083,2303,2310,2329

简单：1128, 1166, 1176, 1231, 1256, 1270, 1321, 1543, 1606, 1664, 1731, 1742, 
1745, 1847, 1915, 1950, 2038, 2157, 2182, 2183, 2381, 2386, 2426, 
不易：1024, 1054, 1117, 1167, 1708, 1746, 1775, 1878, 1903, 1966, 2046, 2197, 
2349, 
推荐：1011, 1190, 1191, 1416, 1579, 1632, 1639, 1659, 1680, 1683, 1691, 1709, 
1714, 1753, 1771, 1826, 1855, 1856, 1890, 1924, 1935, 1948, 1979, 1980, 2170, 
2288, 2331, 2339, 2340,1979（和迷宫类似） 1980（对剪枝要求较高）

3、 历法

1008 2080 （这种题要小心）

4、 枚举

1012，1046， 1387， 1411， 2245， 2326， 2363， 2381，1054（剪枝要求较高），16
50 （小数的精度问题）

5、 数据结构的典型算法

容易：1182, 1656, 2021, 2023, 2051, 2153, 2227, 2236, 2247, 2352, 2395, 
不易：1145, 1177, 1195, 1227, 1661, 1834, 
推荐：1330, 1338, 1451, 1470, 1634, 1689, 1693, 1703, 1724, 1988, 2004, 2010, 
2119, 2274, 1125(弗洛伊德算法) ，2421（图的最小生成树）

6、 动态规划

1037 A decorative fence、

1050 To the Max、

1088 滑雪、

1125 Stockbroker Grapevine、

1141 Brackets Sequence、

1159 Palindrome、

1160 Post Office、

1163 The Triangle、

1458 Common Subsequence、

1579 Function Run Fun、

1887 Testing the CATCHER、

1953 World Cup Noise、

2386 Lake Counting

7、 贪心

1042, 1065, 1230, 1323, 1477, 1716, 1784,1328 1755（或用单纯形方法），2054，10
17， 1328，1862， 1922 ，2054， 2209， 2313， 2325， 2370。

8、 模拟

容易：1006, 1008, 1013, 1016, 1017, 1169, 1298, 1326, 1350, 1363, 1676, 1786, 
1791, 1835, 1970, 2317, 2325, 2390, 

不易：1012, 1082, 1099, 1114, 1642, 1677, 1684, 1886,1281 1928 2083 2141 2015


9、 递归

1664

10、字符串处理

1488, 1598, 1686, 1706, 1747, 1748, 1750, 1760, 1782, 1790, 1866, 1888, 1896, 
1951, 2003, 2121, 2141, 2145, 2159, 2337, 2359, 2372, 2406, 2408, 1016 1051 11
26 1318 1572 1917 1936 2039 2083 2136 2271 2317 2330，2121 2403

11、数论

1006,1014,1023,1061,1152,1183,1730,2262

12、几何有关的题目

凸包：1113, 1228, 1794, 2007, 2187,1113 wall，2187 beauty contest

容易：1319, 1654, 1673, 1675, 1836, 2074, 2137, 2318, 
不易：1685, 1687, 1696, 1873, 1901, 2172, 2333,

13、任意精度运算、数字游戏、高精度计算

1001 1023 1047 1060 1079 1131 1140 1142 1207 1220 1284 1289 1306 1316 1338 140
5 1454 1503 1504 1519 1565 1650 1969 2000 2006 2081 2247 2262 2305 2316 2389 

1001, 1220, 1405, 1503,1001（高精度乘法） 2413(高精度加法，还有二分查找)

14、概率统计

1037,1050

15、小费用最大流、最大流

2195 going home，2400 supervisor, supervisee，1087 a plug for UNIX，1149 PIGS，
1273 drainage ditches，1274 the perfect stall，1325 machine schedule，1459 pow
er network，2239 selecting courses

16、压缩存储的DP

1038 bugs integrated inc，1185 炮兵阵地，2430 lazy cow

17、最长公共子串（LCS）

1080 human gene functions，1159 palindrome，1458 common subsequence，2192 zipp
er

18、图论及组合数学

2421 Constructing Roads、

2369 Permutations、

2234 Matches Game、

2243 Knight Moves、

2249 Binomial Showdown、

2255 Tree Recovery、

2084 Game of Connections、

1906 Three powers、

1833 排列、

1850 Code、

1562 Oil Deposits、

1496 Word Index、

1306 Combinations、

1125 Stockbroker Grapevine、

1129 Channel Allocation、

1146 ID Codes、

1095 Trees Made to Order、找规律

2247 Humble Numbers、

2309 BST、

2346 Lucky tickets、

2370 Democracy in danger、

2365 Rope、

2101 Honey and Milk Land 
2028 When Can We Meet?、

2084 Game of Connections、

1915 Knight Moves、

1922 Ride to School、

1941 The Sierpinski Fractal、

1953 World Cup Noise、

1958 Strange Towers of Hanoi、

1969 Count on Canton、

1806 Manhattan 2025、

1809 Regetni、

1844 Sum、

1870 Bee Breeding、

1702 Eva\'s Balance、

1728 A flea on a chessboard、

1604 Just the Facts、

1642 Stacking Cubes、

1656 Counting Black、

1657 Distance on Chessboard、

1662 CoIns、

1663 Number Steps、

1313 Booklet Printing、

1316 Self Numbers、

1320 Street Numbers、

1323 Game Prediction、

1338 Ugly Numbers、

1244 Slots of Fun、

1250 Tanning Salon、

1102 LC-Display、

1147 Binary codes、

1013 Counterfeit Dollar、

19、博弈类

1067 取石子游戏、

1740 A New Stone Game、

2234 Matches Game、

1082 Calendar Game 、

2348 Euclid\'s Game、

2413 How many Fibs?、

2419 Forest

20、简单、模拟题
1001 Exponentiation 、

1002 487-3279、

1003 Hangover 、

1701 Dissatisfying Lift、

2301 Beat the Spread!、

2304 Combination Lock、

2328 Guessing Game、

2403 Hay Points 、

2406 Power Strings、

2339 Rock, Scissors, Paper、

2350 Above Average、

2218 Does This Make Me Look Fat?、

2260 Error Correction、

2262 Goldbach\'s Conjecture、

2272 Bullseye、

2136 Vertical Histogram、

2174 Decoding Task、

2183 Bovine Math Geniuses、

2000 Gold Coins、

2014 Flow Layout、

2051 Argus、

2081 Calendar、

1918 Ranking List、

1922 Ride to School、

1970 The Game、

1972 Dice Stacking、

1974 The Happy Worm、

1978 Hanafuda Shuffle、

1979 Red and Black、

1617 Crypto Columns、

1666 Candy Sharing Game、

1674 Sorting by Swapping、

1503 Integer Inquiry、

1504 Adding Reversed Numbers、

1528 Perfection、

1546 Basically Speaking、

1547 Clay Bully、

1573 Robot Motion、

1575 Easier Done Than Said?、

1581 A Contesting Decision、

1590 Palindromes、

1454 Factorial Frequencies、

1363 Rails、

1218 THE DRUNK JAILER、

1281 MANAGER、

1132 Border、

1028 Web Navigation、

21、初等数学

1003 Hangover、

1045 Bode Plot、

1254 Hansel and Grethel、

1269 Intersecting Lines、

1401 Factorial、

1410 Intersection、

2363 Blocks 、

2365 Rope、

2242 The Circumference of the Circle、

2291 Rotten Ropes、

2295 A DP Problem、

2126 Factoring a Polynomial、

2191 Mersenne Composite Numbers、

2196 Specialized Four-Digit Numbers、

1914 Cramer\'s Rule、

1835 宇航员、

1799 Yeehaa!、

1607 Deck、

1244 Slots of Fun、

1269 Intersecting Lines、

1299 Polar Explorer、

1183 反正切函数的应用、

22、匹配

1274, 1422, 1469, 1719, 2060, 2239,

------------------------------------------------------------------------------
-------------

经典
1011（搜索好题） 
1012（学会打表）
1013
1019（它体现了很多此类问题的特点）
1050（绝对经典的dp）
1088（dp好题）
1157（花店，经典的dp）
1163（怎么经典的dp那么多呀？？？）
1328（贪心）
1458（最长公共子序列）
1647（很好的真题，考临场分析准确和下手迅速）
1654（学会多边形面积的三角形求法）
1655（一类无根树的dp问题）
1804（逆序对）
2084（经典组合数学问题）
2187（用凸包求最远点对，求出凸包后应该有O(N)的求法，可我就是调不出来）
2195（二分图的最佳匹配）
2242（计算几何经典）
2295（等式处理）
2353（dp，但要记录最佳路径）
2354（立体解析几何）
2362（搜索好题）
2410（读懂题是关键）
2411（经典dp）

趣味
1067（很难的数学，但仔细研究，是一片广阔的领域）
1147（有O(n)的算法，需要思考）
1240（直到一棵树的先序和后序遍历，那么有几种中序遍历呢？dp）
1426（是数论吗？错，是图论！）
1648（别用计算几何，用整点这个特点绕过精度的障碍吧）
1833（找规律）
1844（貌似dp或是搜索，其实是道有趣的数学题）
1922（贪心，哈哈）
2231
2305（不需要高精度噢）
2328（要仔细噢）
2356（数论知识）
2359（约瑟夫问题变种）
2392（有趣的问题）

很繁的题
1001
1008
1087（构图很烦，还有二分图的最大匹配）
1128（USACO）
1245
1329
1550（考的是读题和理解能力）
1649（dp）
2200（字符串处理+枚举）
2358（枚举和避免重复都很烦）
2361（仔细仔细再仔细）

难题
1014（数学证明比较难，但有那种想法更重要）
1037（比较难的dp）
1405（高精度算法也分有等级之分，不断改进吧）
2002（不知道有没有比O(n^2*logn)更有的算法？）
2054（极难，很强的思考能力）
2085（组合数学）
2414（dp，但要剪枝）
2415（搜索）
2423（计算几何+统计）

多解题
1002（可以用排序，也可以用统计的方法）
1338（搜索和dp都可以）
1664（搜索和dp都练一练吧）
2082（这可是我讲的题噢）
2352（桶排和二叉树都行）

Note:
1011: 很经典的剪支
1014: 难在数学上
1017: 严格的数学证明貌似不容易
1021: 有点繁,考察对图形进行各种旋转的处理
1083: 巧妙的思考角度
1150: 分奇偶讨论,lg(n)算法
1218: 三行就够了,虽然简单,但也有优劣之别
1505: 二分加贪心
1654: 做法也许很多吧,本人用有向面积做的
1674: 计算圈的个数(算是graph 吧)
1700: 数学证明不容易
1742: O(m*n)的算法
1863: 要耐心地慢慢写…^_^
1988: 并查集
2051: 堆
2078: 不难，但剪支可以做到很好
2082::O(n),你想到了吗？
2084: 卡特兰数
2182: 线段树
2195: 最小费用最大流
2234: 经典博弈算法
2236: 并查集
2299: 二分思想
2395: Kruskal 最小生成树的拓展
2406: KMP
2411: 用二进制串来表示状态



两个版本POJ题目推荐(转载)
题目均为POJ上的
http://acm.pku.edu.cn
个别题目的分类并不准确
======================================

OJ上的一些水题(可用来练手和增加自信) 
(poj3299,poj2159,poj2739
,poj1083,poj2262,poj1503,poj3006,poj2255,poj3094)
初期:
一.基本算法: 
(1)枚举. (poj1753,poj2965)
(2)贪心(poj1328,poj2109,poj2586)
(3)递归和分治法. 
(4)递推. 
(5)构造法.(poj3295) 
(6)模拟法.(poj1068,poj2632,poj1573,poj2993,poj2996)
二.图算法: 
(1)图的深度优先遍历和广度优先遍历. 
(2)最短路径算法(dijkstra,bellman-ford,floyd,heap+dijkstra) 
(poj1860,poj3259,poj1062,poj2253,poj1125,poj2240)
(3)最小生成树算法(prim,kruskal)
(poj1789,poj2485,poj1258,poj3026)
(4)拓扑排序 (poj1094)
(5)二分图的最大匹配 (匈牙利算法) (poj3041,poj3020)
(6)最大流的增广路算法(KM算法). (poj1459,poj3436)
三.数据结构. 
(1)串 (poj1035,poj3080,poj1936) 
(2)排序(快排、归并排(与逆序数有关)、堆排) (poj2388,poj2299)
(3)简单并查集的应用. 
(4)哈希表和二分查找等高效查找法(数的Hash,串的Hash) 
(poj3349,poj3274,POJ2151,poj1840,poj2002,poj2503)
(5)哈夫曼树(poj3253)
(6)堆 
(7)trie树(静态建树、动态建树) (poj2513) 
四.简单搜索 
(1)深度优先搜索 (poj2488,poj3083,poj3009,poj1321,poj2251)
(2)广度优先搜索(poj3278,poj1426,poj3126,poj3087.poj3414)
(3)简单搜索技巧和剪枝(poj2531,poj1416,poj2676,1129)
五.动态规划 
(1)背包问题. (poj1837,poj1276) 
(2)型如下表的简单DP(可参考lrj的书 page149): 
1.E[j]=opt{D[i]+w(i,j)} (poj3267,poj1836,poj1260,poj2533)
2.E[i,j]=opt{D[i-1,j]+xi,D[i,j-1]+yj,D[i-1][j-1]+zij} (最长公共子序列) 
(poj3176,poj1080,poj1159) 
3.C[i,j]=w[i,j]+opt{C[i,k-1]+C[k,j]}.(最优二分检索树问题) 
-- 作者：蕉下客
-- 发布时间：2008/8/20 12:07:43
-- 
六.数学 
(1)组合数学: 
1.加法原理和乘法原理. 
2.排列组合. 
3.递推关系. 
(POJ3252,poj1850,poj1019,poj1942)
(2)数论. 
1.素数与整除问题 
2.进制位. 
3.同余模运算.
(poj2635, poj3292,poj1845,poj2115)
(3)计算方法. ,poj3429) 
-- 作者：蕉下客
-- 发布时间：2008/8/20 12:08:05
-- 
高级:
一.基本算法要求: 
(1)代码快速写成,精简但不失风格 
(poj2525,poj1684,poj1421,poj1048,poj2050,poj3306)
(2)保证正确性和高效性. poj3434
二.图算法: 
(1)度限制最小生成树和第K最短路. (poj1639)
(2)最短路,最小生成树,二分图,最大流问题的相关理论(主要是模型建立和求解) 
(poj3155, poj2112,poj1966,poj3281,poj1087,poj2289,poj3216,poj2446
(3)最优比率生成树. (poj2728)
(4)最小树形图(poj3164)
(5)次小生成树. 
(6)无向图、有向图的最小环 
三.数据结构. 
(1)trie图的建立和应用. (poj2778) 
(2)LCA和RMQ问题(LCA(最近公共祖先问题) 有离线算法(并查集+dfs) 和 在线算法 
(RMQ+dfs)).(poj1330)
(3)双端队列和它的应用(维护一个单调的队列,常常在动态规划中起到优化状态转移的
目的). (poj2823)
(4)左偏树(可合并堆). 
(5)后缀树(非常有用的数据结构,也是赛区考题的热点). 
(poj3415,poj3294)
四.搜索 
(1)较麻烦的搜索题目训练(poj1069,poj3322,poj1475,poj1924,poj2049,poj3426)
(2)广搜的状态优化:利用M进制数存储状态、转化为串用hash表判重、按位压缩存储状态、双向广搜、A*算法. (poj1768,poj1184,poj1872,poj1324,poj2046,poj1482) 
(3)深搜的优化:尽量用位运算、一定要加剪枝、函数参数尽可能少、层数不易过大、可以考虑双向搜索或者是轮换搜索、IDA*算法. (poj3131,poj2870,poj2286)
五.动态规划 
(1)需要用数据结构优化的动态规划.
(poj2754,poj3378,poj3017)
(2)四边形不等式理论. 
(3)较难的状态DP(poj3133) 
六.数学 
(1)组合数学. 
1.MoBius反演(poj2888,poj2154)
2.偏序关系理论. 
(2)博奕论. 
1.极大极小过程(poj3317,poj1085)
2.Nim问题. 
七.计算几何学. 
(1)半平面求交(poj3384,poj2540)
(2)可视图的建立(poj2966) 
(3)点集最小圆覆盖. 
(4)对踵点(poj2079)
八.综合题.
(poj3109,poj1478,poj1462,poj2729,poj2048,poj3336,poj3315,poj2148,poj1263)

-- 作者：蕉下客
-- 发布时间：2008/8/20 12:08:25
-- 
下面是另一版本POJ推荐，基本都比较难，很多题目与黑书配套
=================================
推荐一些题目，希望对参与ICPC竞赛的同学有所帮助。

POJ上一些题目在
http://162.105.81.202/course/problemSolving/ 
可以找到解题报告。
《算法艺术与信息学竞赛》的习题提示在网上可搜到

一.动态规划
参考资料：
刘汝佳《算法艺术与信息学竞赛》
《算法导论》

推荐题目：
http://acm.pku.edu.cn/JudgeOnline/problem?id=1141 
简单

http://acm.pku.edu.cn/JudgeOnline/problem?id=2288 
中等，经典TSP问题

http://acm.pku.edu.cn/JudgeOnline/problem?id=2411 
中等，状态压缩DP

http://acm.pku.edu.cn/JudgeOnline/problem?id=1112 
中等

http://acm.pku.edu.cn/JudgeOnline/problem?id=1848 
中等，树形DP。
可参考《算法艺术与信息学竞赛》动态规划一节的树状模型

http://acm.zju.edu.cn/show_problem.php?pid=1234 
中等，《算法艺术与信息学竞赛》中的习题

http://acm.pku.edu.cn/JudgeOnline/problem?id=1947 
中等，《算法艺术与信息学竞赛》中的习题

http://acm.pku.edu.cn/JudgeOnline/problem?id=1946 
中等，《算法艺术与信息学竞赛》中的习题

http://acm.pku.edu.cn/JudgeOnline/problem?id=1737 
中等，递推

http://acm.pku.edu.cn/JudgeOnline/problem?id=1821 
中等，需要减少冗余计算

http://acm.zju.edu.cn/show_problem.php?pid=2561 
中等，四边形不等式的简单应用

http://acm.pku.edu.cn/JudgeOnline/problem?id=1038 
较难，状态压缩DP，《算法艺术与信息学竞赛》中有解答

http://acm.pku.edu.cn/JudgeOnline/problem?id=1390 
较难，《算法艺术与信息学竞赛》中有解答

http://acm.pku.edu.cn/JudgeOnline/problem?id=3017 
较难，需要配合数据结构优化（我的题目^_^）

http://acm.pku.edu.cn/JudgeOnline/problem?id=1682 
较难，写起来比较麻烦


http://acm.pku.edu.cn/JudgeOnline/problem?id=2047 
较难

http://acm.pku.edu.cn/JudgeOnline/problem?id=2152 
难，树形DP

http://acm.pku.edu.cn/JudgeOnline/problem?id=3028 
难，状态压缩DP，题目很有意思

http://acm.pku.edu.cn/JudgeOnline/problem?id=3124 
难

http://acm.pku.edu.cn/JudgeOnline/problem?id=2915 
非常难


二.搜索
参考资料：
刘汝佳《算法艺术与信息学竞赛》
推荐题目：
http://acm.pku.edu.cn/JudgeOnline/problem?id=1011 
简单，深搜入门题

http://acm.pku.edu.cn/JudgeOnline/problem?id=1324 
中等，广搜

http://acm.pku.edu.cn/JudgeOnline/problem?id=2044 
中等，广搜

http://acm.pku.edu.cn/JudgeOnline/problem?id=2286 
较难，广搜

http://acm.pku.edu.cn/JudgeOnline/problem?id=1945 
难，IDA*，迭代加深搜索，需要较好的启发函数

http://acm.pku.edu.cn/JudgeOnline/problem?id=2449 
难，可重复K最短路，A*。
可参考解题报告:
http://acm.pku.edu.cn/JudgeOnline/showcontest?contest_id=1144 

http://acm.pku.edu.cn/JudgeOnline/problem?id=1190 
难，深搜剪枝，《算法艺术与信息学竞赛》中有解答

http://acm.pku.edu.cn/JudgeOnline/problem?id=1084 
难，《算法艺术与信息学竞赛》习题

http://acm.pku.edu.cn/JudgeOnline/problem?id=2989 
难，深搜

http://acm.pku.edu.cn/JudgeOnline/problem?id=1167 
较难，《算法艺术与信息学竞赛》中有解答

http://acm.pku.edu.cn/JudgeOnline/problem?id=1069 
很难

-- 作者：蕉下客
-- 发布时间：2008/8/20 12:08:48
-- 
三. 常用数据结构
参考资料：
刘汝佳《算法艺术与信息学竞赛》
《算法导论》
线段树资料：
http://home.ustc.edu.cn/~zhuhcheng/ACM/segment_tree.pdf 
树状数组资料
http://home.ustc.edu.cn/~zhuhcheng/ACM/tree.ppt 
关于线段树和树状数组更多相关内容可在网上搜到
后缀数组资料
http://home.ustc.edu.cn/~zhuhcheng/ACM/suffix_array.pdf 
http://home.ustc.edu.cn/~zhuhcheng/ACM/linear_suffix.pdf 

推荐题目

http://acm.pku.edu.cn/JudgeOnline/problem?id=2482 
较难，线段树应用，《算法艺术与信息学竞赛》中有解答

http://acm.pku.edu.cn/JudgeOnline/problem?id=1151 
简单，线段树应用矩形面积并，《算法艺术与信息学竞赛》中有解答

http://acm.pku.edu.cn/JudgeOnline/problem?id=3225 
较难，线段树应用，可参考解题报告
http://acm.pku.edu.cn/JudgeOnline/showcontest?contest_id=1233 

http://acm.pku.edu.cn/JudgeOnline/problem?id=2155 
难，二维树状数组。

http://acm.pku.edu.cn/JudgeOnline/problem?id=2777 
中等，线段树应用。

http://acm.pku.edu.cn/JudgeOnline/problem?id=2274 
难，堆的应用，《算法艺术与信息学竞赛》中有解答

http://acm.zju.edu.cn/show_problem.php?pid=2334 
中等，左偏树，二项式堆或其他可合并堆的应用。
左偏树参考http://www.nist.gov/dads/HTML/leftisttree.html 
二项式堆参见《算法导论》相关章节

http://acm.pku.edu.cn/JudgeOnline/problem?id=1182 
中等，并查集

http://acm.pku.edu.cn/JudgeOnline/problem?id=1816 
中等，字典树

http://acm.pku.edu.cn/JudgeOnline/problem?id=2778 
较难，多串匹配树
参考：http://home.ustc.edu.cn/~zhuhcheng/ACM/zzy2004.pdf 

http://acm.pku.edu.cn/JudgeOnline/problem?id=1743 
难，后缀数组

http://acm.pku.edu.cn/JudgeOnline/problem?id=2774 

较难，最长公共子串，经典问题，后缀数组

http://acm.pku.edu.cn/JudgeOnline/problem?id=2758 
很难，后缀数组
可参考解题报告
http://acm.pku.edu.cn/JudgeOnline/showcontest?contest_id=1178 

http://acm.pku.edu.cn/JudgeOnline/problem?id=2448 
很难，数据结构综合运用

四.图论基础
参考资料：
刘汝佳《算法艺术与信息学竞赛》
《算法导论》
《网络算法与复杂性理论》谢政

推荐题目: 

http://acm.pku.edu.cn/JudgeOnline/problem?id=2337 
简单，欧拉路

http://acm.pku.edu.cn/JudgeOnline/problem?id=3177 
中等，无向图割边


http://acm.pku.edu.cn/JudgeOnline/problem?id=2942 
较难，无向图双连通分支

http://acm.pku.edu.cn/JudgeOnline/problem?id=1639 
中等，最小度限制生成树，《算法艺术与信息学竞赛》中有解答

http://acm.pku.edu.cn/JudgeOnline/problem?id=2728 
中等，最小比率生成树，《算法艺术与信息学竞赛》中有解答

http://acm.pku.edu.cn/JudgeOnline/problem?id=3013 
简单，最短路问题

http://acm.pku.edu.cn/JudgeOnline/problem?id=1275 
中等，差分约束系统，Bellman-Ford求解，《算法艺术与信息学竞赛》中有解答

http://acm.pku.edu.cn/JudgeOnline/problem?id=1252 
简单，Bellman-Ford

http://acm.pku.edu.cn/JudgeOnline/problem?id=1459 
中等，网络流

http://acm.pku.edu.cn/JudgeOnline/problem?id=2391 
较难，网络流

http://acm.pku.edu.cn/JudgeOnline/problem?id=1325 
中等，二部图最大匹配

http://acm.pku.edu.cn/JudgeOnline/problem?id=2226 
较难，二部图最大匹配

http://acm.pku.edu.cn/JudgeOnline/problem?id=2195 
中等，二部图最大权匹配
KM算法参考《网络算法与复杂性理论》

http://acm.pku.edu.cn/JudgeOnline/problem?id=2516 
较难，二部图最大权匹配

http://acm.pku.edu.cn/JudgeOnline/problem?id=1986 
中等，LCA（最近公共祖先）问题
参考Tarjan\'s LCA algorithm 《算法导论》第21章习题

http://acm.pku.edu.cn/JudgeOnline/problem?id=2723 
较难，2-SAT问题
参考：http://home.ustc.edu.cn/~zhuhcheng/ACM/2-SAT.PPT 

http://acm.pku.edu.cn/JudgeOnline/problem?id=2749 
较难，2-SAT问题

http://acm.pku.edu.cn/JudgeOnline/problem?id=3164 
较难，最小树形图
参考《网络算法与复杂性理论》中朱-刘算法

五.数论及组合计数基础

http://acm.pku.edu.cn/JudgeOnline/problem?id=1811 
简单，素数判定，大数分解
参考算法导论相关章节

http://acm.pku.edu.cn/JudgeOnline/problem?id=2888 
较难，Burnside引理

http://acm.pku.edu.cn/JudgeOnline/problem?id=2891 
中等，解模方程组

http://acm.pku.edu.cn/JudgeOnline/problem?id=2154 
中等，经典问题，波利亚定理

http://cs.scu.edu.cn/soj/problem.action?id=2703 
难，极好的题目，Burnside引理+模线性方程组


http://acm.pku.edu.cn/JudgeOnline/problem?id=2764 
较难，需要数学方法，该方法在《具体数学》第七章有讲

http://acm.pku.edu.cn/JudgeOnline/problem?id=1977 
简单，矩阵快速乘法
