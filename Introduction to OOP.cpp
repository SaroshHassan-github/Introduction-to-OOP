//intro to oop
//lec 1 practice 
#include <iostream>
using namespace std;

	struct quiz {
	private:
		float numbers;
		string grade;
	
	public:
		void grading(float numbers) {
			if ((numbers > 0) and (numbers < 10))
				grade = "F";
			else
				grade = "A";
		}
		void display(){
			cout << grade;
		}
	};
	int main() {
		quiz quiz1;
		float numbers;
		cin >> numbers;
		quiz1.grading(numbers);
		quiz1.display();
		
}