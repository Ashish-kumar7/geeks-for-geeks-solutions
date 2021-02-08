class test: public student 
{
    // Add set_marks() method here.
    public:
    float sum=0;
    
    void set_marks(float temp[]){
        for(int i=0;i<5;i++){
            sum+=temp[i];
        }
    }
    float avg=sum/5;
};

class result: public test
{
    // Add display() method here.
    public:
    void display(){
        cout<<roll_number<<" ";
        cout<<sum<<" ";
        cout<<sum/5<<" ";
        cout<<endl;
    }
};