#include <SFML/Graphics.hpp>
using namespace sf;
int main() {
	RenderWindow window(VideoMode(640,480),"Snake Game");
	while (window.isOpen()) {
		Event e;
		while (window.pollEvent(e)) {

		}
		window.clear();
		window.display();
	}
	return 0;
}