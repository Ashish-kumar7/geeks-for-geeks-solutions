template <class T>
class minElement
{
    // Complete the class.Make a private variable,constructors and method called
    // check() which takes one parameter and prints the output in new line. 
    T y;
    public:
    minElement(T x): y(x){}
    void check(T x)
    {
        T t= x>y?y:x;
        cout<<t<<endl;
    }
    
};