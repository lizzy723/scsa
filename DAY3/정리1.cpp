// 정리1.

// class 문법 정리
// 1. 접근 지정자 : private vs public, 캡슐화(encapsulation)
// 2. 생성자, 소멸자
// 3. 멤버 초기화 리스트 : Point(int a, int b) : x(a), y(b) {}
// 4. static member data
//    static member function   ==> Date 클래스 예제
// 5. const member function    ==> 상수 객체는 상수 멤버 함수만 호출가능
//								   모든 getter 는 상수 멤버 함수로 만들어야 한다.

// 6. this ==> 멤버 함수의 호출 원리   p1.set(10, 20) ==> set(&p1, 10, 20)

// 7. 복사 생성자- 내일
//--------------------------------------------------------------
// 상속!! 
// 1. 접근 지정자 : private, protected, public

// 2. 상속과 생성자 호출 원리. 기반 클래스에 디폴트 생성자가 없을때 주의!!

// 3. upcasting <== 결국 객체지향 디자인의 핵심
//    Shape* 는 모든 도형을 가리킬수 있다. 
//    std::vector<Shape*> !!

// 4. 모든 도형의 공통의 특징은 "Shape" 에 있어야.. 

// 5. 가상함수 개념, override 키워드!

// 6. 추상 클래스와 순수 가상함수
class Shape
{
public:
	virtual void draw() = 0; // 이렇게 하는 이유!!!
};

// 7. 메뉴 예제 잘 생각해 보세요
