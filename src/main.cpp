// //this will be for the main file
// #include "../hdr/button.hpp"
// #include <SFML/Graphics.hpp>
// int main()
// {
//     sf::RenderWindow window(sf::VideoMode(640, 480), "Button Test");
//     window.setPosition({50,50});
//     Button playButton;

//     while (window.isOpen())
//    {
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//            {
//                 window.close();
//            }
//            playButton.update(event, window);
//        }

//        window.clear();
//        window.draw(playButton);
//        window.display();
//    }
// }