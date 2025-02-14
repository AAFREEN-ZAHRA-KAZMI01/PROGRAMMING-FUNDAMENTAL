#include<iostream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20],arr6[100];
int total=0;
void enter()
{
    int choice,i;
	cout<<"\t\t TELL  HOW MANY STUDENT YOU WANT TO ENTER  | = ";
	cin>>choice;
	if(total==0)
	{
		total=total+choice;
	for(int i=0;i<choice;i++)	
	{
		cout<<endl;
		cout<<"\n"<<"\t\t\tENTER STUDENTS DATA     | = "<<i+1<<endl<<endl;
		cout<<"\t\t\t\t\tNAME OF THE STUDENT     | = ";
		cin>>arr1[i];
		cout<<"\n<<""\t\t\t\t\tROLL NUMBER OF THE STUDENT | = ";
		cin>>arr2[i];
		cout<<"\n"<<"\t\t\t\t\tCOURSE OF THE STUDENT   | = ";
		cin>>arr3[i];
		cout<<"\n<<""\t\t\t\t\tCLASS OF THE STUDENT    | = ";
		cin>>arr4[i];
		cout<<"\n<<""\t\t\t\t\tCONTACT OF THE STUDENT  | = ";
		cin>>arr5[i];
		cout<<"\n<<""\t\t\t\t\tADDRESS OF THE STUDENT  | = ";
		cin>>arr6[i];		
	}
	}
	else
	for(int i=total;i<total+choice;i++)	
	{
		cout<<endl;
		cout<<"\t\t\tENTER STUDENTS DATA     | = "<<i+1<<endl<<endl;
		cout<<"\n<<""\t\t\t\t\tNAME OF THE STUDENT   | = ";
		cin>>arr1[i];
		cout<<"\n<<""\t\t\t\t\tROLL NUMBER OF THE STUDENT | = ";
		cin>>arr2[i];
		cout<<"\n"<<"\t\t\t\t\tCOURSE OF THE STUDENT  | = ";
		cin>>arr3[i];
		cout<<"\n"<<"\t\t\t\t\tCLASS OF THE STUDENT   | = ";
		cin>>arr4[i];
		cout<<"\t\t\t\t\tCONTACT OF THE STUDENT | = ";
		cin>>arr5[i];
		cout<<"\n"<<"\t\t\t\t\tADDRESS OF THE STUDENT | = ";
		cin>>arr6[i];		
	}
	total=total+choice;	
}
void show()
{
	for(int i=0;i<total;i++)
	{
		cout<<endl;
		cout<<"\t\t\t\tDATA OF THE STUDENT  |"<<i+1<<endl;
		cout<<"\t\t\t\t\tNAME OF THE STUDENT    | = "<<arr1[i]<<endl;
		cout<<"\t\t\t\t\tROLL NUMBER OF THE STUDENT | = "<<arr2[i]<<endl;
		cout<<"\t\t\t\t\tCOURSE OF THE STUDENT  | = "<<arr3[i]<<endl;
		cout<<"\t\t\t\t\tCLASS OF THE STUDENT   | = "<<arr4[i]<<endl;
		cout<<"\t\t\t\t\tCONTACT OF THE STUDENT | = "<<arr5[i]<<endl;
		cout<<"\t\t\t\t\tADDRESS OF THE STUDENT | = "<<arr6[i]<<endl;
	}
}
void search()
{
   string  name;
   cout<<endl;
   cout<<"\t\t\tWRITE THE  NAME OF THE STUDENT YOU WANT TO SEARCH    | = ";
   cin>>name;
   for(int i=0;i<total;i++)
   {
   	if(name==arr1[i])
   	{
   		cout<<endl;
		cout<<"\t\t\t\tDATA OF THE STUDENT  |"<<i+1<<endl;
		cout<<"\t\t\t\t\tNAME OF THE STUDENT    | = "<<arr1[i]<<endl;
		cout<<"\t\t\t\t\tROLL NUMBER OF THE STUDENT | = "<<arr2[i]<<endl;
		cout<<"\t\t\t\t\tCOURSE OF THE STUDENT  | = "<<arr3[i]<<endl;
		cout<<"\t\t\t\t\tCLASS OF THE STUDENT   | = "<<arr4[i]<<endl;
		cout<<"\t\t\t\t\tCONTACT OF THE STUDENT | = "<<arr5[i]<<endl;
		cout<<"\t\t\t\t\tADDRESS OF THE STUDENT | = "<<arr6[i]<<endl;
	   }
   }
}
void update()
{
   string  name;
   cout<<endl;
   cout<<"\t\t\tWRITE THE  NAME OF THE STUDENT YOU WANT TO UPDATE   | = ";
   cin>>name;
   for(int i=0;i<total;i++)
   {
   	if(name==arr1[i])
   	{
   		cout<<endl;
   		cout<<"\t\tPREVIOUS DATA   !!|"<<endl;
		cout<<"\t\t\t\tDATA OF THE STUDENT  |"<<i+1<<endl;
		cout<<"\t\t\t\t\tNAME OF THE STUDENT    | = "<<arr1[i]<<endl;
		cout<<"\t\t\t\t\tROLL NUMBER OF THE STUDENT | = "<<arr2[i]<<endl;
		cout<<"\t\t\t\t\tCOURSE OF THE STUDENT  | = "<<arr3[i]<<endl;
		cout<<"\t\t\t\t\tCLASS OF THE STUDENT   | = "<<arr4[i]<<endl;
		cout<<"\t\t\t\t\tCONTACT OF THE STUDENT | = "<<arr5[i]<<endl;
		cout<<"\t\t\t\t\tADDRESS OF THE STUDENT | = "<<arr6[i]<<endl;
	    cout<<endl;
	    cout<<"\t\t\t\t----------------------------------------------------------------------------------------------------\n\n\n";
        cout<<"\t\t\t                                 |||           ENTER NEW DATA         |||                               \n\n\n";	
	    cout<<"\t\t\t\t\tNAME OF THE STUDENT   | = ";
		cin>>arr1[i];
		cout<<"\t\t\t\t\tROLL NUMBER OF THE STUDENT | = ";
		cin>>arr2[i];
		cout<<"\t\t\t\t\tCOURSE OF THE STUDENT  | = ";
		cin>>arr3[i];
		cout<<"\t\t\t\t\tCLASS OF THE STUDENT   | = ";
		cin>>arr4[i];
		cout<<"\t\t\t\t\tCONTACT OF THE STUDENT | = ";
		cin>>arr5[i];
		cout<<"\t\t\t\t\tADDRESS OF THE STUDENT | = ";
		cin>>arr6[i];		
	   }
   }
}
void deleterecord()
{
	int k;
	cout<<"\t\t PRESS  1 TO DELETE YOUR FULL RECORD   | = "<<endl;
	cout<<"\t\t PRESS  2 TO DELETE SPECIFIC DATA      | = "<<endl;
	cout<<"\t\t ENTER YOUR CHOICE                     | = ";
	cin>>k;
switch(k)
{
	case 1:
		if(k==1)
	{
		total=0;
		cout<<"\t\t\t\t\t\t ALL YOUR RECORD IS DELETED   |"<<endl;
	}
	break;
	case 2:
 	     if (k==2)
	{
		string name;
		cout<<"\t\t\tENTER THE STUDENT NAME WHOSE RECORD YOU WANTED TO DELTED     | = ";
		cin>>name;
		for(int i=0;i<total;i++)
		{
			if(name==arr1[i])
			{
				for(int j=i;j<total;j++)
				{
					arr1[j]=arr1[j+1];
					arr2[j]=arr2[j+1];
					arr3[j]=arr3[j+1];
					arr4[j]=arr4[j+1];
					arr5[j]=arr5[j+1];
					arr6[j]=arr6[j+1];
				}
				total--;
				cout<<"\t\t\tYOUR REQUESTED RECORD IS DELETED.....!!!!!"<<endl;
				
			}
			
		}
	}
}
	
}
main()
{
  cout<<endl;
  cout<<"\t\t\t\t----------------------------------------------------------------------------------------------------\n\n\n";
  cout<<"\t\t\t                                   WELCOME TO THE STUDENT MANGEMENT PROJECT                            \n\n\n";	
  int choice;
  while(true)
  {
  	cout<<endl;
  	cout<<endl;
  	cout<<"\t\t1)  PRESS 1 TO ENTER THE DATA       |"<<endl;
  	cout<<"\t\t2)  PRESS 2 TO SHOW THE DATA        |"<<endl;
  	cout<<"\t\t3)  PRESS 3 TO SEARCH THE DATA      |"<<endl;
  	cout<<"\t\t4)  PRESS 4 TO UPDATE  THE DATA     |"<<endl;
  	cout<<"\t\t5)  PRESS 5 TO DELETE THE DATA      |"<<endl;
  	cout<<"\t\t6)  PRESS 6 TO EXIT THE PAGE        |"<<endl;
  	cout<<endl;
  	cout<<"\n\n""<<\t\t\t\tENTER YOUR CHOICE FROM  1 TO 5      | = ";
  	cin>>choice;
  	switch(choice)
	  {
	  	case 1:
	  	    enter();
	  	    break;
	  	case 2:
	  	    show();
	  	    break;
	  	case 3:
	  	    search();
	  	    break;
	  	case 4:
	  		update();
	  		break;
	  	case 5:
	  		deleterecord();
	  		break; 
	  	case 6:
	  		exit(0);
	  		break;
	  	default:
	  	cout<<"||YOU HAVE ENTERED AN INVALID CHOICE||"<<endl;	
		break;		
		}
  }
}
	
      
