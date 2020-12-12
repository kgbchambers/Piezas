/**
 * Unit Tests for Piezas
**/

#include <gtest/gtest.h>
#include "Piezas.h"
 
class PiezasTest : public ::testing::Test
{
	protected:
		PiezasTest(){} //constructor runs before each test
		virtual ~PiezasTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(PiezasTest, sanityCheck)
{
	ASSERT_TRUE(true);
}


TEST(PiezasTest, empty_Test)
{
  Piezas board;
for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 4; j++)
    {
      ASSERT_EQ(board.pieceAt(i,j), Blank);
    }
  }
}


TEST(PiezasTest, piecePlacement)
{
	Piezas game;
	ASSERT_TRUE((game.pieceAt(0,0) == Blank));
}


TEST(PiezasTest, dropPieceTest)
{
  Piezas board;
  Piece piece;
  piece = board.dropPiece(0);
  ASSERT_EQ(piece, X);
}


TEST(PiezasTest, PositiveOutOfBoundsPlacement)
{
  Piezas game;
  ASSERT_TRUE((game.pieceAt(10,15) == Invalid));
}


TEST(PiezasTest, NegativeOutOfBoundsPPlacement)
{
  Piezas game;
  ASSERT_FALSE((game.pieceAt(-1,-1) == Blank));
}


