// 인자값을 변경하지 않는 함수를 만들려고 합니다.
// 다음중 좋은 코드는 ?
void f1(int n) {}        // 1  ==> 답..
void f1(const int& n) {} // 2  ==> 절대 이렇게 하지 마세요
						 //      int 는 크기가 크지 않고, 1번이 2번보다	
						 //		 컴파일러 최적화가 잘됩니다.

// 정리
// 1. 인자의 값을 변경하는 경우(out parameter 라고 부릅니다)
//    => 포인터 와 참조 모두 좋습니다.
//    void inc(int* p) { ++(*p);}
//    void inc(int& r) { ++r;}

// 2. 인자의 값을 변경하지 않는 경우 ( in parameter 라고 합니다.)

//  A. primitive type 인 경우(int, char, double등) : call by value로 하세요
//								ex) void foo(int n) {}
//								ex) void foo(const int& n) {}  <== 이렇게 하지마세요

//  B. user define type 인 경우 : const reference 로 하세요
//								ex) void foo(const Rect& ) {}
//								ex) void foo(Rect ) {}  <<= 이렇게 하지 마세요