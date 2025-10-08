template<typename T>
struct ListNode{
    T data;
    ListNode* next;
    ListNode(const T& val):data(val),next(nullptr){}
};
template<typename T>
class ListArray{
    private:
    ListNode<T>* head;
    int size;
    ListArray():ListNode<T>(const T&val),size(0);
    public:
    ~ListArray(){
        while(head->next!=nullptr)
        {ListNode<T>* deleteNode=head;
        head=head->next;
        delete deleteNode;
        }
    }
    void push_fornt(const T&val){
        ListNode<T>* new_node=new ListNode(val);
        new_node->next=head;
        head=new_node;
        size++;
    }
    int Findindex(const T&val){
        ListNode<T>* current=head;
        for(int i=0;i<size-1;i++){
            if(current->data==val)return i;
            current=current->next
        }
        ostringstream s;
        s<<"the data is Null"<<"嘻嘻"; 
    }
    void insert(const T&val,int index){
        ListNode<T>* current=head;
        for(int i=0;i<index;i++){
            current=current->next;
        }
        ListNode<T>* new_node=new Listnode<T>(val);
        new_node->next=current->next;=
        current->next=new_node;
    }
    void output(ostream& out)const{
        for(Listnode<T>*current=head;
            current!=nullptr;
            current=current->next){
                cout<<current->data<<" ";
            }
    }
    ostream& operator<<(const ostream&out,ListArray x){
        x.output(out);return out;
    }
     int  lastIndex(){
        int*index=new int(0);
        for(  Listnode<T>* current=head;
            current->next!=nullptr;
            current=current->next;
            )index++;
          return index;            
    }
    T& operator[](int index){
        ListNode<T>*current=head;
        for(int i=0;i<index;i++){
            current=current->next;
        }
        return current->data;
    }
    bool operator==(ListNode<T>*&other){
        return ListNode<T>.date==other->data;
    }
    bool operator>(ListNode<T>*&other){
        return ListNode<T>.data>other->data;
    }
    bool operator<(ListNode<T>*&other){
        return ListNode<T>.data<other->data;
    }
};