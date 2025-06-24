//Q-8
#include<iostream>
using namespace std;
class Batsman{
	int bcode,innings,notout,runs;
	string bname;
	float batavg;
	float calcavg(){
		batavg=(runs)/(innings-notout);
		return batavg;
	}
	public:
		Batsman():bcode(0),innings(0),notout(0),runs(0),bname("\0"),batavg(0.0f){
		}
    	void readdata(){
    		cout<<"Enter Bcode :"; cin>>bcode; cin.ignore();
    		cout<<"Enter Name of Batsman: "; getline(cin,bname);
    		cout<<"Enter Innings: "; cin>>innings;
    		cout<<"Enter Notouts: "; cin>>notout;
    		cout<<"Enter Runs: "; cin>>runs;
    	    calcavg();
    	}
    	void displaydata(){
    		cout<<"\nBcode :"<<bcode;
			cout<<"\nName :"<<bname<<"\nInnings :"<<innings<<"\nNotouts :"<<notout;
			cout<<"\nRuns :"<<runs<<"\nAverage :"<<calcavg();
		}
};
int main()
{ Batsman b;
 b.readdata();
 b.displaydata();
return 0;
}
