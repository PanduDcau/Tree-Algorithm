#include <bits/stdc++.h>

using namespace std;

struct Stack{
	queue<int> q1,q2;

	void push(int x){
		if(q1.empty()){
			q2.push(x);    //EnQueue operation using STL
		}
		else{
			q1.push(x);    //EnQueue operation using STL
		}
	}

	int pop(){
	int count,size,item;
	if(q2.empty()){
		size=q1.size();            //size=no of elements;
		count=0;
		while(count<size-1){         //transfering n-1 elements
			q2.push(q1.front());     // DeQueue operation using STL
			q1.pop();
			count++;
		}
		item=q1.front();
		q1.pop();
		return item;                 //popping out the element
	}
	else{
		size=q2.size();
		count=0;
		while(count<size-1){
			q1.push(q2.front());
			q2.pop();
			count++;
		}
		item=q2.front();
		q2.pop();
		return item;
		}
	}
};

int main()
{
	cout<<"implementing stack with two queues"<<endl;

	cout<<"enter any integer to push and 0 to stop pushing"<<endl;

	Stack s;
	int x,count=0;
	
	cin>>x;
	
	while(x){
		s.push(x);
		cin>>x;
		count++;
	}
	
	cout<<"now popping......."<<endl;

	while(count){
		cout<<s.pop()<<endl;
		count--;
	}
	
	cout<<"executed successfully!!!"<<endl;

	return 0;
}

