template<typename T>
class vectorarray{
    private:
    T *data;
    int capcity;
    int size;
    vectorarray():date(nullptr),capcity(1),size(0){}
    public:
    void push_back(const T&val){
        if(size==capcity){
            T *temp=new T[capcity*2];
            for(int i=0;i<size;i++){
                temp[i]=data[i];
            }
            delete[] data;
            data=temp;
        }
        T[size]=val;
        size++;
    }
    void pop_back(){
        size--;
    }
    void insert(const T&val,int index){
        if(index<0||index>size-1){
            ostringstream s;
            s<<"index is illegal">>endl;
            throw illegal_index_error
        }
         if(size==capcity){
            T *temp=new T[capcity*2];
            for(int i=0;i<size;i++){
                temp[i]=data[i];
            }
            delete[] data;
            data=temp;
        }
        for(int i=size-1;i>=index;i--){
            a[i+1]=a[i];
        }
        a[index]=val;
    }
    bool empty(){
        if(size==0)return ture;
        else return false;
    }
    T& opertator[](int index){
        return data[index];
    }
    void copy(vectorarray& other){
        for(int i=0;i<other.size;i++){
            data[i]=other.data[i];
        }
    }

    data begin(){
        return data;
    }
    data end(){
        return data+size;
    }
    void clear(){
        size=0;
    }   
};