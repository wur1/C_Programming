#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(640, 480), "Animated Circles");
    window.setFramerateLimit(10);

    int i = 0;
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        sf::CircleShape circle1(20 + i);
        circle1.setFillColor(sf::Color::Transparent);
        circle1.setOutlineThickness(2);
        circle1.setOutlineColor(sf::Color::Red);
        circle1.setPosition(319 - circle1.getRadius(), 219 - i);

        sf::CircleShape circle2(20 + i);
        circle2.setFillColor(sf::Color::Transparent);
        circle2.setOutlineThickness(2);
        circle2.setOutlineColor(sf::Color::Red);
        circle2.setPosition(319 - circle2.getRadius(), 219 + i);

        sf::CircleShape circle3(20 + i);
        circle3.setFillColor(sf::Color::Transparent);
        circle3.setOutlineThickness(2);
        circle3.setOutlineColor(sf::Color::Red);
        circle3.setPosition(299 - i, 239 - circle3.getRadius());

        sf::CircleShape circle4(20 + i);
        circle4.setFillColor(sf::Color::Transparent);
        circle4.setOutlineThickness(2);
        circle4.setOutlineColor(sf::Color::Red);
        circle4.setPosition(339 + i, 239 - circle4.getRadius());

        window.draw(circle1);
        window.draw(circle2);
        window.draw(circle3);
        window.draw(circle4);

        window.display();

        sf::sleep(sf::milliseconds(100));

        i++;
    }

    return 0;
}
