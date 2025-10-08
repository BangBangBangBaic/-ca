template<typename T>
class ArrayStack{
	private:
	T* data;
	int topIndex;
	int capcity;
	public:
		ArrayStack(int cap=100):capcity(cap),topIndex(-1){
			data=new T[capcity];
		}
		void push_back(const T&val){
			data[++topIndex]=val;			
		}
		void pop(){
		 return data[topIndex--];
		}		
};
