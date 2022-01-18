#给定一个 24 小时制（小时:分钟 "HH:MM"）的时间列表，找出列表中任意两个时间的最小时间差并以分钟数表示。

class Solution:
    def findMinDifference(self, timePoints: List[str]) -> int:
        n = len(timePoints)
        if n > 1440:
            return 0
        timePoints.sort()
        timeDiff = []
        for x in range(len(timePoints)):
            Min1,Min2 = int(timePoints[x-1][-2:]),int(timePoints[x][-2:])
            Hour1,Hour2 =int(timePoints[x-1][:2]),int(timePoints[x][:2])
            if x == 0:    #第一个跟最后一个比
                Hour2 += 24
            timeDiff.append(min(abs((Hour2-Hour1)*60 + Min2-Min1),abs((Hour1+24-Hour2)*60+Min1-Min2)))
        return min(timeDiff)
