  #include<iostream>

  using namespace std;

int c=56;

  int main(){
    //****** Build in data types*******
    int a,b,c;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    c =a+b;
    cout<<"The sum is "<<c<<endl;

    cout<<"the global c is "<<::c<<endl;


//*********float,double & long double Literals******
     float d=34.4f;
     long double e=39.4l ;
     cout<<"The value of d is "<<d<<endl;
     cout<<"The value of e is "<<e<<endl;

     //*********Reference var*****
     float x= 460;
     float & y=x;
     cout<<x<<endl; 
     cout<<y<<endl;

     //*******type casting*******
     int u=45;
     float v=45.79;
     cout<<"The value u is "<<(float)u<<endl;
cout<<"the value of v is "<<(int)v<<endl;
int w =int(v);

cout<<"The expression isu+v  "<<u+v<<endl;
cout<<"The expression is "<<u+int(v)<<endl;
cout<<"The expression is "<<u+(int)v<<endl;

    return 0;
  }