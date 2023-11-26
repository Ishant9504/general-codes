#include <SFML/Graphics.hpp>
#include<iostream>
#include"Animation.h"


int main()

{   //Creating a window
    sf::RenderWindow window(sf::VideoMode(512,512),"SFML TUTORIAL",sf::Style::Default);
    sf::CircleShape player(20);
    player.setPosition(256.0, 256.0);
    sf::Texture playertexture;
    playertexture.loadFromFile("Pacman16.png");
    player.setTexture(&playertexture);

    Animation animation(&playertexture,sf::Vector2u(6,4),0.3f);

    float deltaTime = 0.0f;
    sf::Clock clock;
    /*    
    sf::Vector2u textureSize=playertexture.getSize();
    textureSize.x /= 6;
    textureSize.y /= 4;
    player.setTextureRect(sf::IntRect(textureSize.x * 1, textureSize.y * 0, textureSize.x, textureSize.y));
    */

    //GAME LOOP
    while (window.isOpen()) {
        deltaTime=clock.restart().asSeconds();
        sf::Event evnt;
        
        //So that we can interact with our window while it's open
       
        while (window.pollEvent(evnt)) {
            switch (evnt.type) {
            case sf::Event::Closed:
                window.close();
                break;
            case sf::Event::Resized:
                std::cout << "New window width" << evnt.size.width << "New window height" << evnt.size.height<<std::endl;
                break;
            /*case sf::Event::TextEntered:
                if (evnt.text.unicode < 128) {
                    std::cout<< (char)evnt.text.unicode;
                }
                break;
            */
            }
            if (evnt.type == evnt.Closed) {//So that we can close the opened window
                window.close();
            }
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)){
            player.move(-0.1f,0.0f);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
            player.move(0.1f, 0.0f);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
            player.move(0.0f, -0.1f);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
            player.move(0.0f,0.1f);
        }
        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
            sf::Vector2i mousepos = sf::Mouse::getPosition(window);
            player.setPosition(static_cast<float>(mousepos.x), static_cast<float>(mousepos.y));
        }
        animation.update(0,deltaTime);
        player.setTextureRect(animation.uvRect);

        window.clear(sf::Color::Black);
        window.draw(player);
        window.display();
    }
    return 0;
}