#include<bits/stdc++.h>
using namespace std;

int queue[100], front = - 1, rear = - 1;

void Insert(int n){
	int value;
	if (rear == n - 1)
   		cout<<"overflow condition"<<endl;
   	else {
      if (front == - 1){
      	front = 0;	
      }
      cout<<"enter the element to insert in queue: \n "<<endl;
      cin>>value;
      rear++;
      queue[rear] = value;
   }
}

void Delete(int n) {
   if (front == - 1) {
      cout<<"underflow condition \n ";
      return ;
   } else {
      cout<<"element deleted is : "<< queue[front] <<endl;
      front++;
   }
}

void Display(int n) {
   if (front == - 1)
   cout<<"queue is empty"<<endl;
   else {
      cout<<"queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout << queue[i] << '' << endl;
   }
}

int main(){
	cout << "enter the no. of elements present in queue:\n";
	int n;
	cin >> n;

	cout << "enter the n elements of the queue:" << endl;
	for(int i=0 ; i<n ; i++){
		cin >> queue[i];
	}
	int choice;
	cout << "press 1 for insert element into queue:" << endl;
	cout << "press 2 for delete element into queue:" << endl;
	cout << "press 3 display all elements of a queue:" << endl;
	cin >> choice;
	switch(choice){
		case 1: Insert(n)
		break;

		case 2: Delete(n)
		break;

		case 3: Display(n)
		break;
	}
	return 0;
}