//an Interface
interface IConnet
{
    string getName(string name);

}
// an abstract class
abstract class Person
{
    public abstract string PrintName();
    public abstract void Speak();
    
}
//
class Student : Person, IConnet
{
    #region Self Memeber
    private string m_FisrtName;
    private string m_lastName;
    #endregion
    #region Person Member
    #endregion
    #region IConnet Member
    #endregion
}