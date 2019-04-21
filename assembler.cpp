#include<fstream>
#include<iostream>
#include<bits/stdc++.h>
#include"nitesh.h"

using namespace std;


void fun1(string s1, int index,int line)
{
		int n = s1.size();
		string str1 = "";
		string str2 = "";
		string str3 = "";
		int i,j,k;
		for( i = index;i<n;i++)
		{
			
			if(s1[i] != ' ' && s1[i] !=',')
				str1 += s1[i];
			else if( (s1[i]==' ' && str1.size()>0) || ( s1[i]==','  && str1.size()>0) )
			{
				break;
			}
		}
		int res1 = error(str1);
		if(res1 == 0)
		{
			cout<<"syntax error at line number  "<<line<<endl;
			return;
		}
		for( j = i;j<n;j++)
		{
			
			if(s1[j] != ' ' && s1[j] !=',')
				str2 += s1[j];
			else if( (s1[j]==' ' && str2.size()>0) || ( s1[j]==','  && str2.size()>0) )
			{
				break;
			}
		}
		int res2 = error(str2);
		if(res2 == 0)
		{
			cout<<"syntax error at line number "<<line<<endl;
			return;
		}
		for( k = j;k<n;k++)
		{
			
			if(s1[k] != ' ' && s1[k] !=',')
				str3 += s1[k];
			else if( (s1[k]==' ' && str3.size()>0) || ( s1[k]==','  && str3.size()>0) )
			{
				break;
			}
		}
 
        k++;
		while(1)
		{

			if(k>=n || s1[k] =='#')
				break;
			if(s1[k]!=' ' && k<n )
			{   
				cout<<"syntax error at line number1 "<<line<<endl;
				return;
			}
			
			k++;
		}

		int res3 = error(str3);
		if(res3 == 0)
		{
			cout<<"syntax error at line number "<<line<<endl;
			return;
		}


}



void  fun2(string s2, int index, int line)
{
		int n = s2.size();
		string str1;
		string str2;
		string str3;
		int i,j,k;
		for( i = index;i<n;i++)
		{
			
			if(s2[i] != ' ' && s2[i] !=',')
			      str1 += s2[i];
			else if( (s2[i]==' ' && str1.size()>0) || ( s2[i]==','  && str1.size()>0) )
			     break;
				
		}

		int res1 = error(str1);
		if(res1 == 0)
		{
			cout<<"syntax error at line number "<<line<<endl;
			return;
		}

		for( j = i;j<n;j++)
		{
			
			if(s2[j] != ' ' && s2[j] !=',')
				str2 += s2[j];
			else if( (s2[j]==' ' && str2.size()>0) || ( s2[j]==','  && str2.size()>0) )
			      break;
				
		}

		int res2 = error(str2);
		if(res2 == 0)
		{
			cout<<"syntax error at line number "<<line<<endl;
			return;
		}
         
        
        int a=j,check=0;
        while(s2[a]==' ' || s2[a]==',')
        {
         	if(check>0 && s2[a]==',')
         	{
         		cout<<"syntax error at line number "<<line<<endl;
			     return;
         	}
         	if(s2[a]==',')
               check=1;
         	a++;
        }
        
            
		for(k = a;k<n;k++)
		  str3 += s2[k];
			
		int res3 = str3.size();
		int flag = 0;
		for( i=0;i<res3;i++)
		{
           if((str3[i]<'0' || str3[i]>'9'))
           	flag=1;

            if(flag==1)
            {
            	if(str3[i] == ' ')
            		i++;
            	if(str3[i] == '#')
            		return;
            	else if(str3[i] != ' ' )
            	{
            		cout<<"syntax error at line number "<<line<<endl;
					return;
            	}

            }
		}	
		
}



void fun3(string s3,int index, int line)
{
	int n = s3.size();
		string str1;
		string str3;
		int i,k;
		for( i = index;i<n;i++)
		{
			
			if(s3[i] != ' ' && s3[i] !=',')
				str1 += s3[i];
			else if( (s3[i]==' ' && str1.size()>0) || ( s3[i]==','  && str1.size()>0) )
			{
				break;
			}
		}
		int res1 = error(str1);
		if(res1 == 0)
		{
			cout<<"syntax error at line number "<<line<<endl;
			return;
		}
		
		i++;
			for(k = i;k<n;k++)
		  str3 += s3[k];
			
	
		int res3 = str3.size();
		int flag = 0;
		for( i=0;i<res3;i++)
		{
           if((str3[i]<'a' || str3[i]>'z'))
           	flag=1;

            if(flag==1)
            {
            	if(str3[i] == ' ')
            		i++;
            	if(str3[i] == '#')
            		return;
            	else if(str3[i] != ' ' )
            	{
            		cout<<"syntax error at line number "<<line<<endl;
					return;
            	}

            }
		}	
		
}

