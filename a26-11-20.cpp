
/*
#include<iostream>
using namespace std;

void passPointerByReference(int* a, int &p){
	a = &p;
}

int main(){
	int x = 3;
	int p = 123;
  	cout << x << " "<<  &x <<endl;
  	cout << p << " "<<  &p <<endl;
	passPointerByReference(&x,p);
	cout << x << " "<<  &x <<endl;
   	cout << p << " "<<  &p <<endl;
   	return 0;
}
*/


/*
#include<iostream>
using namespace std;

void passPointerByReference(int* a, int &p)
{
    *a = p;
}

int main()
{
    int x = 3;
    int p = 123;
    cout << x << " "<<  &x <<endl;
    cout << p << " "<<  &p <<endl;
    passPointerByReference(&x,p);
    cout << x << " "<<  &x <<endl;
    cout << p << " "<<  &p <<endl;
    return 0;
}
*/



/*
#include<iostream>
using namespace std;

void passPointerByReference(int &a, int &p){
    	a = p;
}

int main(){
	int x = 3;
	int p = 123;
	int *y= &x;

  	cout << y << " "<<  *y <<endl;
	passPointerByReference(*y,p);
    cout << y << " "<<  *y <<endl;
   	return 0;
}
*/




#include<iostream>
using namespace std;

void passPointerByReference(int &a, int &p){
    	p=a;
}

int main(){
	int x = 3;
	int p = 123;
	int *y= &x;

  	cout <<  p <<endl;
	passPointerByReference(*y,p);
   	 cout << p <<endl;
   	return 0;
}





/*
#include<iostream>
using namespace std;

int passByValue(int x, int y)
{
    int z=x;
    x=y;
    y=z;
    cout<<x<<endl<<y<<endl;
}

void passByAdress(int *x, int *y)
{
    int z=*x;
    *x=*y;
    *y=z;
    cout<<*x<<endl<<*y<<endl;
}

void passByReference(int &x, int &y)
{
    int z=x;
    x=y;
    y=z;
    cout<<x<<endl<<y<<endl;
}
int main()
{
    int a=5, b=10;
    passByValue(a,b);
    passByAdress(&a, &b);
    passByReference(a,b);


    return 0;
}

*/
