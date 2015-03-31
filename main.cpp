#include <SFML/Graphics.hpp>
#include "include/Bat.hpp"

using namespace std;
using namespace sf;

int main(){
    RenderWindow main(VideoMode(800, 600), "Break::Blocks",Style::Fullscreen); //Create the main window
    Bat bat;
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
        //Update the window
        bat.update();
        main.display();
    }
    return EXIT_SUCCESS;
}
