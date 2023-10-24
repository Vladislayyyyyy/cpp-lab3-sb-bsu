#include<iostream>
#include<limits>
using namespace std;
int main() 
{
int i = 1, sum_k = 0, number;  int k{};
cout << " Enter the amount of integers to sum = "; cin >> k;
while(1) 
{
if(cin.fail()) 
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'k');
cout<<"You have entered wrong input. Try again: "<<endl;
cin>>k;
}
if(!cin.fail())
break;
}
if (k == 0)
{
sum_k = 0;
cout << " The total sum of " << k << " integers is: " << sum_k;
} else
do {
cout << "Enter integer nr. " << i << ": ";
cin >> number;
sum_k += number; i++;
} while (i <= k);
cout << " The total sum of " << k << " integers is: " << sum_k;
return 0;
}
