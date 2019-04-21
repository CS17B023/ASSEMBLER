#include<string>
#include<map>
#include<iostream>
using namespace std;



int error(string s)
{
	map<string,int > set1;


//s.insert(pair<string,string> ("mit","ll"));
 set1.insert(pair<string,int>  ("add",1));
 set1.insert(pair<string,int>  ("sub",1));
 set1.insert(pair<string,int>  ("mul",1));
 set1.insert(pair<string,int>  ("and",1));
 set1.insert(pair<string,int>  ("or",1));
 set1.insert(pair<string,int>  ("div",1));
 set1.insert(pair<string,int>  ("slt",1));

 set1.insert(pair<string,int>  ("addi",2));
 set1.insert(pair<string,int>  ("subi",2));
 set1.insert(pair<string,int>  ("muli",2));
 set1.insert(pair<string,int>  ("andi",2));
 set1.insert(pair<string,int>  ("ori",2));
 set1.insert(pair<string,int>  ("sll",2));
 set1.insert(pair<string,int>  ("srl",2));
 set1.insert(pair<string,int>  ("lw",2));
 set1.insert(pair<string,int>  ("sw",2));
 set1.insert(pair<string,int>  ("divi",2));

 set1.insert(pair<string,int>  ("la",3));
 set1.insert(pair<string,int>  ("li",4));

 set1.insert(pair<string,int>  ("beq",5));
 set1.insert(pair<string,int>  ("bne",5));
 set1.insert(pair<string,int>  ("j",6));
 set1.insert(pair<string,int>  ("jal",6));

 set1.insert(pair<string,int>  ("@s0",-1));
 set1.insert(pair<string,int>  ("@s1",-1));
 set1.insert(pair<string,int>  ("@s2",-1));
 set1.insert(pair<string,int>  ("@s3",-1));
 set1.insert(pair<string,int>  ("@s4",-1));
 set1.insert(pair<string,int>  ("@s5",-1));
 set1.insert(pair<string,int>  ("@s6",-1));
 set1.insert(pair<string,int>  ("@s7",-1));
 set1.insert(pair<string,int>  ("@zero",-1));
 set1.insert(pair<string,int>  ("@t0",-1));
 set1.insert(pair<string,int>  ("@t1",-1));
 set1.insert(pair<string,int>  ("@t2",-1));
 set1.insert(pair<string,int>  ("@t3",-1));
 set1.insert(pair<string,int>  ("@t4",-1));
 set1.insert(pair<string,int>  ("@t5",-1));
 set1.insert(pair<string,int>  ("@t6",-1));
 set1.insert(pair<string,int>  ("@t7",-1));
 set1.insert(pair<string,int>  ("@t8",-1));
 set1.insert(pair<string,int>  ("@t9",-1));
 set1.insert(pair<string,int>  ("@a0",-1));
 set1.insert(pair<string,int>  ("@a1",-1));
 set1.insert(pair<string,int>  ("@a2",-1));
 set1.insert(pair<string,int>  ("@a3",-1));
 set1.insert(pair<string,int>  ("@v0",-1));
 set1.insert(pair<string,int>  ("@v1",-1));





if(set1.find(s) != set1.end())
	return set1.find(s)->second;
else return 0;


}


void opcode(string s)
{
 
 map<string,string > setop;

//for upcode
 setop.insert(pair<string,string>  ("add","00000000000100000"));
 setop.insert(pair<string,string>  ("sub","00000000000100001"));
 setop.insert(pair<string,string>  ("mul","01110000000011000"));
 setop.insert(pair<string,string>  ("and","00000000000100100"));
 setop.insert(pair<string,string>  ("or", "00000000000100101"));
 setop.insert(pair<string,string>  ("div","00000011010"));
 setop.insert(pair<string,string>  ("slt","00000000000101010"));

 setop.insert(pair<string,string>  ("addi","001000"));
 //setop.insert(pair<string,string>  ("subi","000000"));
 //setop.insert(pair<string,string>  ("muli","000000"));
 setop.insert(pair<string,string>  ("andi","001100"));
 setop.insert(pair<string,string>  ("ori","001101"));
 setop.insert(pair<string,string>  ("sll","00000000000000000"));
 setop.insert(pair<string,string>  ("srl","00000000000000010"));
 setop.insert(pair<string,string>  ("lw","100011"));
 setop.insert(pair<string,string>  ("sw","101011"));
 //setop.insert(pair<string,string>  ("divi","000000"));

 setop.insert(pair<string,string>  ("la","001111000000001000000000001"));
 setop.insert(pair<string,string>  ("li","00110100000"));

 setop.insert(pair<string,string>  ("beq","000100"));
 setop.insert(pair<string,string>  ("j","00001000000100000000000000011001"));
 setop.insert(pair<string,string>  ("jal","00001100000100000000000000011101"));

 
 setop.insert(pair<string,string>  ("@s0","10000"));
 setop.insert(pair<string,string>  ("@s1","10001"));
 setop.insert(pair<string,string>  ("@s2","10010"));
 setop.insert(pair<string,string>  ("@s3","10011"));
 setop.insert(pair<string,string>  ("@s4","10100"));
 setop.insert(pair<string,string>  ("@s5","10101"));
 setop.insert(pair<string,string>  ("@s6","10110"));
 setop.insert(pair<string,string>  ("@s7","10111"));
 setop.insert(pair<string,string>  ("@zero","00000"));
 setop.insert(pair<string,string>  ("@t0","01000"));
 setop.insert(pair<string,string>  ("@t1","01001"));
 setop.insert(pair<string,string>  ("@t2","01010"));
 setop.insert(pair<string,string>  ("@t3","01011"));
 setop.insert(pair<string,string>  ("@t4","01100"));
 setop.insert(pair<string,string>  ("@t5","01101"));
 setop.insert(pair<string,string>  ("@t6","01110"));
 setop.insert(pair<string,string>  ("@t7","01111"));
 setop.insert(pair<string,string>  ("@t8","11000"));
 setop.insert(pair<string,string>  ("@t9","11001"));
 setop.insert(pair<string,string>  ("@a0","00100"));
 setop.insert(pair<string,string>  ("@a1","00101"));
 setop.insert(pair<string,string>  ("@a2","00110"));
 setop.insert(pair<string,string>  ("@a3","00111"));
 setop.insert(pair<string,string>  ("@v0","00010"));
 setop.insert(pair<string,string>  ("@v1","00011"));

}