#include<iostream>
using namespace std;

class Node
{
    public:
	    int data;
	    Node *next;
	    Node(int data)
	    {
		    this->data = data;
		    this->next = NULL;
	    }
};


class singalyLinkedList{
    public:
        Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int findNode(Node *head, int n)
{
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        if(temp->data==n)
        {
    		return count;        
        }
        temp=temp->next;
        count++;
    }
    return -1;
}


Node* appendLastNToFirst(Node* head, int n) {
    if (head == NULL || head->next == NULL || n == 0) return head;

    // Step 1: Find length
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }

    if (n >= len) return head;

    // Step 2: Find (len - n)th node
    int count = len - n;
    Node* cur = head;
    for (int i = 1; i < count; i++) {
        cur = cur->next;
    }

    // Step 3: Rewire pointers
    Node* newHead = cur->next;
    cur->next = NULL;

    temp = newHead;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head;

    return newHead;
}



Node *removeDuplicates(Node* head)
{
    if(head==NULL || head->next == NULL)
    {
        return head;
    }

    Node* t1 = head;
    Node* t2 = head -> next;

    while(t2!=NULL)
    {
        if(t1->data==t2->data)
        {
            Node* temp = t2->next;
            delete t2;
            t2 = temp
        }
        else{
            t1->next = t2;
            t1 = t2;
            t2 = t2->next;
        }
    }
    if(t1!=NULL)
	t1->next=t2;
	return head;
}

void printReverse(Node* head)
{
    if(head==NULL){
        return;
    }
    printReverse(head->next);
    cout<<head->data<<" ";
}

Node *reverseLinkedList(Node* head)
{
    if(head == NULL || head->next==NULL)
    {
        return head;
    }
    Node* smallReverse = reverseLinkedList(head->next);
    Node* temp = smallReverse;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
    head->next = NULL;
    return smallReverse;
}
int findNodeRec(Node *head, int n)
{
    if(head==NULL)
    {
        return -1;
    }
    if(head->data == n)
    {
        return 0;
    }
    int smallAns = findNodeRec(head->next; n);
    if(smallAns!=-1)
    {
        return smallAns + 1;
    }
    else
    {
        return smallAns;
    }
}

Node *evenAfterOdd(Node *head)
{
    if(head==NULL)
    {
        return head;
    }
    Node* temp = head;
    Node* even = NULL;
    Node* odd = NULL;
    Node* evenHead = NULL;
    Node* oddHead = NULL;

    while(temp!=NULL)
    {
        if(temp->data %2 != 0)
        {
            if(odd == NULL)
            {
                oddHead = temp;
                odd = temp;
            }
            else{
                odd->next = temp;
                odd = temp;
            }
        }
        else{
            if(even==NULL)
            {
                evenHead = temp;
                even = temp;
            }
            else{
                even->next = temp;
                even = temp;
            }
        }
        temp = temp->next;
    }
    even->next = NULL;
    odd->next = evenHead;
    return oddHead;
}

}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		head = removeDuplicates(head);
		print(head);
	}
	return 0;
}