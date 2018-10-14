#include<iostream>
using namespace std;
class LinkList{
    struct Node{
        int data;
        Node * next;
    };

    Node * head;
    Node * tail;
    public:
        LinkList(){
            head = NULL;
            tail = NULL;
        }
        bool checkNode(){
            return head == NULL;
        }

        void AddFront(int nilai){ // for Adding data from front
            Node * help = new Node();
            help->data = nilai;
            help->next = NULL;
            if(checkNode()){
                head = help;
            }
            else{
                help->next = head;
                head = help;
            }
        }

        void DelFront(){ // for deleting in front of data
            Node * help = new Node();
            help = head;
            if(!checkNode()){
                help = help->next;
                head = help;
            }
        }

        void AddRear(int nilai){ // for Adding data from rear
            Node * help = new Node();
            help->data = nilai;
            help->next = NULL;
            if(checkNode()){
                head = help;
            }
            else{
                Node * tmp = new Node();
                tmp = head;
                while(tmp->next != NULL){
                    tmp = tmp->next;
                }
                tmp->next = help;
                // help->next = help;
            }
        }

        void DelRear(){ // Deleting From rear of data
            Node * help = new Node();
            int b;
            Node * SizeLL = new Node();
            int size = 0;
            SizeLL = head;
            while(SizeLL->next != NULL){
                SizeLL = SizeLL->next;
                size++;
            }
            help = head;
            int i = 0;
            while(i < size - 1){
                help = help->next;
                i++;
            }
            help->next = NULL;
        }

        void AddSpecificPosition(int nilai, int p){ // from adding data to specific position
            Node * help = new Node();
            help->data = nilai;
            help->next = NULL;
            if(checkNode()){
                head = help;
            }
            else{
                Node * tmp = new Node();
                tmp = head;
                int i = 1;
                while(i < p - 1 && tmp->next != NULL){
                    tmp = tmp->next;
                    i++;
                }
                tail = tmp->next;
                help->next = tail;
                tmp->next = help;

            }
        }

        void showNode(){
            Node * dis = new Node();
            dis = head;
            while(dis != 0x0){
                cout << dis->data << " ";
                dis = dis->next;
            }
            cout << endl;
        }
};