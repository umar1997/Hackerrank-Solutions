#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hr,min;
    cin>>hr;
    cin>>min;
    const char *args[] ={
        "zero", 
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "quarter",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "twenty one",
        "twenty two",
        "twenty three",
        "twenty four",
        "twenty five",
        "twenty six",
        "twenty seven",
        "twenty eight",
        "twenty nine",
        "half"
    };
    vector<string> numbers(args, args + sizeof(args)/sizeof(args[0]));
    if(min==00)
        cout<<numbers[hr]+" o' clock"<<'\n';
      else if(min==15 || min ==30)
        cout<<numbers[min]+" past "+numbers[hr]<<'\n';
        else if(min==1)
        cout<<numbers[min]+" minute past "+numbers[hr]<<'\n'; 
    else if(min>=02 && min <=30)
        cout<<numbers[min]+" minutes past "+numbers[hr]<<'\n';
    else if(min==45)
        cout<<"quarter to "+numbers[hr+1]<<'\n';
    else
        cout<<numbers[60-min]+" minutes to "+numbers[hr+1]<<'\n';
    
    return 0;
}

