#include <SFML/Graphics.hpp>
#include "include/Bat.hpp"
#include "include/Ball.hpp"
#include "include/Brick.hpp"
#include "include/Global.hpp"

using namespace std;
using namespace sf;

int main(){
    RenderWindow main(VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Break::Blocks",Style::Fullscreen); //Create the main window
    Bat bat;
    Ball ball;
    Brick brick[NB_BRICKS];
    int x=20;
    int y=50;
    for(int i=0;i<NB_BRICKS;i++){
        brick[i].setPosition(Vector2f(x,y));
        x+=50;
        if((i==14) || (i==29) || (i==44) || (i==59)){
            y+=20;
            x=20;
        }
    }

    while(main.isOpen()){ //Start the game loop
        Event event;
        while(main.pollEvent(event)){ //Process events
            switch(event.type){
                case Event::Closed: //Close window : exit
                    main.close();
                break;
                case Event::KeyPressed:
                    switch(event.key.code){
                        case Keyboard::Escape:
                            main.close();
                        break;
                        default:break;
                    }
                break;
                default:break;
            }
        }
        //Clear screen
        main.clear(Color::White);
        //Draw the window
        main.draw(bat.getForm());
        main.draw(ball.getForm());
        for(int i=0;i<NB_BRICKS;i++){
            main.draw(brick[i].getForm());
        }
        //Update the window
        bat.update();
        ball.update();
        main.display();
    }
    return EXIT_SUCCESS;
}
