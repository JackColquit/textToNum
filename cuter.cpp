#include <iostream>
#include <sstream>
#include <vector>
#include<algorithm>
#include <climits>
#include<iterator>
using namespace std;
#include "cuter.h"
int main(int argc, char** argv)
{
    string s1=argv[1];
    istringstream iss(s1);
    vector<string> result;
    for(string s;iss>>s;)
    {
      result.push_back(s);
    }
    int firstCounter=0,temporal=0;
    int n=result.size();
    //check the size of the numbers and contruct the other list
    for(int i=0;i<n;i++)
    {
      temporal=hasIt(result[i]);
      if(temporal>0)
      {
        firstCounter++;
      }
    }
    //this add only numbers
    int allNumbers[firstCounter],secondCounter=0;
    for(int i=0;i<n;i++)
    {
      temporal=hasIt(result[i]);
      if(temporal>0)
      {
        allNumbers[secondCounter]=temporal;
        secondCounter++;
      }
    }
    //start counting
    int thirdCounter=0,temporal2;
    for(int j=0;j<(firstCounter-1);j++)
    {
      if(allNumbers[j]<allNumbers[j+1])
      {
        temporal2=allNumbers[j]*allNumbers[j+1];
        thirdCounter+=temporal2;
      }
      else
      {
        temporal2=allNumbers[j+1];
        thirdCounter+=temporal2;
      }
    }
    cout<<thirdCounter<<endl;
    return 0;
}
