//理解链式存储线性表，物理顺序和逻辑顺序可能不同，并且各物理单元不连续。
#include<bits/stdc++.h>
using namespace std;
struct node{
    int date;
    struct node*next;
};
int main(){
    struct node *head=NULL,*p=NULL;
    head=new node;
    p=head;
    for(int i=1;i<=6;i++){
        p->next=new node;
        p->next->date=i;
        p=p->next;
    }
    p->next=NULL; // 结束链表
    p=head->next; // 跳过头结点
    while(p!=NULL){
        cout<<p->date;
        p=p->next;
    }
    while(head!=NULL){ // 释放链表
        p=head;
        head=head->next;
        delete p;
    }
    return 0;
}