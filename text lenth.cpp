#include<iostream>
#include<string>
using namespace std;
int stringLength (char string[]){
int count = 0;
while ( string[count] != '\0' )
	++count;
return count;
}
int main()
{

  char word1[]={'B','\0'};
  char word2[]={'B','a','\0'};
  char word3[]={'B','a','n','\0'};
  char word4[]={'B','a','n','g','\0'};
  char word5[]={'B','a','n','g','l','\0'};
  char word6[]={'B','a','n','g','l','a','\0'};
  char word7[]={'B','a','n','g','l','a','d','\0'};
  char word8[]={'B','a','n','g','l','a','d','e','\0'};
  char word9[]={'B','a','n','g','l','a','d','e','s','\0'};
  char word10[]={'B','a','n','g','l','a','d','e','s','h','\0'};
  char word11[]={'B','a','n','g','l','a','d','e','s','h','i','\0'};


  cout<<stringLength (word1)<<endl;
  cout<<stringLength (word2)<<endl;
  cout<<stringLength (word3)<<endl;
  cout<<stringLength (word4)<<endl;
  cout<<stringLength (word5)<<endl;
  cout<<stringLength (word6)<<endl;
  cout<<stringLength (word7)<<endl;
  cout<<stringLength (word8)<<endl;
  cout<<stringLength (word9)<<endl;
  cout<<stringLength (word10)<<endl;
  cout<<stringLength (word11)<<endl;


  return 0;

}
