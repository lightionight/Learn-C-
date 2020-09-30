using System;

namespace EssentialCSharp.testAbstract{
    public abstract class human
    {
        private string _myname;
        public string myname{
            get => _myname;
            set => _myname;
        }
        private int _ID;

        public int ID{
            get => _ID;
            set => _ID;
        }
        public human(string myName, int ID){
            this._myname = myName;
            this._ID = ID;
        }
        //打印成员名称
        public abstract void PrintmyName();
        //Say hello to everyone
        public abstract void speakHello();
    }
}