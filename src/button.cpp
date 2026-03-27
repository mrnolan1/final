// /**
//  * @file button.cpp
//  * @author Matthew Nolan, Isaiah Preston, Justin Rendon
//  * @brief
//  * @date 
//  */
// #include "../hdr/button.hpp"
// #include <SFML/Graphics.hpp>
// /**
//  * @brief Default constructor
//  * 
//  */
// Button::Button()
// {
//     //set texture to button.png
//     if (!mTexture.loadFromFile("button.png"))
//     {
//         std::cout<<"Error opening file\n";
//         exit(1);
//     }

//     //set font to college.ttf
//     if (!mFont.loadFromFile("college.ttf"))
//     {
//         std::cout<<"Error opening file\n";
//         exit(2);
//     }

//     sf::Vector2u imageSize = mTexture.getSize();
//     mButton.setTexture(mTexture);
//     mButton.setOrigin({imageSize.x/2, imageSize.y/2});
//     mButtonColor = sf::Color::White;
//     mButton.setColor(mButtonColor);
//     mPosition = {300,100};
//     mButton.setPosition(mPosition.x, mPosition.y);
//     mButton.setScale(1, 1);

//     mText.setFont(mFont);
//     mText.setString("Push me!");
//     mText.setCharacterSize(mButton.getGlobalBounds().height/2);
//     mText.setOrigin(mText.getGlobalBounds().width/2, mText.getGlobalBounds().height/2);
//     mText.setPosition(mPosition.x, mPosition.y-(mButton.getGlobalBounds().width/4)/4);

//     mTextNormal = sf::Color::Green;
//     mTextHover = sf::Color::Red;

//     mText.setFillColor(mTextNormal);
//     mBtnState = normal;
// }

// /**
//  * @brief Constructor
//  * 
//  * @param s The text on the button
//  * @param position The position of the button
//  * @param size The size of the button
//  * @param color The color of the button
//  */
// Button::Button(std::string s, sf::Vector2f position, sf::Vector2f size, sf::Color color)
// {
//     //set texture to button.png
//     if (!mTexture.loadFromFile("button.png"))
//     {
//         std::cout<<"Error opening file\n";
//         exit(1);
//     }

//     //set font to college.ttf
//     if (!mFont.loadFromFile("college.ttf"))
//     {
//         std::cout<<"Error opening file\n";
//         exit(2);
//     }

//     sf::Vector2u imageSize = mTexture.getSize();
//     mButton.setTexture(mTexture);
//     mButton.setOrigin({imageSize.x/2, imageSize.y/2});
//     mButtonColor = color;
//     mButton.setColor(mButtonColor);
//     mPosition = position;
//     mButton.setPosition(mPosition.x, mPosition.y);
//     mButton.setScale(size.x/imageSize.x, size.y/imageSize.y);

//     mText.setFont(mFont);
//     mText.setString(s);
//     mText.setCharacterSize(mButton.getGlobalBounds().height/2);
//     mText.setOrigin(mText.getGlobalBounds().width/2, mText.getGlobalBounds().height/2);
//     mText.setPosition(mPosition.x, mPosition.y-(mButton.getGlobalBounds().width/4)/4);

//     mTextNormal = sf::Color::Green;
//     mTextHover = sf::Color::Red;

//     mText.setFillColor(mTextNormal);
//     mBtnState = normal;

// }

// /**
//  * @brief Set the position of the button
//  * 
//  * @param position
//  */
// void Button::setPosition(sf::Vector2f position)
// {
//     mPosition.x = position.x;
//     mPosition.y = position.y;
//     sf::Vector2u imageSize = mTexture.getSize();
//     mButton.setOrigin({imageSize.x/2, imageSize.y/2});
//     mButton.setPosition(mPosition.x, mPosition.y);
//     mText.setOrigin(mText.getGlobalBounds().width/2, mText.getGlobalBounds().height/2);
//     mText.setPosition(mPosition.x+35, mPosition.y+15);
// }

// /**
//  * @brief Set the size of the button
//  * 
//  * @param size 
//  */
// void Button::setSize(sf::Vector2f  size)
// {
//     sf::Vector2u imageSize = mTexture.getSize();
//     mButton.setScale(size.x/imageSize.x, size.y/imageSize.y);
//     mText.setCharacterSize(mButton.getGlobalBounds().height/2);
// }

// /**
//  * @brief Set the color of the button
//  * 
//  * @param btnColor 
//  */
// void Button::setColor(sf::Color btnColor)
// {
//     mButton.setColor(btnColor);
// }

// /**
//  * @brief Set the text on the button
//  * 
//  * @param s 
//  */
// void Button::setText(std::string s)
// {
//     mText.setString(s);
// }
// /**
//  * @brief Update the screen when you hover over and click the button
//  * 
//  * @param e The event 
//  * @param window The window
//  */
// void Button::update(sf::Event& e, sf::RenderWindow& window)
// {
   
        
//     if (e.type == sf::Event::Closed)
//         window.close();
    
//     //get position of the mouse
//     //sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
//     sf::Vector2i mPos = sf::Mouse::getPosition(window);
//     sf::Vector2f mousePosition = window.mapPixelToCoords(mPos);
//     bool mouseInButton =    mousePosition.x >= mButton.getPosition().x - mButton.getGlobalBounds().width/2
//                             && mousePosition.x <= mButton.getPosition().x + mButton.getGlobalBounds().width/2
//                             && mousePosition.y >= mButton.getPosition().y - mButton.getGlobalBounds().height/2
//                             && mousePosition.y <= mButton.getPosition().y + mButton.getGlobalBounds().height/2;
//     if(e.type == sf::Event::MouseMoved)
//     {
//         if(mouseInButton)
//         {
//             mText.setFillColor(mTextHover);
//         }
//         else
//         {
//             mText.setFillColor(mTextNormal);
//         }
//     }
//     if (e.type == sf::Event::MouseButtonPressed)
//     {
//         if(e.mouseButton.button==sf::Mouse::Left)
//         {
//             if(mouseInButton)
//             {
//                 mButton.setRotation(180);
//             }
//             else
//             {
//                 mButton.setRotation(0);
//             }
//         }
//     }
//     if (e.type == sf::Event::MouseButtonReleased)
//     {
//         if (e.mouseButton.button==sf::Mouse::Left)
//         {
//             if(mouseInButton)
//             {
//                 mText.setFillColor(mTextHover);
//                 mButton.setRotation(0);
//             }
//             else
//             {
//                 mText.setFillColor(mTextNormal);
//                 mButton.setRotation(0);
//             }
//         }
//     }
// }
    
// /**
//  * @brief Draw the button
//  * 
//  * @param target The window
//  * @param states 
//  */
// void Button::draw(sf::RenderTarget& target,sf::RenderStates states) const
// {
//     target.draw(mButton, states);
//     target.draw(mText, states);
// }