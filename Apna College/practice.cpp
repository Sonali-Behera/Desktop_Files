# include <iostream>
using namespace std;

void pattern(int r, int i , int j, int cnt){

    if(i > r)
        return;

    if(j <= i){
        cout << cnt << " ";
        pattern(r, i, j + 1, cnt + 1);
    }else{
        cout << endl;
        pattern(r, i + 1, 1, cnt);
    }

}

int main(){

    pattern(5, 1, 1, 1);

    return 0;
}