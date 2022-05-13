#include <iostream>
using namespace std;

class mahasiswa{
  public:
    void input();
    void output();
    void proses();
  private:
    string namdos, namas, namkul[20];
    int jumlahmatkul, nilai[20], total, hasil = 0;
    float max, min, rata[20];
};

void mahasiswa::input(){
  cout << "Masukan nama dosen : ";
  cin >>namdos;
  cout << "Masukan nama mahasiswa : ";
  cin >>namas;
  cout << "Masukan jumlah mata kuliah : ";
  cin >> jumlahmatkul;
  cout << "============================="<<endl;
  
    for(int i = 1; i <= jumlahmatkul; i++){
      cout << "Masukan nama mata kuliah : ";
      cin >> namkul[i];
      cout << "Masukan nilai : ";
      cin >> nilai[i];
      cout << "========================="<<endl;
   }
    
}
void mahasiswa::proses(){
  total = 0;
    for (int i = 0; i <= jumlahmatkul; i++) {
    if ( i == 1 ) {
      min = nilai[i];
      max = nilai[i];
    }else if ( min > nilai[i] ) {
               min = nilai[i];
    }else if ( max < nilai[i]) {
               max = nilai[i];
    }else{}
    }

    for(int i=1; i <= jumlahmatkul; i++){
      total = total + nilai[i];
    } 
      hasil = total/jumlahmatkul;
}

void mahasiswa::output(){
  cout << "==================="<<endl;
  cout << "======OUTPUT======="<<endl;
  cout << "Nama Dosen : " <<namdos <<endl;
  cout << "Nama Mahasiswa : " << namas <<endl;
  cout << "-------------------"<<endl;
  for (int i = 1; i <= jumlahmatkul; i++){
    cout << "Nama Mata Kuliah = " << namkul[i] <<"("<<nilai[i]<<")"<<endl;
    cout << "----"<<endl;
  }
  cout << "-------------------"<<endl;
  cout << "Nilai terkecil  : " <<  min << endl;
  cout << "Nilai terbesar  : " <<  max << endl;
  cout << "Nilai Rata-Rata : " <<  hasil << endl;
}

int main (){
  mahasiswa mhs;

  mhs.input();
  mhs.proses();
  mhs.output();

  return 0;
 }
