#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <vector>

using namespace std;

struct RENTAL
{
   int hargaMobil,merek,namaMobil;
   long hargaCivic = 500000,hargaJazz = 300000;
   long hargaBrio = 400000,hargaCRV = 500000;
   long hargaCity = 500000,hargaYaris = 600000;
   long hargaInnova = 800000,hargaAvanza = 350000;
   long hargaFortuner = 550000,hargaRush = 650000;
   long hargaAyla = 400000,hargaSigra = 300000;
   long hargaXenia = 350000,hargaTerios = 450000;
   long hargaRocky = 200000,hargaXpander = 430000;
   long hargaCross = 500000,hargaPajero = 550000;
   long hargaXforce = 300000,hargaTriton = 400000;
   string nama;
   long long nik,nohp;
   string alamat;
   bool jeniskel;
   long long totalharga,totalbayar,kembalian;
};

void clearInputBuffer() 
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void inputRental(RENTAL & rental)
{
	
	int pil;
	int paket;
	int jam,hari,week;
	int merek;
    cout<<"===pilihan merek mobil sewaan 21==="<<endl;
    cout<<"1. Honda"<<endl;
    cout<<"2. Toyota"<<endl;
    cout<<"3. Daihatsu"<<endl;
    cout<<"4. Mitsubishi"<<endl;
    
    
    cout<<"silahkan masukan nomor yang anda ingin pilih :";
    cin>>merek;
    
    switch (merek) 
    {
        case 1: 
            cout<< "==========Honda=========="<<endl;
            cout<<"Pilih mobil yang tersedia : "<<endl;
            cout<<"1. Civic"<<endl;
            cout<<"2. Jazz"<<endl;
            cout<<"3. Brio"<<endl;
            cout<<"4. CR-V"<<endl;
            cout<<"5. City"<<endl;

            cout<<"anda memilih pilihan merk, silahkan pilih mobil yang anda inginkan "<<endl;
	  	    cout<<"pilih mobil : ";
	  	    cin>>pil;
	  	 
	        if(pil==1)
            {
	        	cout << "===Civic Turbo===";
	         	cout<<"Anda Memilih Mobil Civic"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaCivic<<endl;
	         	cout<<endl;
	
                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaCivic ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaCivic - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaCivic - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }

             if(pil==2)
            {
	        	cout << "===Jazz===";
	         	cout<<"Anda Memilih Mobil Jazz"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaJazz<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaJazz ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaJazz - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaJazz - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }

             if(pil==3)
            {
	        	cout << "==Brio===";
	         	cout<<"Anda Memilih Mobil Brio"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaBrio<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaBrio ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaBrio - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaBrio - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             } 

             if(pil==4)
            {
	        	cout << "===CRV===";
	         	cout<<"Anda Memilih Mobil CRV"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaCRV<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaCRV ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaCRV - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaCRV - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }

             if(pil==5)
            {
	        	cout << "===City===";
	         	cout<<"Anda Memilih Mobil City"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaCity<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaCity ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaCity - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaCity - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }

        break;

        case 2: 
            cout<<"==========Toyota=========="<<endl;
            cout<<"Pilih mobil yang tersedia : "<<endl;
            cout<<"1. Yaris"<<endl;
            cout<<"2. Innova"<<endl;
            cout<<"3. Avanza"<<endl;
            cout<<"4. Fortuner"<<endl;
            cout<<"5. Rush"<<endl;

            cout<<"anda memilih pilihan merk, silahkan pilih mobil yang anda inginkan "<<endl;
	  	    cout<<"pilih mobil : ";
	  	    cin>>pil;
	  	 
	        if(pil==1)
            {
	        	cout << "===Yaris===";
	         	cout<<"Anda Memilih Mobil Yaris"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaYaris<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaYaris ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaYaris - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaYaris - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }

             if(pil==2)
            {
	        	cout << "===Innova===";
	         	cout<<"Anda Memilih Mobil Innova"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaInnova<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaInnova ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaInnova - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaInnova - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }

             if(pil==3)
            {
	        	cout << "===Avanza===";
	         	cout<<"Anda Memilih Mobil Avanza"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaAvanza<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaAvanza ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaAvanza - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaAvanza - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }

             if(pil==4)
            {
	        	cout << "===Fortuner===";
	         	cout<<"Anda Memilih Mobil Fortuner"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaFortuner<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaFortuner ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaFortuner - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week  * 7 * 24 * rental.hargaFortuner - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }

             if(pil==5)
            {
	        	cout << "===Rush===";
	         	cout<<"Anda Memilih Mobil Rush"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaRush<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaRush ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaRush - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaRush - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }
            
        break;

        case 3:
            cout<<"==========Daihatsu=========="<<endl;
            cout<<"Pilih mobil yang tersedia : "<<endl;
            cout<<"1. Ayla"<<endl;
            cout<<"2. Sigra"<<endl;
            cout<<"3. Xenia"<<endl;
            cout<<"4. Terios"<<endl;
            cout<<"5. Rocky"<<endl;

            cout<<"anda memilih pilihan merk, silahkan pilih mobil yang anda inginkan "<<endl;
	  	    cout<<"pilih mobil : ";
	  	    cin>>pil;
	  	 
	        if(pil==1)
            {
	        	cout << "===Ayla===";
	         	cout<<"Anda Memilih Mobil Ayla"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaAyla<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaAyla ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaAyla - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaAyla - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }

             if(pil==2)
            {
	        	cout << "===Sigra===";
	         	cout<<"Anda Memilih Mobil Sigra"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaSigra<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaSigra ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaSigra - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaSigra - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }

            if(pil==3)
            {
	        	cout << "===Xenia===";
	         	cout<<"Anda Memilih Mobil Xenia"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaXenia<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaXenia ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaXenia - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }

             if(pil==4)
            {
	        	cout << "===Terios===";
	         	cout<<"Anda Memilih Mobil Terios"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaTerios<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaTerios ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaTerios - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaTerios - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }

             if(pil==5)
            {
	        	cout << "===Rocky===";
	         	cout<<"Anda Memilih Mobil Rocky"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaRocky<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaRocky ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaRocky - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaRocky - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }
        break;

        case 4:
            cout<<"==========Mitsubishi=========="<<endl;
            cout<<"Pilih mobil yang tersedia : "<<endl;
            cout<<"1. Xpander"<<endl;
            cout<<"2. Xpander Cross"<<endl;
            cout<<"3. Pajero Sport"<<endl;
            cout<<"4. XForce"<<endl;
            cout<<"5. Triton"<<endl;

            cout<<"anda memilih pilihan merk, silahkan pilih mobil yang anda inginkan "<<endl;
	  	    cout<<"pilih mobil : ";
	  	    cin>>pil;
	  	 
	        if(pil==1)
            {
	        	cout << "===Xpander===";
	         	cout<<"Anda Memilih Mobil Xpander"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaXpander<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaXpander ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaXpander - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaXpander - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }

             if(pil==2)
            {
	        	cout << "===Cross===";
	         	cout<<"Anda Memilih Mobil Cross"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaCross<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaCross ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaCross - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaCross - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }

             if(pil==3)
            {
	        	cout << "===Pajero===";
	         	cout<<"Anda Memilih Mobil Pajero"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaPajero<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaPajero ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaPajero - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaPajero - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }

             if(pil==4)
            {
	        	cout << "===Xforce===";
	         	cout<<"Anda Memilih Mobil Xforce"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaXforce<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaXforce ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaXforce - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaXforce - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }

             if(pil==5)
            {
	        	cout << "===Triton===";
	         	cout<<"Anda Memilih Mobil Triton"<<endl;
	         	cout<<"Masukkan Nama Anda : ";
	         	cin>>rental.nama;
	         	cout<<"Masukkan Nik : ";
	         	cin>>rental.nik;
	         	cout<<"Masukkan Nomor HP : ";
	         	cin>>rental.nohp;
	         	cout<<"Masukkan Alamat : ";
	         	cin>>rental.alamat;
	         	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan): ";
	         	int jk;
    			cin >> jk;
    			rental.jeniskel = (jk == 1);
    			clearInputBuffer();
	         	cout<<"Anda Harus Membayar = "<<rental.hargaTriton<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>paket;
                            
                            if(paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>jam;
                                rental.totalharga = jam * rental.hargaTriton ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>hari;
                                rental.totalharga = hari * 24 * rental.hargaTriton - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}

                            if(paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>week;
                                rental.totalharga = week * 7 * 24 * rental.hargaTriton - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga sewa "<< rental.totalharga <<endl;}
             }

		break;
       
    }
}

int main()
{
	int jumlah;
    cout << "Berapa banyak Mobil yang ingin dipinjam? ";
    cin >> jumlah;
    clearInputBuffer();
    
    vector<RENTAL> dataRENTAL(jumlah);
    
    for (int i = 0; i < jumlah; i++) 
	{
        cout << "\nData ke-" << i + 1 << endl;
        inputRental(dataRENTAL[i]);
    }
	
    
    }
    /*file txt  
    cout<<"keterangan waktu-nama orang- jenis kendaraan - totalharga "
    jumlah total pendapatan hari senin*/

  /*pilihan mobil
    */

    /* jazzz=50.000
    pilihan perjam
    misal 7 jam=  7 x 50.000;
    total akhir

    perhari 23jam
    24 diskon bayar 20 jam= 20 x 50.000
    total akhir

    perbulan
    perhari 23jam
    24 diskon bayar 720  jam= 600 x 50.000
    total akhir
    
    total akhir dikali jumlah nota
    nota 1 variabel*/


