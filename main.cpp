// 12 цілий Замінити всі від’ємні елементи на максимальний
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;
void max(int *a,int n){
  int max=a[0];
  for(int i=0;i<n;i++){
    if(max<a[i]){max=a[i];}
  }
  for(int i=0;i<n;i++){
    if(a[i]<0){a[i]=max;}
      }
}

int main() {
int a[12], i;
   srand(time(0));
  
    for (i = 0; i < 12; i++)
    {
        a[i] = rand() % 41-20;
        cout<< a[i]<<"  ";
    } cout<<"\n";
max(a,12);

for (i = 0; i < 12; i++)
    {
        cout<< a[i]<<" ";
    } 
  return 0;
}
  