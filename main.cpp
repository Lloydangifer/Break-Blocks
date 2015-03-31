#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

int main(){
    RenderWindow main(VideoMode(800, 600), "Break::Blocks",Style::Fullscreen); //Create the main window
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
        main.clear();
        //Update the window
        main.display();
    }
    return EXIT_SUCCESS;
}
