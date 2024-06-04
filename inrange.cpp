//polymorphic functions , having 3 inputs
#include <iostream>
using namespace std;
#include <iostream>
 using namespace std;
 int inRange(int x,int low,int high)
{
    if(x>=low&&x<=high)
    {
        return 0;
    }
    if(x>high)
    {
        return 1;
    }
    if(x>low)
    {
        return -1;
    }
}
 char inRange(char x,char low,char high)
{

    if(x>=low&&x<=high)
    {
        return '0';
    }
    if(x>high)
    {
        return '1';
    }
    if(x>low)
    {
        return '-1';
    }

}
  int main( )
 {
  int num,lownum,highnum;
  char a,lowa,higha;
  cin>>num>>lownum>>highnum;
   (num,lownum,highnum)=inRange(num,lownum,highnum);
  cin>>(a,lowa,higha);
   (a,lowa,higha)=inRange(a,lowa,higha);
  return 0;
 }
