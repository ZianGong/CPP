#include <iostream>
using namespace std;
class Student
{
public:
	void scoretotalcount(double s);
	static double sum();
	static double average();
private:
	double score;
	static double total;
	static double count;
};
void Student::scoretotalcount(double s)
{
	score = s;
	total = total + score;
	count++;
}
double Student::sum()
{
	return total;
}
double Student::average()
{
	return total / count;
}
double Student::total = 0;
double Student::count = 0;
int main()
{
	Student student;
	int n, i;
	cout << "学生人数：";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		double s;
		cout << "请输入第" << i << "个学生分数：";
		cin >> s;
		student.scoretotalcount(s);
	}
	cout << "学生总分：" << student.sum() << endl;
	cout << "学生平均分：" << student.average() << endl;
}
