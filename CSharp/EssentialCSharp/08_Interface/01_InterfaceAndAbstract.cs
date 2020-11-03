
public abstract class Person{
    public virtual string m_name{get;set;}
    public Person(string name){
        m_name = name;
    }
}

interface IListable{
    string?[] cellValue{get;}
}
//inherit class
public class Students : Person,IListable{
    protected string FisrtName{get;}
    protected string LastName{get;}
    protected string? Address{get;}
    protected string? Phone{get;}

    public string?[] cellValue{
        get{
            return new string?[]{
            FisrtName, LastName
        };
        }
    }
}