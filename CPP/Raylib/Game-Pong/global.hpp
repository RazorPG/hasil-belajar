#ifndef __GLOBAL
#define __GLOBAL
#include <raylib.h>

#define screenWidth 1280
#define screenHeight 800

extern Color red;
extern Color green;
extern Color black;
extern Color gray;

inline Color red = Color{244, 49, 91, 255};
inline Color green = Color{122, 244, 221, 255};
inline Color black = Color{45, 45, 45, 255};
inline Color gray = Color{137, 137, 137, 255};

extern int playerScore;
extern int computerScore;
extern double delay;

// Ball *ball = new Ball(screenWidth / 2, screenHeight / 2, 20, 11, 11);
// Paddle *player = new Paddle(25, 120, 10);
// ComPaddle *computer = new ComPaddle(25, 120, 10);

#endif // GLOBAL
