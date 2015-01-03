#include "window.h"

/* Main function that creates the window of our application
 */
 int main(int argc, char *argv[])
 {
     QApplication app(argc, argv);
     Window window;
     window.show();

     return app.exec();
 }
