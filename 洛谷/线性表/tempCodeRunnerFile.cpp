queue<int> temp1;
        for(int i = 0; i < q1.size(); i++){
            cout<<q1.front()<<" ";
            temp1.push(q1.front());
            q1.pop();
        }
        cout<<endl;
        q1 = temp1;