#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;

class Name{
	public:
		string name;
		int userchoice;
		Name(){
			
			cout<<"\n\n\t\t\t\t\t*--*--*--*--*--*--*--*--*--*\n";
			cout<<"\n\t\t\t\t\t            Name            ";
			cout<<"\n\n\t\t\t\t\t*--*--*--*--*--*--*--*--*--*\n";
			
			
			cout<<"\n\t\t\t\t\tEnter your name : ";
			cin>>name;
			
			}
};
class B:public Name{
	public:
		int i,n;
		
		rounds()
		{
		    cout<<"\n\n\t\t\t\t\t*--*--*--*--*--*--*--*--*--*\n";
			cout<<"\n\t\t\t\t\t            Round            ";
			cout<<"\n\n\t\t\t\t\t*--*--*--*--*--*--*--*--*--*\n";
			
			cout<<"\t\t\t\t\t"<<name<<" How many rounds do you want to play? : ";
            cin >>n;
    }
        game()
        {
        	
        	cout<<"\n\n\t\t\t\t\t*--*--*--*--*--*--*--*--*--*\n";
			cout<<"\n\t\t\t\t\t            Game            ";
			cout<<"\n\n\t\t\t\t\t*--*--*--*--*--*--*--*--*--*\n";
		
            for(i=0;i<n;++i)
            {	
            	cout<<"\n\n\t\t\t\t\tRound : "<<i+1<<"/"<<n;
            	
            		cout<<"\n\n\t\t\t\t\t-*your score : ";
                 	cout<<"\n\t\t\t\t\t-*computer score : \n";
            	
            	cout<<"\n\t\t\t\t\t1) Rock\n\n\t\t\t\t\t2) Paper\n\n\t\t\t\t\t3) Scissor\n\n\t\t\t\t\t-> ssEnter your choice : ";
		        cin>>userchoice;
		        
			int computerchoice;
		    
		    srand(time(0));
		    computerchoice=rand()%3+1; 
		    cout<<"\n\t\t\t\t\t-> computer's choice : "<<computerchoice;
		    
	 if (userchoice == computerchoice) { 
        cout<<"\n\n\t\t\t\t\tResult : Tie"; 
    } 
    else if (userchoice == 3 && computerchoice == 2) { 
        cout<<"\n\n\t\t\t\t\tResult : you win"; 
    } 
    else if (userchoice == 3 && computerchoice == 1) { 
        cout<<"\n\n\t\t\t\t\tResult : comouter win"; 
    } 
    else if (userchoice == 2 && computerchoice == 1) { 
        cout<<"\n\n\t\t\t\t\tResult : you win"; 
    } 
    else if (userchoice == 2 && computerchoice == 3) { 
        cout<<"\n\n\t\t\t\t\tResult : computer win";
    } 
    else if (userchoice == 1 && computerchoice == 2) { 
        cout<<"\n\n\t\t\t\t\tResult : computer win"; 
    } 
    else if (userchoice == 1 && computerchoice == 3) { 
        cout<<"\n\n\t\t\t\t\tResult : you win";
    }
	}
		}	
};

int main()
{
	B obj;
	obj.rounds();	
	obj.game();
}
