#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <SFML/Audio.hpp>
using namespace sf;
using namespace std;
const int cellSize = 30;
const int X_coordinate = 800;
const int Y_coordinate = 600;
void move(Vector2f &direction, Event &event)
{
    if (event.type == Event::KeyPressed)
    {
        if (event.key.code == Keyboard::Up && direction.y != 5.f)
            direction = Vector2f(0.f, -5.f);
        if (event.key.code == Keyboard::Down && direction.y != -5.f)
            direction = Vector2f(0.f, +5.f);
        if (event.key.code == Keyboard::Right && direction.x != -5.f)
            direction = Vector2f(5.f, 0.f);
        if (event.key.code == Keyboard::Left && direction.x != 5.f)
            direction = Vector2f(-5.f, 0.f);
    }
}
void HandleEdges(vector<RectangleShape> &snakeBlock)
{
    for (int i = 0; i < snakeBlock.size(); i++)
    {
        if (snakeBlock[i].getPosition().x > X_coordinate)
            snakeBlock[i].setPosition(0, snakeBlock[i].getPosition().y);
        if (snakeBlock[i].getPosition().x < 0)
            snakeBlock[i].setPosition(X_coordinate, snakeBlock[i].getPosition().y);
        if (snakeBlock[i].getPosition().y > Y_coordinate)
            snakeBlock[i].setPosition(snakeBlock[i].getPosition().x, 0);
        if (snakeBlock[i].getPosition().y < 0)
            snakeBlock[i].setPosition(snakeBlock[i].getPosition().x, Y_coordinate);
    }
}
void turn(vector<RectangleShape> &snakeBlock, Vector2f &direction)
{
    for (int i = snakeBlock.size() - 1; i > 0; i--)
    {
        snakeBlock[i].setPosition(snakeBlock[i - 1].getPosition());
    }
    snakeBlock[0].move(direction);
}
void foodEat(float &dx, float &dy, int &Xposition, int &Yposition, CircleShape &food, vector<RectangleShape> &snakeBlock, RectangleShape &temp)
{
    if (abs(dx) < cellSize && abs(dy) < cellSize)
    {
        temp.setPosition((snakeBlock[snakeBlock.size() - 1].getPosition().x) - cellSize, (snakeBlock[snakeBlock.size() - 1].getPosition().y));
        snakeBlock.push_back(temp);
        Xposition = rand() % X_coordinate;
        Yposition = rand() % Y_coordinate;
        food.setPosition(Xposition, Yposition);
    }
}
void selfCollision(float &dx, float &dy, vector<RectangleShape> &snakeBlock, Window &window)
{
    for (int i = 1; i < snakeBlock.size(); i++)
    {
        dx = snakeBlock[0].getPosition().x - (snakeBlock[i].getPosition().x);
        dy = snakeBlock[0].getPosition().y - (snakeBlock[i].getPosition().y);
        if (abs(dx) < 5.f && abs(dy) < 5.f)
            window.close();
    }
}
int main()
{
    int Xposition, Yposition;
    srand(time(0));
    RenderWindow window(VideoMode(X_coordinate, Y_coordinate), "Snake game");
    Clock clock;
    CircleShape food(8.f);
    vector<RectangleShape> snakeBlock;
    RectangleShape temp(Vector2f(cellSize, cellSize));
    temp.setFillColor(Color::Red);
    temp.setOrigin(cellSize / 2, cellSize / 2);
    Xposition = rand() % (X_coordinate - 20) + 20;
    Yposition = rand() % (Y_coordinate - 20) + 20;
    food.setPosition(Xposition, Yposition);
    snakeBlock.push_back(temp);
    snakeBlock[0].setPosition(X_coordinate / 2, Y_coordinate / 2);
    window.setFramerateLimit(90);
    Vector2f direction(0.f, 0.f);
    Music bgMusic;
    if (!bgMusic.openFromFile("Music3.ogg"))
    {
        cout << "Error: Could not load music file!" << endl;
    }
    bgMusic.setVolume(50);
    bgMusic.setLoop(true);
    bgMusic.play();
    while (window.isOpen())
    {

        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
            move(direction, event);
        }
        HandleEdges(snakeBlock);
        Vector2f headpos = snakeBlock[0].getPosition();
        Vector2f foodpos = food.getPosition();
        float dx = headpos.x - foodpos.x;
        float dy = headpos.y - foodpos.y;
        foodEat(dx, dy, Xposition, Yposition, food, snakeBlock, temp);
        selfCollision(dx, dy, snakeBlock, window);
        Time elapsed = clock.getElapsedTime();

        if (elapsed.asSeconds() > 0.02f)
        {
            turn(snakeBlock, direction);
            clock.restart();
        }

        window.clear(Color::Black);
        window.draw(food);
        for (int i = 0; i < snakeBlock.size(); i++)
            window.draw(snakeBlock[i]);
        window.display();
    }
    return 0;
}