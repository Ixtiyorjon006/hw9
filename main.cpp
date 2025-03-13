
#include <iostream>
using namespace std;

Problem 1
int product(int a,int b) {
    if (b == 0) {return 0;}
    else if (b>0)
    return a+product(a,b-1);
    else return -a-product(a,b+1);
}
int main() {
    int a,b;
    cin >> a;
    cin >> b;
    cout << product(a,b);
    return 0;
}

Problem 2
int factorial(int n) {
    if (n==0 || n==1) {
        return 1;
    }
    else
        return n*factorial(n-1);
}
int main() {
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}

Problem 3
int fibonacci(int n) {
    if (n==0) return 0;
    else if (n==1) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}

Problem 4
int sum(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return n + sum(n - 1);
    }
}
int main() {
    int n;
    cin >> n;
    cout << sum(n) << endl;
}

Problem 5
int integr(int n) {
    if(n==1) return 1;
    else return integr(n-1);
}
int main() {
    int n;
    cin >> n;
    cout << integr(n)<<" ";
}

Problem 6
int counter(int n,int c){
    if (n/10 == 0) return 1;
    else return c+counter(n/10,c);
}
int main() {
    int n,c=1;
    cin >> n;
    cout << counter(n,c) << endl;
}

Problem 7
int sumd(int n) {
    if (n<10) return n;
    else return n%10 + sumd(n/10);
}
int main() {
    int n;
    cin>>n;
    cout<<sumd(n)<<endl;
}

Problem 8
int power(int x,int y) {
    if(y==0) return 1;
    else return x*power(x,y-1);
}
int main() {
    int x,y;
    cin>>x>>y;
    cout<<power(x,y);
}

Problem 9
int opposite(int n, int reverse=0) {
    if (n==0) return reverse;
    else return opposite(n/10, reverse*10+n%10);
}
int main() {
    int n;
    cin>>n;
    cout<<opposite(n);
    return 0;
}

Problem 10
int opposite(int n, int reverse=0) {
    if (n==0) return reverse;
    else return opposite(n/10, reverse*10+n%10);
}
int main() {
    int n;
    cin>>n;
    if (opposite(n)==n) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;
}

Problem 11
int prime(int n, int divide=2) {
    if (n % divide == 0 and divide*divide<=n) {
        return false;
        return prime(n, divide++);
    }
    else  {
        return true;
    }
}
int main() {
    int n;
    cin>>n;
    if (prime(n)==false) {
        cout<<"Not prime number";
    }
    else {
        cout<<"The prime number";
    }
    return 0;
}

Problem 12
int fuck(int n) {
    if (n==0) return 0;
    else {
        return n--;
    }
}
int main() {
  int n;
    cout<<"Enter a number(you can only enter 3): ";
    cin>>n;
    if (n==0) {
        cout<<"Move disk 1 from A to C"<<endl;
        cout<<"Move disk 2 from A to B"<<endl;
        cout<<"Move disk 1 from C to B"<<endl;
        cout<<"Move disk 3 from A to C"<<endl;
        cout<<"Move disk 1 from B to A"<<endl;
        cout<<"Move disk 2 from B to C"<<endl;
        cout<<"Move disk 1 from A to c"<<endl;
    }
    else
        cout<<"I can't solve this bonus problem";
    return 0;
}
