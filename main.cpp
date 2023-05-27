#include <iostream>
using namespace std;

int main()
{
	int userInput;
	
	//Do-while loop for incorrect user inputs
	do
	{
		cout<<"Enter the amount you want to withdraw - LKR ";
		cin>>userInput;
				
		if(userInput%50 != 0 || userInput<1000 || userInput>5000)
			cout<<"\n Error! Try again!";
		
	}while(userInput%50 != 0 || userInput<1000 || userInput>5000);
	
	//Arrays to store combinations
	int array1[5] = {0,0,0,0,0};
	int array2[5] = {0,0,0,0,0};
	int array3[5] = {0,0,0,0,0};
	
	//Making combinations
	if((userInput/5000)==1)
	{
		array1[0] = 1;
		array2[1] = 5;
		array3[2] = 10; 
	}
	else
	{
		if((userInput%1000)==0)
		{	
			array1[1] = userInput/1000;
			array2[2] = userInput/500;
			array3[3] = userInput/100;
		}
		else
		{
			if((userInput%500)==0)
			{
				array1[1] = userInput/1000;
				array1[2] = (userInput%1000)/500;
				array2[2] = userInput/500;
				array2[3] = userInput/100;
			}
			else
			{
				if((userInput%100)==0)
				{
					array1[1] = userInput/1000;
					array1[2] = (userInput%1000)/500;
					array1[3] = ((userInput%1000)%500)/100;
					array2[3] = userInput/100;
					array3[4] = userInput/50;
				}
				else
				{
					array1[1] = userInput/1000;
					array1[2] = (userInput%1000)/500;
					array1[3] = ((userInput%1000)%500)/100;
					array1[4] = (((userInput%1000)%500)%100)/50;
					array2[2] = userInput/500;
					array2[3] = (userInput%500)/100;
					array2[4] = ((userInput%500)%100)/50;
					array3[3] = userInput/100;
					array3[4] = (userInput%100)/50;
				}
			}
		}
	}
	
	//Displaying the possible combinations
	cout<<"\n\n\n";
	cout<<"Your Amount LKR "<<userInput;
	cout<<"\n\n";
	cout<<"Combi.No\t5000\t1000\t500\t100\t50";
	cout<<"\n\n\t1\t"<<array1[0]<<"\t"<<array1[1]<<"\t"<<array1[2]<<"\t"<<array1[3]<<"\t"<<array1[4];	
	cout<<"\n\n\t2\t"<<array2[0]<<"\t"<<array2[1]<<"\t"<<array2[2]<<"\t"<<array2[3]<<"\t"<<array2[4];
	cout<<"\n\n\t3\t"<<array3[0]<<"\t"<<array3[1]<<"\t"<<array3[2]<<"\t"<<array3[3]<<"\t"<<array3[4];
	cout<<"\n\n";
	return 0;
}
