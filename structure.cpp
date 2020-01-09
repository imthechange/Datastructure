// structure 
/* structure can be defined as the collection of related data member under one name.
and those data member may be similar size or may be dis-similar.
usually defined as collection of dis-similar item under one name.

grouping data type
structure is used to defining  user define data type.

apart from  primitive data type in any  programming language like int ,float,char32 using data type we 
can define our own data type depending upon our requirement

how to define structure
1-define 
2-size of the structure
3-declaration
4-accessing the member


let us take a example of rectangele

it uses set of value like length and breadth



*/


struct rectangele{
    int length; // this will take two byte
    int breadth;// this will take two byte
};

/*write now it is not consumming any data in memory,because it is just a defination

if i create variable of this type then it must occupy that much of memory 

*/
#include<iostream>
int main(){
    
    struct rectangele r; // this is the 3-declaration and it will occupy memory
    struct rectangele s{10,5};
    r.length=4;
    printf("%d",s.length);   ///dot operator is used to access the menber
}











