#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
double t[5][5];

double f(double x){
    return exp(x)*sin(x);
}

double trapezoidal(double c,double d){
    double h;
    cout << "------------------------------------------"<<endl;
    for(int i=0;i<=4;i++){
        h = (d-c)/(i+1);
        if(i != 0)
             cout << "\t";
        double extra = 0;
        for(int j=1;j<=i;j++){
            extra = extra + 2*(f(c + j*h));
        }
        t[0][i] = (h/2)*(f(c) + f(d) + extra);
        cout << t[0][i];
    }
    cout << endl;
}



int main(int argc, char** argv) {
	double a,b;
	cout << "Reza tanaki zadeh" << "\t" << "9611522909" << "\n" << "F(x) = e^x * sin(*)" << endl;
	cout << "Please inter the beginning" << endl;
    cin >> a;
    cout << "Please inter the end" << endl;
	cin >> b;
    trapezoidal(a,b);
    
    for(int j = 1;j<=4;j++){
        for(int i=0;i<=4-j;i++){
            t[j][i] = ((pow(4,j)*t[j-1][i+1]) - t[j-1][i])/(pow(4,j) -1);
            cout << t[j][i] << "\t";
        }
        cout << endl;
    }
    cout << "Thank you ! ";    
    getch();
    return 0;
}
