#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML Pieslice Animation");

    for (int i = 1; i < 20; i++) {
        sf::CircleShape pieSlice(50, 360);
        pieSlice.setPosition(200, 200);
        pieSlice.setFillColor(sf::Color::Yellow);

        window.clear();
        window.draw(pieSlice);
        window.display();

        sf::sleep(sf::milliseconds(200));
    }

    return 0;
}
