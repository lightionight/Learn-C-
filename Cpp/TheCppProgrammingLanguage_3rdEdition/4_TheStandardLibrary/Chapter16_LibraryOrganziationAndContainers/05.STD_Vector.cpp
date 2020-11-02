/**
 * P442
 * Vector
 * 
 * 1.Vector is every standard container base container.
 * 
 * 2.ONE IMPORTANT: aspect of a vector compared with other containers is that can easily and efficiently access indiviual elements in any order.
 * 
 * 3.This distinction is important when efficiency is at a premium
 * 
 * 4. Of the standard sequences, only VECTOR and DEQUE support Subscripting.The reason is the desire not to confuse 
 * users by providing fundamentally inefficient operations.(这种access member方式高效 有点类似 C style, 但是容易产生 confuse and OUT OF RANGE uncheck)
 * 
 * 5.vector provide fase access to arbitrary element, but changing its size is relatively EXPENSIVE.
 * 
 * 6.A vector as a compact data structure that we can index to access elements
 * 
 * 7.Vector.resize() is very similar to using the C standard library func realloc();
 * 
*/
#include <vector>