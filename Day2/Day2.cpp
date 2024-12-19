#include <iostream>
using namespace std;
enum operators {
    Add = 1, Substract = 2, Divide = 3, Multiply = 4, Exit = 0
};
int main()
{
	operators op = Add;
	cout << "Hello dear c++ user, This is your own calculator!.\n Please choose one the following commands and JUST enter their refrenced number.\n";
	while (op != Exit) {
		/*cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n";*/
		cout << "\n1.Add 2.Substact 3.Divide 4.Multiply 0.Exit\n";
		try
		{
			int a;
			double b;
			int x, y;
			cin >> b;
			a = (int)b;
			if (a == b)
			{


				if (a == 0 || a == 1 || a == 2 || a == 3 || a == 4)
				{
					op = (operators)a;
					if (op == Exit)
					{
						cout << "Farewell!";
						break;
					}
					switch (op)
					{
					case Add:
						cout << "Add operator : Enter your two numbers.\n";
						cin >> x;
						cin >> y;
						cout << "= " << x + y << endl;
						break;
					case Substract:
						cout << "Substract operator : Enter your two numbers.\n";
						cin >> x;
						cin >> y;
						cout << "= " << x - y << " & " << "= " << y - x << endl;
						break;
					case Divide:
						cout << "Divide operator : Enter your two numbers.\n";
						cin >> x;
						cin >> y;
						if (x == 0 || y == 0) {
							cout << "No one can divide by zero!\n";
							continue;
						}
						else {
							cout << "= " << x / y << " & " << "= " << y / x << endl;
							break;
						}
					case Multiply:
						cout << "Multiply operator : Enter your two numbers.\n";
						cin >> x;
						cin >> y;
						cout << "= " << x * y;
						break;
					case Exit:
						cout << "Goodibye\n";
						break;
					default:
						break;
					}
					//}
				}
				else
				{
					cout << "Your entry number must be between 0-4!\n";
					continue;
				}
			}
			else
			{
				cout << "Bad input\n";
				continue;
			}
		}

		catch (...)
		{
			cout << "Bad input\n";
			continue;
		}
	}
	return 0;
}
