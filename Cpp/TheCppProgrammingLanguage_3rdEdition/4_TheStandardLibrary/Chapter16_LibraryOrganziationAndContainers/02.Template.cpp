/**
 * P436
 * Container - iterator Model
 * Strengths:
 *      + Individual container are simple and efficient.
 *      + little commonality is required of containers. Iterators and wrapper classses can be used to fit independently developed containers into a common framework.
 *      + Commonality of use is provided through iterators.
 *      + Different iterators can be defined to serve different needs for the same container.
 *      + Containters are by default type safe and homogeneous(thats mean all elements are same type).
 * 
 *      - The containers are non-intrusive.
 *      - Each iterator access incurs the overhead of a virtual func call.
 *      - A hierarchy of iterator classes tends to get complicated.
 *      - There is nothing in common for every container and nothing in common for every object in every container. if thing get complicated, it's hard to hierarchies.
 *      
 * Test using template
 * 
 * Vector          Itor
 * ------        ---------
 *    \              /
 *     \            /
 *      \          /
 *       Vector_itor
*/
//申明一个Class类
template<class T>class  Vector{
    public:
        Vector(size_t n);

};

//抽象一个interface layer 用Virtual func定义关于对Class的操作
template<class T>class Itor{
    public:
        virtual T* first() = 0;
        virtual T* next() = 0;
};

//用新建一个实现操作类 包含之前的具体类和抽象类, 进行对具体类操作的实现
template<class T>class Vector_itor: public Itor{
    Vector<T>& v;
    size_t index;
public:
    Vector_itor(Vector<T>& vv) : v(vv), index(0) {}
    T* first() {return (v.size()) ? &v[index = 0] : 0;}
    T* next() {return (++index<v.size()) ? &v[index] : 0;}
};