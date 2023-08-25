#include<array>
#include<string>

using namespace std;
class tic
{
public:
void addX(int row,int column);
void printBoard();

private:

string dimArr[3][3]={
{"⬜","⬜","⬜"},
{"⬜","⬜","⬜"},
{"⬜","⬜","⬜"}};
int score;
};