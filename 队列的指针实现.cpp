template<typename T>
struct node{
	T data;
	node* next;
	node(const T&val):data(val),next(nullptr){}
};
template<typename T>
class LineQuene{
	private:
		node<T> *topNode;
        node<T> *lastNode;
	public:
		void push(const T&val){
			node<T>* new_node=new node<T>(val);
			lastNode->next=new_node;
            lastNode=new_node;
		}
		T pop(){
			node<T>* current=new node<T>;
			T val=topNode->data;
			current=topNode;
			topNode=topNode->next;
			delete current;
			return val;		
		}
        T top(){
            return topNode->data;
        }	
};