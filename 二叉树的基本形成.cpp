template<typename T>
struct TreeNode{
	T data;
	TreeNode* left;
	TreeNode* right;
	TreeNode(const T&val):data(val),left(nullptr),right(nullptr)
	{}	
};

template<typename T>
class BinaryTree{
	private:
		TreeNode<T>*root;
	public:
		TreeNode<T>* insert(TreeNode<T>*node, T&val){
			if(node==nullptr){
				return new TreeNode<T>(val);
			}
			if(val<node->date){
				node->left=insert(node->left,val);
			}
			if(val>node->right){
				node->right=insert(node->right,val);			
			}
			return node;						
		}
		
		void inorderRec(TreeNode<T>* node){
			if(node==nullptr)return;
			lnorderRec( node->left);
			std::cout<<node->data<<" ";
			inorderRec(node->right);
		}
		TreeNode<T>* find(TreeNode<T>* node, T&val){
			if(node->data==val)return node;
			if(node->data>val)return  find(node->right,val);
			if(node->data<val)return finde(node->left,val);
		}
};
