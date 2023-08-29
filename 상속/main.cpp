#include <SFML/Graphics.hpp>
using namespace sf;
class Entity {
public:
	//���� 99.99%�̻� Ŭ������ �Ű������� �� ���� �ּҰ����� ����
	//�޸� �뷮 �� call by value �� �Ű����������� �߻��� ���� ����
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
			// �������� x�� ������ �� â�� �ݾ�������
			if (e.type == Event::Closed)
				window.close();
		}
	}
	return 0;
}