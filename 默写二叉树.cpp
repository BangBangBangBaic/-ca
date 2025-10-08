 template<typename T>
struct node{
	T date;
	node* left;
	node* right;
	node(const T& val):date(val),left(nullptr),right(nullptr){}
};
template<typename T>
class Brtree{
	private:
	node<T>* head;
	public:
	node<T>* insert(const node<T>*&Node,T &val){
		if(Node->next=nullptr){
			return new node<T>(val);
		}
		if(val>Node->date){
			insert(Node->right,val);
		}
		if(val<Node->date){
			insert(Node->left,val);
		}
		return Node;
	}
	void inorder(const node<T>*&Node){
		inorder(Node->left);
		std::cout<<Node->date;
		inorder(Node->right);
	}	
};
