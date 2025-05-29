#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef struct node{
    int date;
    struct node*next;
}link;
node *nodeinit(){//链表的初始化
    node *p=new node;
    p->date=0;
    p->next=NULL;
    return p;
}
void nodecreate(node *head,int n,int a[]){//链表的创建
    if(n<=0){
        cout<<"n必须大于0"<<endl;//保护
        return;
    }
    node *p=head;
    for(int i=0;i<n;i++){
        p->next=nodeinit();
       
        p=p->next;
         p->date=a[i];
    }
}

void nodeprint(node *head){
        node *p = head;
        while(p != nullptr){
            cout << p->date;
            if(p->next != nullptr){
                cout << ",";
            }
            p = p->next;
        }
    }
void freeList(node *head){//释放链表
    node *p=head;
    while(p!=NULL){
        node *temp=p;
        p=p->next;
        delete temp;
    }
}
int main(){
    node *head;
    int n;
    vector<int> v={1, 2, 3, 4, 5}; // 示例数据
    n=v.size();
    head=nodeinit();
    nodecreate(head, n, v.data());
    nodeprint(head->next); // 打印链表内容
    freeList(head);
    return 0;
}