template<typename T>
struct listnode{
	T date;
	listnode* next;
	listnode(const T&val):date(val),next(nullptr){}
};

template<typename T>
class linelist{
	private:
	listnode<T>* head;
	public:
		//²åÈëº¯Êý
		void push_front(const T&val){
			listnode<T>* currct=new listnode<T>(val);
			currct.next=head;
			head=currct;
		}
		void insert(listnode<T>*&a,listnode<T>*&b,const T&val){
			listnode<T>* new_node=new listnode<T>(val);
			a->next=new_node;
			new_node->next=b;
		}
		void push_back(const T&val){
			listnode<T>* new_node=new listnode<T>(val);
			listnode<T>* p=head;
			while(p->next!=nullptr){				
				p=p->next;}
			p->next=new_node;
		}
		listnode<T>* find(const T&val){
			listnode<T>* current=head;
			while(current->next!=nullptr){
				
			if(current->date!=val)current=current->next;
			else return current;	
			}
			return nullptr;
		}
		void erase(const T&val){
			listnode<T>* current=head;
			if(current->next->date==val){
				listnode<T>* temp=current->next;
				current->next=temp->next;
				delete temp;
			}
		}
		
};
   
 
