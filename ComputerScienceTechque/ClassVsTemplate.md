# What Difference between Class and Template in C++ ?

## Introdution

### **First What is Class** ?   

In c++, class is base already have data type( build-in data type, user-self define type) to creating a new type data. 这样设计的目的有两个  
> 第一个是为了适应与不同于POP(process origenal Programming)的OOP(Object Origthal Programming),将具体的对象用具体的类去表达.
---
> 第二个是为了C++的设计理念, 即通用广泛的编程语言,适用于不同领域,每个领域都有自己不同的业内数据表达与组织方式,用Class这种机制能更泛型的适应.
### **Then what is Template** ?
经过C++语言一段时间的发展与使用, c++使用者发现经常会不断的去重复一些相似或者接近相同的Class重复创建, 如何减少这些重复的工作? Template正是为此而生, 因为c++ is strong date type language, before you creat an class, you must first know what data type class you want creating. but Template Think difference, you just first thinking what function it will using, creating it, and abstract data type until you
define it in real class.通过这种机制的设计,大大的简化了重复编写重复的Class的工作量  
下面就是很明显的例子:
```C++
//In Class Creat
class A{
    int dataA;
    int dataB;
    getA(){return dataA}
    getB(){return dataB}
}

class B{
    std::string dataA;
    std::string dataB;
    getA(){return dataA}
    getB(){return dataB}
}
//In Template creat
template 

```
## Different

## Reference
[What is Difference between Class And Template ?]([https://link](https://stackoverflow.com/questions/879535/what-is-the-difference-between-a-template-class-and-a-class-template))
