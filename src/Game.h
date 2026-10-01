
#ifndef SFML_GAME_H
#define SFML_GAME_H

#include <SFML/Graphics.hpp>
enum Gamestate 
{
	MENU,
	LEVEL,
	GAMEOVER,
	WIN
};

class Game
{
 public:
  Game(sf::RenderWindow& window);
  ~Game();
  bool init();
  void update(float dt);
  void render();
  void mouseButtonPressed(const sf::Event::MouseButtonPressed* event);
  void mouseButtonReleased(const sf::Event::MouseButtonReleased* event);
  void keyPressed(const sf::Event::KeyPressed* event);
  void keyReleased(const sf::Event::KeyReleased* event);

private:
  sf::RenderWindow& window;
  sf::Font font{ "../Data/Fonts/open-sans/OpenSans-BoldItalic.ttf" };
  sf::Text Title{font, "Whack a mole!"};
  sf::Texture background_texture;
  sf::Sprite background = sf::Sprite(background_texture);
  sf::Texture bird1_texture;
  sf::Sprite bird1 = sf::Sprite(bird1_texture);
  
  Gamestate gamestate = MENU;
};

#endif // SFML_GAME_H