void   fun4(string s4,int index, int line)
{
	int n = s4.size();
	string str1;
	string str3;
	int i,j,k;
		for( i = index;i<n;i++)
		{
			
			if(s4[i] != ' ' && s4[i] !=',')
				str1 += s4[i];
			else if( (s4[i]==' ' && str1.size()>0) || ( s4[i]==','  && str1.size()>0) )
			{
				break;
			}
		}
		int res1 = error(str1);
		if(res1 == 0)
		{
			cout<<"syntax error at line number  "<<line<<endl;
			return;
		}


		int a=i,check=0;
        while(s4[a]==' ' || s4[a]==',')
        {
         	if(check>0 && s4[a]==',')
         	{
         		cout<<"syntax error at line number "<<line<<endl;
			     return;
         	}
         	if(s4[a]==',')
               check=1;
         	a++;
        }
        
            
	for(k = a;k<n;k++)
		  str3 += s4[k];
			
		int res3 = str3.size();
		int flag = 0;
		for( i=0;i<res3;i++)
		{
           if((str3[i]<'0' || str3[i]>'9'))
           	flag=1;

            if(flag==1)
            {
            	if(str3[i] == ' ')
            		i++;
            	if(str3[i] == '#')
            		return;
            	else if(str3[i] != ' ' )
            	{
            		cout<<"syntax error at line number "<<line<<endl;
					return;
            	}

            }
		}	
}


void fun5(string s5,int index , int line)
{
	int n= s5.size();
	string str1;
	string str2;
	string str3;
	int i,j,k;
		for( i = index;i<n;i++)
		{
			
			if(s5[i] != ' ' && s5[i] !=',')
				str1 += s5[i];
			else if( (s5[i]==' ' && str1.size()>0) || ( s5[i]==','  && str1.size()>0) )
			{
				break;
			}
		}
		int res1 = error(str1);
		if(res1 == 0)
		{
			cout<<"syntax error at line number "<<line<<endl;
			return;
		}
		for( j = i;j<n;j++)
		{
			
			if(s5[j] != ' ' && s5[j] !=',')
				str2 += s5[j];
			else if( (s5[j]==' ' && str2.size()>0) || ( s5[j]==','  && str2.size()>0) )
			{
				break;
			}
		}


		int res2 = error(str2);
		if(res2 == 0)
		{
			cout<<"syntax error at line number "<<line<<endl;
			return;
		}

		j++;
			for(k = j;k<n;k++)
		  str3 += s5[k];
			
	
		int res3 = str3.size();
		int flag = 0;
		for( i=0;i<res3;i++)
		{
           if((str3[i]<'a' || str3[i]>'z'))
           	flag=1;

            if(flag==1)
            {
            	if(str3[i] == ' ')
            		i++;
            	if(str3[i] == '#')
            		return;
            	else if(str3[i] != ' ' )
            	{
            		cout<<"syntax error at line number "<<line<<endl;
					return;
            	}

            }
		}	

		
		
}

void fun6(string s6,int index,int line)
{
	int n= s6.size();
	string str1="";
	string str3="";
	int i,k;
		for( i = index;i<n;i++)
		{
			
			if(s6[i] != ' ' && s6[i] !=',')
				str1 += s6[i];
			else if( (s6[i]==' ' && str1.size()>0) || ( s6[i]==','  && str1.size()>0) )
			{
				break;
			}
		}

		int res2 = error(str1);
		if(res2 != 0)
		{
			cout<<"syntax error at line number "<<line<<endl;
			return;
		}

		i++;
			for(k = i;k<n;k++)
		  str3 += s6[k];
			
	
		int res3 = str3.size();
		int flag = 0;
		for( i=0;i<res3;i++)
		{
           if((str3[i]<'a' || str3[i]>'z'))
           	flag=1;

            if(flag==1)
            {
            	if(str3[i] == ' ')
            		i++;
            	if(str3[i] == '#')
            		return;
            	else if(str3[i] != ' ' )
            	{
            		cout<<"syntax error at line number "<<line<<endl;
					return;
            	}

            }
		}	

}


int main()
{

    string s;
    int line_count=0,flag3=0;
	ifstream fin;
	fin.open("asse.s");

	while(fin)
	{
		line_count++;
		getline(fin,s);
		if(s=="")
		{
			line_count--;
			line_count++;
		}
		
		else if(flag3==0 && s!="main:")
			{cout<<"syntax error at line number "<<line_count<< endl; flag3=1;}
		else if (flag3==0 && s == "main:")flag3=1;
        

        else 
        {
        	string str = "";
        	for(int i=0;i<s.size();i++)
        	{
        		if(s[i]!=' ')
        			str+=s[i];
        		if(s[i]==' ' && str.size()>0)
        		{
        			int k=error(str);
        			if(k==0)
        				cout<<"syntax error at line number "<<line_count<<endl;
        			else 
        			{
        				switch(k)
        				{
        					case 1:
        					       fun1(s,i,line_count);
        					       break;
        					case 2:
        					       fun2(s,i,line_count);
        					       break;
        					case 3:
        					       fun3(s,i,line_count);
        					       break;
        					case 4:
        					       fun4(s,i,line_count);
        					       break;
        					case 5:
        					       fun5(s,i,line_count);
        					       break;
        					case 6:
        					       fun6(s,i,line_count);
        					       break;   
        				}
        			}
        			break;
        		}

        	}
        }




		
	}
	fin.close();













}