#include<iostream>
using namespace std;
int sum_array(int*a,int size){
    int suma=0;
    for(int* i=a; i<i+size; i++){
        suma+=*i;
    }
    return suma;
}
int main(){
int tab[10]={0,1,2,3,4,5,6,7,8,9};
cout<<sum_array(tab, 10);




    return 0;
}