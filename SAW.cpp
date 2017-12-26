#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;


 class atm{
  public:
   atm();
   int login();
   int display();
         
  private:
   int coba = 0,pilih,no;
   char pass[100],yes;
   float s,saldo,Transfer,ambil;
 };
 

 atm::atm(){
  cout<<"===============================================================\n"<<endl;
  cout<<"  Selamat Datang di ATM BNI\n"<<endl;
  cout<<"==============================================================="<<endl;
 }
 
 int atm::login(){
  
 do{
  cout << "  Silahkan Masukkan Pin Anda : ";
    cin >> pass;
  if (strcmp(pass, "151097") != 0)
  {  
   
   cout<<"  Pin Anda Salah"<<endl;
   cout<<"---------------------------------------------------------------"<<endl;
   coba++;
  }
  
  else
  {
   cout << "  Anda berhasil Login" << endl;
   
   break;
  }

  if (coba == 3)
  {   cout<<"==============================================================="<<endl;
   cout << "  Kartu Anda diblokir" << endl;
   cout<<"  Mohon maaf tolong segera hubungi Teler anda!"<<endl;
   cout<<"==============================================================="<<endl;
   break;
   
   
         
  }

 } while (strcmp(pass, "15101997") != 0);
     
      return coba;

 }

 
 int atm::display(){
  
  if(coba==1){
   cout<<"==============================================================="<<endl; 
   cout<<"  Terima Kasih"<<endl;
   cout<<"==============================================================="<<endl; 
  }

    else{
  
  atas:
  cout<<"==============================================================="<<endl;

  cout<<"  1. Cek Saldo "<<endl;

  cout<<"  2. Penarikan Uang Tunai"<<endl;

  cout<<"  3. Transfer Uang"<<endl;
  cout<<"==============================================================="<<endl;

  cout<<"  Masukan pilihan anda : ";
  cin>>pilih;
  cout<<"==============================================================="<<endl;


  if (pilih==1)

  {
  cout<<"==============================================================="<<endl;
  cout <<"  Saldo anda Rp.5.000.000"<<endl;
  cout<<"==============================================================="<<endl;
  }

  else if (pilih==2)

  {   
  cout<<"  Masukan nilai uang : Rp.";

  cin>>ambil;

  s=1000000-ambil;

  cout<<"  Sisa saldo anda Rp."<<s<<endl;
        cout<<"===============================================================\n"<<endl;
  }

  else if (pilih==3)

  {cout<<"  Masukan no rekening tujuan :";

  cin>>no;

  cout<<"  Masukan jumlah uang :Rp.";

  cin>>Transfer;

  s=1000000-Transfer;
  
  cout<<"  No rek : "<<no<<endl;
 
  cout<<"  Jumlah transfer Rp. "<<Transfer<<endl;

  cout<<"==============================================================="<<endl;

  cout<<"  Sisa saldo anda Rp. "<<s<<endl;
  cout<<"==============================================================="<<endl; 
  }
  
  
 
  cout<<"   Anda Ingin Mencoba Lagi ????"<<endl;
  cout<<"   Tekan Y atau N : "; cin>>yes;

  if(yes=='Y'||yes=='y')
  {

  goto atas;
  }
  else if(yes=='N'||yes=='n')
  {
  cout<<"==============================================================="<<endl; 
  cout<<"  Terima Kasih"<<endl;
  cout<<"==============================================================="<<endl; 
  }
  else{
  cout<<"==============================================================="<<endl; 
  cout<<"Anda Salah Memasukan Input"<<endl;
  cout<<"==============================================================="<<endl; 
 }
 }
    }
  
  
  
 

   
 
 
 int main(){

  atm bank;
  bank.login();
  bank.display();
  
  
  
 return 0;
 }
