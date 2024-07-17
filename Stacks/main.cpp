#include "header.h"

using std::cout, std::string, std::cin;

int main()
{

  bool nameFind = false;
  bool numberFind = false;
  std::stack<string> nameStack;
  std::stack<double> doubleStack;

  nameStack.push("JoAnn");
  nameStack.push("Alan");
  nameStack.push("Maria");
  nameStack.push("Jordyn");
  nameStack.push("Eric");

  doubleStack.push(29.39);
  doubleStack.push(2022.9);
  doubleStack.push(123.45);
  doubleStack.push(88.64);
  doubleStack.push(444.44);
  doubleStack.push(123.123);

  


  // while(!nameStack.empty() && nameFind != true)
  // {
  //   if(nameStack.top() == "Jordyn")
  //   {
  //     nameFind = true;
  //   }
  //   nameStack.pop();

  // }  

  // while(!doubleStack.empty() && numberFind != true)
  // {
  //   if(doubleStack.top() == 2022.9)
  //   {
  //     numberFind = true;
  //   }
  //   doubleStack.pop();
  // }


  // while(!nameStack.empty())
  // {
  //   cout << nameStack.top() << std::endl;
  //   nameStack.pop();
  // } 

  // cout << std::endl;

  // while(!doubleStack.empty())
  // {
  //   cout << doubleStack.top() << std::endl;
  //   doubleStack.pop();
  // }

  return 0;
}