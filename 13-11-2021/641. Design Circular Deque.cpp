
class MyCircularDeque {
    int f=-1;
    int r=-1;
    vector<int>v;
     int N;
public:

    MyCircularDeque(int k) {
        v.resize(k);
        f=-1;
        r=-1;
        N=k;
    }

    bool insertFront(int value) {
        if((f==0 && r==N-1) || (f==r+1) )
        {
            return false;
        }
       else if(f==-1 && r==-1)
        {
            f=0;
            r=0;
            v[f]=value;
            return true;
        }
       else if(f==0)
        {
            f=N-1;
            v[f]=value;
            return true;
        }
        else
        {
               f--;
            v[f]=value;
             return true;
        }



    }

    bool insertLast(int value) {
        if((f==0 && r==N-1) || (f==r+1) )
        {
            return false;
        }
        if(f==-1 && r==-1)
        {
            f=0;
            r=0;
            v[r]=value;
            return true;
        }
        if(r==N-1)
        {
            r=0;
            v[r]=value;
            return true;
        }
        else
        {
             r++;
             v[r]=value;
            return true;
        }


    }

    bool deleteFront() {
        if(f==-1 && r==-1)
        {
            return false;
        }
        if(f==r)
        {
            f=-1;
            r=-1;
            return true;
        }
        if(f==N-1)
        {
            f=0;
            return true;
        }
        else
        {
            f++;
            return true;
        }
    }

    bool deleteLast() {
        if(f==-1 && r==-1)
        {
            return false;
        }
        if(r==f)
        {
            f=-1;
            r=-1;
            return true;
        }
        if(r==0)
        {
            r=N-1;
            return true;
        }
        else
        {
            r--;
            return true;
        }
    }

    int getFront() {
        if(f==-1 && r==-1)
        {
            return -1;
        }
        return v[f];
    }

    int getRear() {

        if(f==-1 && r==-1)
        {
            return -1;
        }
        return v[r];
    }

    bool isEmpty() {
        if(f==-1 && r==-1)
        {
            return true;
        }
        return false;
    }

    bool isFull() {
        if((f==0 && r==N-1) || (f==r+1) )
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
