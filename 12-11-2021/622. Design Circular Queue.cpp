class MyCircularQueue {
    int head=-1;
    int tail=-1;
    vector<int>v;
public:
    MyCircularQueue(int k) {
        v.resize(k);
        head=-1;
        tail=-1;
    }

    bool enQueue(int value) {
       //if stack/vector is empty
       if(head==-1 && tail==-1)
       {
           head=0;
           tail=0;
           v[tail]=value;
           return 1;
       }
        //if vector is completely full
       else if((tail+1)%v.size()==head)
       {

           return false;
       }
       else
       {
            tail=(tail+1)%v.size();
           v[tail]=value;
           return true;

       }
    }

    bool deQueue() {
        if(head==-1 && tail==-1)
        {
            return false;
        }
        if(head==tail)
        {
            head=-1;
            tail=-1;
            return true;
        }
        else
        {
            head=(head+1)%v.size();
            return true;
        }
    }

    int Front() {
        if(head==-1 && tail == -1)
        {
            return -1;

        }
        return v[head];

    }

    int Rear() {

        if(head==-1 && tail == -1)
        {
            return -1;

        }
        return v[tail];
    }

    bool isEmpty() {
        if(head==-1 && tail==-1)
        {
            return true;
        }
        return false;
    }

    bool isFull() {
        if((tail+1)%v.size()==head)
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
