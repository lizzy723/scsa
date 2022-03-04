// 1_friend - 75page
class Bike
{
	int gear;
public:

	// friend 함수 : 멤버 함수는 아니지만 private 영역에 접근하게 해달라는 문법
	// 1. 멤버로 하면 되지 않나요 ?? => 멤버로 할수 없을때가 있습니다.(연산자재정의)

	// 2. setGear(), getGear()만들면 되지 않나요 ?
	//   => setGear(), getGear() 를 만드는 것은 모든 곳에서 접근 가능하게 하는것
	//   => friend 는 함수 한곳에서만 접근 가능하게.

	friend void foo();
};

void foo()
{
	Bike b;
	b.gear = 10; // ok 
}

int main()
{
	foo();
}