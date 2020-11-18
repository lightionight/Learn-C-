<<<<<<< HEAD
public interface ISample
{
    private static string _field;
    public static Field{
        get => _field;
        private set => _field = value;
        static ISamplein
    }
=======
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
>>>>>>> 0d34d00a7d098409ab9ba3cc12256a7fc4e1d3ed
}