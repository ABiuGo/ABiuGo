/**
 * @file 2013.检测正方形.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给你一个在 X-Y 平面上的点构成的数据流。设计一个满足下述要求的算法：
 * 添加 一个在数据流中的新点到某个数据结构中。可以添加 重复 的点，并会视作不同的点进行处理。
 * 给你一个查询点，请你从数据结构中选出三个点，使这三个点和查询点一同构成一个 面积为正 的 轴对齐正方形 ，统计 满足该要求的方案数目。
 * 轴对齐正方形 是一个正方形，除四条边长度相同外，还满足每条边都与 x-轴 或 y-轴 平行或垂直。
 * 实现 DetectSquares 类：
 * DetectSquares() 使用空数据结构初始化对象
 * void add(int[] point) 向数据结构添加一个新的点 point = [x, y]
 * int count(int[] point) 统计按上述方式与点 point = [x, y] 共同构造 轴对齐正方形 的方案数。
 * @version 0.1
 * @date 2022-01-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */



class DetectSquares {
public:
    unordered_map<int,set<int>>xline;
    map<pair<int,int>,int>cnt;
    DetectSquares() {
        
    }
    
    void add(vector<int> point) {
        int x = point[0];
        int y = point[1];
        set<int>& _x = xline[x];
        _x.insert(y);
        cnt[{x,y}]++;
    }
    
    int count(vector<int> point) {
        int ans = 0;
        int x = point[0];
        int y = point[1];
        set<int>&_x = xline[x];
       
        for(int n_y:_x){
            int d = abs(n_y - y);
            if(d == 0) continue;
            ans += cnt[{x,n_y}]*cnt[{x-d,y}]*cnt[{x-d,n_y}];
            ans += cnt[{x,n_y}]*cnt[{x+d,y}]*cnt[{x+d,n_y}];                            
        }
        return ans;
    }
};


/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */