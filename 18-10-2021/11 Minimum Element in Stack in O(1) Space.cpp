class MinStack {
public:
    stack<long long >s;
 long long min_elem;

    MinStack() {

    }

    void push(int v) {
        long long val=v;
     if(s.empty())
     {
         s.push(val);
         min_elem= val;
     }

     else
     {
          if(val>=min_elem)
         {
            s.push(val);
         }
         else if(val<min_elem)
         {

            s.push(2*val-min_elem);
            min_elem=val;
         }
     }




    }

    void pop() {
        if(s.empty())
        {
           return;
        }

        else if(s.top()<min_elem)
        {
            min_elem= 2*min_elem-s.top();

        }
          s.pop();
    }

    int top() {
        if(s.empty())
        {return -1;}

        if(s.top()<min_elem)
        {
            return min_elem;
        }
        return s.top();

    }

    int getMin() {
        return min_elem;
    }
};

