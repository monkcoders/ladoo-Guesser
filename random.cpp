//program to generate random number in c++

#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

int main(){
    srand(time(0));//creates a seed with currennt time as values and hence helps in generating a random number 
    //witout srand the random() function will always generate the same random number as its seed will start from srand(1) by default hence to generate real random numbers we must use srand(time(0))
    int n = random()%100;//genrates random numbers between 0 and 100
    int m = random()%(50-30)+30; // it will generate random numbers between 30 amd 50
    cout<<n<<" "<<endl;
    return 0;
}