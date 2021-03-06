///
/// \brief contains structures used for both pacman, and ghost sprites as well as a structure to hold score
/// \author Jack Diver
/// \version 1.0


#ifndef PACMAN_H
#define PACMAN_H

/// @brief score structure holds all individual sources of score
typedef struct
{
  //-------------------------------------------------------------------------------
  /// @brief holds the score gained from pacman eating pills
  //-------------------------------------------------------------------------------
  int pills;
  //-------------------------------------------------------------------------------
  /// @brief holds the score gained from pacman eating ghosts
  //-------------------------------------------------------------------------------
  int ghosts;
  //-------------------------------------------------------------------------------
  /// @brief holds the score from all previous levels
  //-------------------------------------------------------------------------------
  int lastLevel;
  //-------------------------------------------------------------------------------
  /// @brief holds the total score
  //-------------------------------------------------------------------------------
  int total;
}score;

/// @brief pacman structure holds the position, directions and alive status
typedef struct
{
  //-------------------------------------------------------------------------------
  /// @brief holds the x co-ordinate of the sprite
  //-------------------------------------------------------------------------------
  int x;
  //-------------------------------------------------------------------------------
  /// @brief holds the y co-ordinate of the sprite
  //-------------------------------------------------------------------------------
  int y;
  //-------------------------------------------------------------------------------
  /// @brief holds the current direction of the sprite
  //-------------------------------------------------------------------------------
  int dir;
  //-------------------------------------------------------------------------------
  /// @brief holds the temp direction of the sprite
  //-------------------------------------------------------------------------------
  int temp;
  //-------------------------------------------------------------------------------
  /// @brief holds the last direction of the sprite
  //-------------------------------------------------------------------------------
  int last;
  //-------------------------------------------------------------------------------
  /// @brief the alive status of the sprite
  //-------------------------------------------------------------------------------
  bool alive;
}pacman;

/// @brief ghost structure holds all information for ghost functionality
typedef struct
{
  //-------------------------------------------------------------------------------
  /// @brief holds the type of ghost
  //-------------------------------------------------------------------------------
  int type;
  //-------------------------------------------------------------------------------
  /// @brief holds the x co-ordinate of the sprite
  //-------------------------------------------------------------------------------
  int x;
  //-------------------------------------------------------------------------------
  /// @brief holds the y co-ordinate of the sprite
  //-------------------------------------------------------------------------------
  int y;
  //-------------------------------------------------------------------------------
  /// @brief holds the current direction of the sprite
  //-------------------------------------------------------------------------------
  int dir;
  //-------------------------------------------------------------------------------
  /// @brief tells us whether the ghost is allowed through the gate
  //-------------------------------------------------------------------------------
  bool gate;
  //-------------------------------------------------------------------------------
  /// @brief tells us whether the sprite is allowed to turn
  //-------------------------------------------------------------------------------
  bool turn;
  //-------------------------------------------------------------------------------
  /// @brief holds the previous x co-ordinate of the sprite
  //-------------------------------------------------------------------------------
  int tempX;
  //-------------------------------------------------------------------------------
  /// @brief holds the previous Y co-ordinate of the sprite
  //-------------------------------------------------------------------------------
  int tempY;
  //-------------------------------------------------------------------------------
  /// @brief holds the scatter x co-ordinate of the ghost
  //-------------------------------------------------------------------------------
  int scatX;
  //-------------------------------------------------------------------------------
  /// @brief holds the scatter Y co-ordinate of the ghost
  //-------------------------------------------------------------------------------
  int scatY;
  //-------------------------------------------------------------------------------
  /// @brief the frightened status of the sprite
  //-------------------------------------------------------------------------------
  bool frightened;
  //-------------------------------------------------------------------------------
  /// @brief the alive status of the sprite
  //-------------------------------------------------------------------------------
  bool alive;
  //-------------------------------------------------------------------------------
  /// @brief tells the sprite to loop its current path
  //-------------------------------------------------------------------------------
  bool loop;
  //-------------------------------------------------------------------------------
  /// @brief a pointer to the move function of the ghost
  //-------------------------------------------------------------------------------
  void(*move)(void);
}ghost;

#endif // PACMAN_H
