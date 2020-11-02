/**
 * p440
 * 
 * Base - object model to container design
 * 
 * Advantage and disadvantage
 *  + The common base Container make it easy to use container that supply similar sets of operation interchangeably.
 *  + Class container and class Object are handle for implementing services for every object, it eases provision of universal services.
 *  
 *  - Operation on individual containters incur virtual func overehad.
 *  - All container must be derived from Container. This implies the usd of fat interface(扁平结构),requires a large degree of foresight. relies R-T-T-Check.
 *  - Containers are heterogeneous(多种多样的) and not tpye safe by default. BTW, When desired, Template is type-safe and homogeneous containters.
 *  - The container are intrusive.Object of build-in types and struct with externally imposed layouts cannot be placed directly in container.
 *  - An element retrieved from a container must be given a proper type using explicit type conversion before it can be used.
 * 
 * Inhert from Base Object and give it Common virtual Operator layer. 
 * 
 * Ref: https://stackoverflow.com/questions/2860234/what-is-overhead
*/


// All is virtual func ,for common use. Can override them by inhert
class Container : public Object{
    public:
        virtual Object* get(); //return this object;
        virtual void put(Object*); //insert 
        virtual void PrintIt(Object*); // Print Object;
};

class List: public Container{
    public:
        Object* get();
        void put(Object*);
        void PrintIt(Object*);
};

class Vector: public Container{
    public:
        Object* get();
        void put(Object*);
        void PrintIt(Object*);
};