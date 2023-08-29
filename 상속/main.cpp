#include <SFML/Graphics.hpp>
using namespace sf;
class Entity {
public:
	//거의 99.99%이상 클래스를 매개변수로 할 때는 주소값으로 받자
	//메모리 용량 및 call by value 및 매개변수생성자 발생을 막기 위함
	Entity(int life, RectangleShape* sprite)
		:life_(life), sprite_(sprite) {

	}
	~Entity() {}
private:
	int life;
	RectangleShape sprite_;

};
int main(void) {
	RenderWindow window(VideoMode(1000, 800), "Sangsok");
	while (window.isOpen())
	{
		Event e;
		while (window.pollEvent(e))
		{
			// 윈도우의 x를 눌렀을 때 창이 닫아지도록
			if (e.type == Event::Closed)
				window.close();
		}
	}
	return 0;
}