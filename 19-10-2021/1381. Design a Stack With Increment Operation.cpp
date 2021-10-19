class CustomStack {
public:
    vector<int>v;
    int max;
    CustomStack(int maxSize) {
        max=maxSize;
    }

    void push(int x) {
        if(v.size()<max)
       v.push_back(x);



    }

    int pop() {
        if(v.empty())
        {return -1;}
        int res=  v.back();
        v.pop_back();
        return res;
    }

    void increment(int k, int val) {
        for(int i=0;i<v.size(); i++)
        {
            if(k==0)
            {
                return;
            }
            v[i]+=val;
            k--;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
