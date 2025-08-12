#include<iostream>
using namespace std;
class Example{
  private:
     int Data;
   public:
     Example(): Data(0){}
     Example(int val){
        Data = val;
     }
     void Getter(){
        cout<<"The value is "<<Data;
     }
     void Setter(int val){
        Data= val;
     }
};

int main(){
    Example Var;
    Var.Setter(7);
    Var.Getter();
 return 0;
}