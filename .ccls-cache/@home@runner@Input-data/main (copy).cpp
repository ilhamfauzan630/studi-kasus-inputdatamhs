#include <iostream>
using namespace std;

class mahasiswa{
  public:
    void input();
    void output();
    void proses();
  private:
    string namdos, namas, namkul;
    int jumlahmatkul, nilai[20];
    float max, min, rata;
};

void mahasiswa::input(){
  cout << "Masukan nama dosen : ";
  cin >>namdos;
  cout << "Masukan nama mahasiswa : ";
  cin >>namas;
  cout << "Masukan jumlah mata kuliah : ";
  cin >> jumlahmatkul;
    for(int i = 0; i <= jumlahmatkul; i++){
      cout << "Masukan nama mata kuliah";
      cin >>namkul[i];
      }
    for (int i = 0; i >= jumlahmatkul; i++ ){
      cout << "Masukan nilai : ";
      cin >> nilai[i];
    }
}
void mahasiswa::proses(){
    for (int i = 0; i <= jumlahmatkul; i++) {
    if ( i == 1 ) {
      min = nilai[i];
      max = nilai[i];
    }else if ( min > nilai[i] ) {
               min = nilai[i];
    }else if ( max < nilai[i]) {
               max = nilai[i];
    }else {}
    }
}

void mahasiswa::output(){
  cout << "Nilai terkecil : " <<  min << endl;
  cout << "Nilai terbesar : " <<  max << endl;
}

int main (){
  mahasiswa mhs;

  mhs.input();
  mhs.proses();
  mhs.output();

  return 0;
 }
