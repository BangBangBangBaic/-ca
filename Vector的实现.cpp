template<typename T>
class Vector{
	public:
	int size;
	int capcity;
	T* date;
	private:
		Vector():date(nullptr),size(0),capcity(0){}
		
		void push_back(const T&value){
			if(size>=capcity){
				int new_capcity=(capcity==0)?1:capcity*2;
				T *new_date= new T[new_capcity];
				for(int i=0;i<size;++i){
					new_date[i]=date[i];
				}
				delete[] date;
				date=new_date;
				capcity=new_capcity;
			}
			date[++size]=value;
			
		}
		T& operator[](int index){
			return date[index];
		}
		void pop_back(){
			date[size]=0;
			size--;
		}
};
