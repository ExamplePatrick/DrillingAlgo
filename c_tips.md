# C Tips

알고리즘 문제 관련 C 정보


### 배열 인덱싱은 size_t나 unsigned int로

보통 문자열이나 배열의 크기는 부호없는 정수로 정의된 unsigned int나 size_t로 사용함.


### size_t

size_t는 이론적으로 가능한 오브젝트의 최대 크기를 저장할 수 있는 타입이며 배열 익덱싱 및 루프 계산에 사용됨.
예전부터 사용되던 데이터 타입으로 컴퓨터 시스템들이 점점 발전함에 따라 변화와 상관없이 사용할 수 있도록 하여서
16bit 시스템인 경우 16bit 32bit 운영체제의 경우 32bit이다.


### Macro 함수 사용은 주의할 것!

define max(x, y) (x)>(y) ? (x) : (y) 이런 매크로 함수가 있을 경우
코드상에서 2 * max(3,2)라고 할 경우 "2 * (3) > (2) ? (3) : (2)"로 바뀌고 이는 "6>2 ? 3:2"이 되기 때문에 예상과 다르게 결과값이 나온다.



