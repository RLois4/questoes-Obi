#include <iostream>
using namespace std;

int q[3][3];

int main() {
  for(int i=0; i<3; i++) {
    for(int j=0; j<3; j++) {
      cin >> q[i][j];
    }
  }

  int certo = -1;

  if(q[1][1] == 0) {
    if(q[0][0] && q[2][2]) q[1][1] = (q[0][0] + q[2][2]) / 2;
    if(q[0][2] && q[2][0]) q[1][1] = (q[0][2] + q[2][0]) / 2;
    if(q[0][1] && q[2][1]) q[1][1] = (q[0][1] + q[2][1]) / 2;
    if(q[1][0] && q[1][2]) q[1][1] = (q[1][0] + q[1][2]) / 2;
  }

  for(int i=0; i<3; i++) {
    if(q[i][0] && q[i][1] && q[i][2]) {
      certo = q[i][0] + q[i][1] + q[i][2];
      break;
    }
  }
  if(certo == -1) {
    for(int i=0; i<3; i++) {
      if(q[0][i] && q[1][i] && q[2][i]) {
        certo = q[0][i] + q[1][i] + q[2][i];
        break;
      } 
    }
  }

  if(certo == -1) {
    if(q[0][0] && q[1][1] && q[2][2]) certo = q[0][0] + q[1][1] + q[2][2];
    else certo = q[0][2] + q[1][1] + q[2][0];
  }

  for(int i = 0; i<3; i++) {
    int z = 0, idx = -1;
    for(int j = 0; j<3; j++) {
      if(q[i][j] == 0) {
        idx = j;
        z++;
      }
    }
    if(z == 1) {
      q[i][idx] = certo - q[i][0] - q[i][1] - q[i][2];
    }
  }

  for(int j = 0; j<3; j++) {
    int z = 0, idx = -1;
    for(int i = 0; i<3; i++) {
      if(q[i][j] == 0) {
        idx = i;
        z++;
      }
    }
    if(z == 1) {
      q[idx][j] = certo - q[0][j] - q[1][j] - q[2][j];
    }
  }

  for(int i = 0; i<3; i++) {
    for(int j=0; j<2; j++) cout << q[i][j] << " ";
    cout << q[i][2] << " " << endl;
  }

}
