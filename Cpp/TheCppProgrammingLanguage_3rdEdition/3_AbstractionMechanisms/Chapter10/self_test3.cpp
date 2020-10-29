/**
 * 10.2.7.1 Class member function const.
 * using const member function for the const class object.
 *  for example:
 *              class FooClass{
 *                          public:
 *                                 void foo(){};
 *                          private:
 *                                 ...
 *              };
 *              const fooClass A;
 *              a.foo();-------> will be error!
 * 
 * Ref: https://www.zhihu.com/question/27860418?sort=created
*/

class FooClass{
    public:
        FooClass(){

        }
        void foo(){
            a = 0;
        }
    private:
        int a;
};

class RootClass{
    public:
        RootClass(){}
        void foo()const
        {
            this.a = 0;
        } 
    private:
        int a;
};

int main(){
    const FooClass A;
    A.foo();

    const RootClass B;
    B.foo();

}