#include <iostream>
#include <vector>
using namespace std;
class Member{
	private:
		string name;
		int age;
		bool attendance;
	public:
		Member(string name, int age){
			this->name = name;
			this->age = age;
			this->attendance=false;
		
		}
	string getName(){
		return name;
	}
	int getAge(){
		return age;
	}
	bool getAttendance(){
		return attendance;
	}
	
	setAttendance(bool attendance){
		this-> attendance=attendance;
	}
};

class Gym{
	private:
		vector<Member> ve;
	public:
		add(string name, int age){
			Member member(name, age);
			ve.push_back(member);
			cout<<"Member Added"<<endl<<endl;
		}
	markAttendance(string name){
		for(int i=0; i<ve.size(); i++){
			if(ve[i].getName()==name){
			ve[i].setAttendance(true);
	cout<<"Attendance marked for member: "<<ve[i].getName()<<endl;
			}
		}
	}
	
	fees(){
		int total=0;
		for(int i=0; i<ve.size(); i++){
			if(ve[i].getAttendance()){
		int fees= ve[i].getAge()>20? 200 : 100;
		total+= fees;
			}
		}
		cout<<"Total Fees: "<<total<<endl<<endl;
	}
};
int main(){
	Gym gym;
	cout<<"***** Gym Management *****"<<endl;
	int value;
	while(true){
		cout<<"1. for add member: "<<endl;
		cout<<"2. for mark attendance: "<<endl;
		cout<<"3. for Total fees: "<<endl;
		cout<<"0. for exit: "<<endl;
		cout<<"Enter choice: "; cin>>value;
		
		if(value==1){system("cls");
			string name; int age;
			cout<<"Enter name: "; cin>>name;
			cout<<"Enter age: "; cin>>age;
			gym.add(name, age);
		}
	else if(value==2){system("cls");
		string name;
		cout<<"Enter name: "; cin>>name;
		gym.markAttendance(name);
	}
	else if(value==3){system("cls");
		gym.fees();
	}
	else if(value==0){
		exit(0);
	}
	else{	system("cls");
		cout<<"Invalid input"<<endl<<endl;
	}
	}
}
