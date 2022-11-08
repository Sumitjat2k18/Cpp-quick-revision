#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{   //-------hello world;
    //     int file_size=0;
    //     int counter=0;
    //     double sales=9.99;
    // std::cout <<file_size;
    //----swapping two no;
    // int a=1;
    // int b=2;
    // int temp=a;
    // a=b;
    // b=temp;
    // cout<<a<<endl;
    // cout<<b;
    // return 0;
    //---constant----;
    // const double pi=3.14;

    //------naming conventions;
    // int file_size;------snake case;
    // int FileSize;------Pascal Case;
    // int fileSized;-----camel CASE;
    //------MATHEMATICAL EXPRESSIONS;
    //
    // int x=10;
    // x=x+5;
    // cout<<x; --15;

    //------increment and decreament operator;
    // int x=10;
    // x=x+1;
    // x++;
    // cout<<x;
    //----prefix and postfix;
    // int x=10;
    // //int y=x++; //y=10;x=11;
    // int z=++x;  //z=11;x=11;
    // cout<<x<<" ";
    // //cout<<y<<" ";
    // cout<<z;
    //--------order of operators;
    //() we can change the ordr using pranthesis;
    //* and / heigher priority;
    //  +and - haver lower priority;
    // double x=(1+2)*3;
    // cout<<x;

    //----exercise z=x+10/3y; x=10;y=4;
    // double x=10;
    // double y=5;
    // double z=(x+10)/(3*y);
    // //z=(x+10)/(3*y);
    // cout<<z;

    //-----writing output to the console;
    //----cout represents standard output stream;
    // in programming a stream represents a sequence of characters;
    // << -stream insertion operator;

    // int x=10;
    // int y=20;
    // cout<<"x= "<<x<<endl<<"y= "<<y;

    // //--we use using directive to pick up std in our code;using namespace std;
    // sales ,state tax,country tax and total tax;
    // double sales=95000;
    // double state_tax=(sales*4)/100;
    // double country_tax=(sales*2)/100;
    // double total_tax=state_tax+country_tax;
    // cout<<"Sales=$"<<sales<<endl<<"State Tax="<<state_tax<<endl<<
    // "Country Tax ="<<country_tax<<endl<<"Total Tax ="<<total_tax;
    //-------reading input from the console;
    //>> ---stream extractor operator;
    // cout<<"enter a values for x and y";
    // double x,y;
    // cin>>x;
    // cin>>y;
    // cout<<x+y;

    //----exercise write a program to convert a temperature from fahrenhit to clesius.
    // cout<<"enter the temperature in farenheit";
    // double fahrenheit;
    // cin>>fahrenheit;
    // double celsius=(fahrenheit-32)/1.8;
    // cout<<"Temperature in celsius="<<celsius;
    // return 0;
    // }
    //------working with standard library;
    // double result=floor(1.2);
    // double result=pow(2,3);
    // cout<<result;
    //-----exercise to calculate the area of  a circle;
    // cout<<"enter the radius of the circle";
    // const double pi=3.14;
    // double radius;
    // cin >>radius;
    // double area=pi*pow(radius,2);
    // cout<<"Area of the circle is :"<<area;

    //----commments in cpp we have many ways to add comments;
    // 1---//----content;
    // 2---content --//---comment;
    // 3----/*----content in multiple lines---*/

    //----fundamental datatypes in cpp;
    //---cpp is a statically -typed language;
    // SHORT 3BYTES RANGE -32,768 TO 32,767
    // int 4bytes range -2B TO 2B;
    // LONG 4 BYTES RANGE SAME
    // long long 8bytes range really large
    //---------floating point no;
    // double 8bytes range -1.7e308 to 1.7e308
    // float  4 bytes range -3.4e38 to 3.4e38
    // long double 8bytes range -3.4e932to 1.7e4832;

    //-------bool
    // bool 1 bytes range true/false;
    // char 1 byte storing single character;
    //  double price=99.99;
    //  float intrestRate=3.67f;
    //  long fileSize=90000L;
    //  char letter='a';
    //  auto isValid=false;
    //-----initializing variable;
    // int number{1.2};
    // cout<<number;

    //---------number systems
    // decimal(base 10) digits=0-9 ex=255
    // binary(base 2) digit=0,1 ex=111111
    // hexadecimal(base 16) digit 0-9,A-F ex FF;
    // int number=255;//decimal
    // int number=0b11111111;//binary
    // int number=0xff;//hexadecimal;
    // cout<<number;

    //-----------narrowing--------
    //  short number =100;
    //  int another {number};
    //   cout<<another;

    //-------geneating random number;
    // long elapsedSecond = time(0);//jan 1 1970;
    // srand(elapsedSecond);
    // int number=rand()%10;
    // cout<<number;
    //------exercise to produce the random no on dice;
    // const short minValue=1;
    // const short maxValue=6;
    // srand(time(0));
    // short first=(rand()%(maxValue-minValue+1))+minValue;
    //  short second=(rand()%(maxValue-minValue+1))+minValue;
    //  cout<<first<<","<<second;
    return 0;
}