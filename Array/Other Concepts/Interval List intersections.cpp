vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int A=0;
        int B=0;
        vector<int> temp(2);
        vector<vector<int>> ans;
        while(A<firstList.size() && B<secondList.size()) {
            if(firstList[A][0]<=secondList[B][1] && firstList[A][1]>=secondList[B][0]) {
                temp[0]=max(firstList[A][0],secondList[B][0]);
                temp[1]=min(firstList[A][1],secondList[B][1]);
                ans.push_back(temp);
            }
            if(firstList[A][1]>secondList[B][1]){
                B++;
            }
            else{
                A++;
            }
        }
        return ans;
    }



/*
In order for an interval to intersect, s1<=e2 and s2<=e1
Now, if they’re intersecting, the interval in which they are intersecting is [max(s1,s2), min(e1,e2)]

The way we will implement the solution is by having two pointers A and B for traversing through the two lists, and once we find an intersection we will push it in our output vector and then to decide whether to increment A or B we will have to check their second value, i.e. if 
A = [0,2] and B = [1,5] the intersection will be [1,2] and now since the span of B(5) is larger than the span of A(2), we will increment A since there might be further intersections possible with B.

