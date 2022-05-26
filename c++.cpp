\\diya was here
#include <iostream>
using namespace std;
class shape{
    public:
    shape(){
        cout<<"default constructor in shape"<<endl;
    }
    
};
class twoshape:public shape{
    public:
    twoshape(){
        cout<<"default constructor in twoshape"<<endl;
    }
    twoshape(int y){
        cout<<"this is 2d shape"<<endl;
    }
};
class threeshape:public twoshape{
    public:
    threeshape(int z){
        cout<<"this is 3d shape"<<endl;
    }
};
int main()
{
    shape p1;
    cout<<"hello \n";
    twoshape p2(4);
    cout<<"hello \n ";
    threeshape p3(2);
    return 0;
}
