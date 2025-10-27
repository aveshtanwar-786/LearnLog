#include <iostream>
// This program was created by Mohammad Avesh Tanwar.
using namespace std;
main()
    {
    char grade;
    std::cout<<"Enter Grade"<<"\n";
    std::cin >>grade;
    switch(grade)
        {
        case 'a' :
        case 'A' :  cout<<"Basic salary is 15000";
                    break;
        case 'b' :
        case 'B' :  cout<<"Basic salary is 12000";
                    break;
        case 'c' :
        case 'C' :  cout<<"Basic salary is 10000";
                    break;
        case 'd' :
        case 'D' :  cout<<"Basic salary is 9000";
                    break;
        default  :  cout<<"Invaild grade code";
        }
    }