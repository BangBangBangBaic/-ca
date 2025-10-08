template<typename T>
struct node{
	T data;
	node* next;
	node(const T&val):data(val),next(nullptr){}
};
template<typename T>
class LineStack{
	private:
		node<T> *topNode;
	public:
		void push_back(const T&val){
			node<T>* new_node=new node<T>(val);
			new_node->next=topNode;
			topNode=new_node;
		}
		T pop(){
			node<T>* current=new node<T>;
			T val=topNode->data;
			current=topNode;
			topNode=topNode->next;
			delete current;
			return val;
			
		}	
};
