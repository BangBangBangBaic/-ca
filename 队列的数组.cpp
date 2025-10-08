template<typename T>
class liqueue{
    private:
    T Front;
    T End;
    T *queue;
    T lenth;
    liqueue(const T&val=10):Front(-1),End(0),data(nullptr),Lishlenth(val){}
    public:
    void push(const T&val){
        start=(Front+1)%lenth;
        if((End+1)%Lishlenth==Front){
            T *New_que=new data[2*Lishlenth];
            if(Front<1){
                copy(queue,queue+lenth,New_que);
            }
            else{
                copy(queue+start,queue+lenth,New_que);
                copy(queue,queue+End+1,New_que+lenth-start);
            }
            delete [] queue;
            queue=New_que;
        }
        End=(End+1)%lenth;
        queue[End]=val;
    }
    void arase(){
        if(Front=0){
            throw std::runtime_error("无可删除");
        }
        Front=(Front+1)%lenth;
    }
    T& top(){
        return quenu[Front];
    }
    void out_put(ostream& out){
        for(int i=Front;i<size;i++){
            out<<queue[i%lenth]<<" ";  
        }
    }
    ostream& operator<<(ostream& out,queue x){
        out=x.out_put(out);return out;
    }
};