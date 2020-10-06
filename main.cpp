//
//  main.cpp
//  lab3
//
//  Created by D T on 06.10.2020.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include "test.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    int n,a;
    cout<<"Enter N: "; cin >> n;
    cout<<endl<<"Enter a: "; cin >> a;
    vector <int> mas(n);
    for(int i =0; i < n; i++) cin >> mas[i];
    for(int i=0;i<n;i++){ mas[i]*=2; mas[i]-=a; mas[i]/=mas[0];}
    
    int sum =0, sumSq=0, sum_6=0, sumK = 0, srA=0, sumS=0;
    for(int i=0; i < n; i++){ sum+=mas[i]; sumSq+=pow(mas[i], 2);}
    for(int i=0; i < 6; i++) sum_6+=mas[i];
    int k1, k2, s1, s2, s=0;
    cout<<endl<<"Enter k1: "; cin >> k1;
    cout<<endl<<"Enter k2: "; cin >> k2;
    for(int i=k1; i < k2+1; i++) sumK += mas[i];
    srA = sum/n;
    cout<<endl<<"Enter s1: "; cin >> s1;
    cout<<endl<<"Enter s2: "; cin >> s2;
    for(int i=s1; i < s2+1; i++) {sumS+=mas[i]; s++;} sumS/=s;
    
    vector <int> mas2;
    for(int i =0; i<3;i++){a = mas2[i]; mas2[i]= mas2[n-4+ i];mas2[n-4+i]=a;}
    
    for(int i=0;i<n;i++){if(mas[i]<0)mas.erase(mas.begin()+i-1); break;}
    for(int i = n -1; i>=0;i--) {if(mas[i]%2!=0) mas.erase(mas.begin()+i);}
    
    string name = " "; cout << "Enter the name of the city: "; cin >> name;
    if (name.size()%2!=0) cout<< "The number of letters is odd"<< endl;
    else cout << "The number of letters is even "<< endl;
    
    string first_name = " ", second_name = " ";
    cout << "Enter the first surname: "; cin >> first_name;
    cout << "Enter the second surname: "; cin >> second_name;
    if (first_name.size()> second_name.size()) cout<< true << endl;
    else cout << false << endl;
    
    string first_city = " ", second_city = " ", third_city = " ", the_longest, the_shortest;
    cout << "Enter the name of the first city: "; cin >> first_city;
    cout << "Enter the name of the second city: "; cin >> second_city;
    cout << "Enter the name of the third city: "; cin >> third_city;
    /*if(first_city.size() > second_city.size()){the_longest = first_city; the_shortest = second_city;}
    else {the_longest = second_city; the_shortest = first_city;}
    if(first_city.size() > third_city.size()){if(second_city.size() > third_city.size())the_shortest = third_city;
        else the_shortest = second_city;
    }
    else if(second_city.size() > third_city.size())*/
    if(first_city.size() > second_city.size()){the_longest = first_city; the_shortest = second_city;
        if(third_city.size() < second_city.size())the_shortest = third_city;
        if(third_city.size() > first_city.size())the_longest = third_city;
    }
    else
    {
        the_longest = second_city; the_shortest = first_city;
        if(third_city.size() > second_city.size())the_longest = third_city;
        if(third_city.size() < first_city.size())the_shortest= third_city;
    }
    
    string word =""; int m = 0;
    for(int i = m ; i < n+1 ; i++) word += name[i];
    
    name.insert(0, name.size(), '*');
    for(int i = 0; i < name.size(); i++)if(name[i]=='a')m++;
    sum = (m/name.size()) *100;
    
    
    return 0;
}
