#include <iostream>
#include <vector>

using namespace std;

int main() {
  string firstKing, firstStone, move;
  char kx, ky, sx, sy;
  int cnt;

  cin >> firstKing >> firstStone >> cnt;
  kx = firstKing[0];
  ky = firstKing[1];
  sx = firstStone[0];
  sy = firstStone[1];

  while (cnt--) {
    int dx = 0;
    int dy = 0;
    cin >> move;

    if(move.front() ==  'R'){
      dx = 1;
    }
    if(move.front() ==  'L'){
      dx = -1;
    }
    if(move.back() == 'B'){
      dy = -1;
    }
    if(move.back() == 'T'){
      dy = 1;
    }

    if((kx+dx) == sx && (ky+dy) == sy && (sx+dx)<='H' && (sx+dx)>='A' && (sy+dy) <= '8' && (sy+dy) >= '1'){
      kx+=dx;
      ky+=dy;
      sx+=dx;
      sy+=dy;
    }else if(((kx+dx) != sx || (ky+dy) != sy) && (kx+dx) <= 'H' && (kx+dx) >= 'A' && (ky+dy) <= '8' && (ky+dy) >= '1'){
      kx+=dx;
      ky+=dy;
    }
  }

  cout << kx << ky << "\n";
  cout << sx << sy;
}