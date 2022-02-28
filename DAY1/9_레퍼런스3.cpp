struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};
//void foo(Rect rc) // call by value : 원본을 수정하지 않을것 이라는 약속
				  //				 복사본 생성에 따른 메모리 오버헤드가 있다.

//void foo(Rect& rc) // call by reference(참조) : 복사본에 대한 오버헤드가 없다.
				   //					하지만, 실수로 원본을 변경할수 있다.

void foo(const Rect& rc) // const reference : 인자값을 변경하지 않을때 사용하는
{							//				가장 좋은 방법.
//	rc = 10; // error
}
int main()
{
	Rect rc = { 1, 1, 10, 10 };

	foo(rc); // foo는 절대 rc의 값을 수정하면 안됩니다.!!

	// foo 호출뒤에도 rc 는 1, 1, 10, 10 을 유지 해야 합니다.
}

// 45page