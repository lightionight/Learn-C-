/**
 * P441
 * STL Containers
 * 
 *  1.The Standard container are not derived from a common base. every container implement all of the standard container interface
 *    hence, there is no common iterator base class.
 *  2. container and iterator not fixed standard repersentation problem.
 *      container handle interchangeably;
 *      Iterator handle similarly;
 *  3. The STL approach relies heavily on templates. To avoid excessive code replication, partial specialization to provide
 *      shared impl for container of pointer is usually required.(为了避免数据的大量耗时的复制,通常对数据类结构,采取使用指向指针方式传递)
 * 
 * 
 * Strength & Weaknesses
 *   + Indivivdual container are simple and efficient, more thinking about efficient.
 *   + Each container provides a set of standard operation with standard names and semantics.
 *      some spec operations are provided by particular container type as need.
 *   + Additional commonality of use is provided through standard iterators. See test02
 *   + To serve different needs for containers, differentiterators and other interface can be defineed in 
 *      add iterators.
 *   + Container are by default type-safe and homogeneous.
 *          a heterogeneous container can be provided as homogenrous container of pointers to common base.
 *   + The container are non-intrusive and work well with build-in types and with structs with externally imposed layout
 *   + Intrusive container can be fitted into general framework
 *   + Each container take an arg, called an alllocator. that can be used as a handle for imple-services for any container
 *   
 *   - There is no standard run-time representation of container or iterators can be passed as func arg
*/