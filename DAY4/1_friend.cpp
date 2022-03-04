// 1_friend

class Bike
{
	int gear;
public:
};

void foo()
{
	Bike b;
	b.gear = 10;
}

int main()
{
	foo();
}