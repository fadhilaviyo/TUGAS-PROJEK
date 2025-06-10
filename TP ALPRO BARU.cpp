#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <vector>
#include <fstream>

using namespace std;

void clearInputBuffer() 
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

struct RENTAL
{
   int merek;
   long hargaCivic = 500000;
   long hargaJazz = 300000;
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
   int pil;
   int paket;
   int jam,hari,week;
};

void data(RENTAL& rental){
	
	cout<<"Masukkan Nama Anda : ";
	cin.ignore();
	getline(cin, rental.nama);
	cout<<"Masukkan Nik : ";
	cin>> rental.nik;
	clearInputBuffer();
	cout<<"Masukkan Nomor HP : ";
	cin>> rental.nohp;
	clearInputBuffer();
	cout<<"Masukkan Alamat : ";
	getline(cin, rental.alamat);
	cout << "Pilih Jenis Kelamin (1 = Laki-laki, 2 = Perempuan) : ";
	int jk;
    cin >> jk;
    rental.jeniskel = (jk == 1);
}

void cetakBingkaiAtasBawah(int panjang, int lebar) {
    if (lebar > panjang) 
	{
        return ;
    }
    else 
    {
    	cout << "=";
	}
    return cetakBingkaiAtasBawah(panjang, lebar + 1);
} 

string getMEREK(int merek) {
    switch (merek) {
        case 1: return "Honda";
        case 2: return "Toyota";
        case 3: return "Daihatsu";
        case 4: return "Mitsubishi";
        default: return "Tidak Diketahui";
    }
}

string getMOBIL(int pil) {
    switch (pil) {
        case 1: return "Civic";
        case 2: return "Jazz";
        case 3: return "Brio";
        case 4: return "CRV";
        case 5: return "City";
        case 6: return "Yaris";
        case 7: return "Innova";
        case 8: return "Avanza";
        case 9: return "Fortuner";
        case 10: return "Rush";
        case 11: return "Ayla";
        case 12: return "Sigra";
        case 13: return "Xenia";
        case 14: return "Terios";
        case 15: return "Rocky";
        case 16: return "Xpander";
        case 17: return "Cross";
        case 18: return "Pajero";
        case 19: return "Xforce";
        case 20: return "Triton";
        default: return "Tidak Diketahui";
    }
}

string getPAKET(int paket) {
    switch (paket) {
        case 1: return "Per Jam";
        case 2: return "Perhari";
        case 3: return "Per Minggu";
        default: return "Tidak Diketahui";
    }
}

void inputRental(RENTAL & rental)
{
	 
	data(rental);
	 
    cout<<"===pilihan merek mobil sewaan==="<<endl;
    cout<<"1. Honda"<<endl;
    cout<<"2. Toyota"<<endl;
    cout<<"3. Daihatsu"<<endl;
    cout<<"4. Mitsubishi"<<endl;
    
    
    cout<<"silahkan masukan nomor yang anda ingin pilih : ";
    cin>>rental.merek;
    clearInputBuffer();
    
    switch (rental.merek) 
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
	  	    cin>>rental.pil;
	  	 
	        if(rental.pil==1)
            {
	        	cout << "===Civic==="<<endl;
	         	cout<<"Anda Memilih Mobil Civic"<<endl;
	         	
	         	cout<<"Anda Harus Membayar = "<<rental.hargaCivic << "/ Jam "<<endl;
	         	cout<<endl;
	
                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan : ";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaCivic ;
                                cout<<"nama mobil = Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaCivic - 200000;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaCivic - 400000 ;
                                cout<<"nama mobil= Civic"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }

             if(rental.pil==2)
            {
	        	cout << "===Jazz==="<<endl;
	         	cout<<"Anda Memilih Mobil Jazz"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaJazz << "/ Jam " <<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaJazz ;
                                cout<<"nama mobil = Jazz"<<endl;
                                cout<<"harga mobil sewa = 300000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaJazz - 200000;
                                cout<<"nama mobil= Jazz"<<endl;
                                cout<<"harga mobil sewa = 300000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaJazz - 400000 ;
                                cout<<"nama mobil= Jazz"<<endl;
                                cout<<"harga mobil sewa= 300000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }

             if(rental.pil==3)
            {
	        	cout << "==Brio==="<<endl;
	         	cout<<"Anda Memilih Mobil Brio"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaBrio << "/ Jam " <<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan : ";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaBrio ;
                                cout<<"nama mobil = Brio"<<endl;
                                cout<<"harga mobil sewa = 400000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaBrio - 200000;
                                cout<<"nama mobil= Brio"<<endl;
                                cout<<"harga mobil sewa = 400000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaBrio - 400000 ;
                                cout<<"nama mobil= Brio"<<endl;
                                cout<<"harga mobil sewa= 400000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             } 

             if(rental.pil==4)
            {
	        	cout << "===CRV==="<<endl;
	         	cout<<"Anda Memilih Mobil CRV"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaCRV << "/ Jam "<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaCRV ;
                                cout<<"nama mobil = CRV"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaCRV - 200000;
                                cout<<"nama mobil= CRV"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaCRV - 400000 ;
                                cout<<"nama mobil= CRV"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }

             if(rental.pil==5)
            {
	        	cout << "===City==="<<endl;
	         	cout<<"Anda Memilih Mobil City"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaCity << "/ Jam "<<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaCity ;
                                cout<<"nama mobil = City"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaCity - 200000;
                                cout<<"nama mobil= City"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaCity - 400000 ;
                                cout<<"nama mobil= City"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }

        break;

        case 2: 
            cout<<"==========Toyota=========="<<endl;
            cout<<"Pilih mobil yang tersedia : "<<endl;
            cout<<"6. Yaris"<<endl;
            cout<<"7. Innova"<<endl;
            cout<<"8. Avanza"<<endl;
            cout<<"9. Fortuner"<<endl;
            cout<<"10. Rush"<<endl;

            cout<<"anda memilih pilihan merk, silahkan pilih mobil yang anda inginkan "<<endl;
	  	    cout<<"pilih mobil : ";
	  	    cin>>rental.pil;
	  	 
	        if(rental.pil==6)
            {
	        	cout << "===Yaris==="<<endl;
	         	cout<<"Anda Memilih Mobil Yaris"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaYaris << "/ Jam " <<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaYaris ;
                                cout<<"nama mobil = Yaris"<<endl;
                                cout<<"harga mobil sewa = 600000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaYaris - 200000;
                                cout<<"nama mobil= Yaris"<<endl;
                                cout<<"harga mobil sewa = 600000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaYaris - 400000 ;
                                cout<<"nama mobil= Yaris"<<endl;
                                cout<<"harga mobil sewa= 600000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }

             if(rental.pil==7)
            {
	        	cout << "===Innova==="<<endl;
	         	cout<<"Anda Memilih Mobil Innova"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaInnova << "/ Jam " <<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaInnova ;
                                cout<<"nama mobil = Innova"<<endl;
                                cout<<"harga mobil sewa = 800000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaInnova - 200000;
                                cout<<"nama mobil= Innova"<<endl;
                                cout<<"harga mobil sewa = 800000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaInnova - 400000 ;
                                cout<<"nama mobil= Innova"<<endl;
                                cout<<"harga mobil sewa= 800000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }

             if(rental.pil==8)
            {
	        	cout << "===Avanza==="<<endl;
	         	cout<<"Anda Memilih Mobil Avanza"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaAvanza << "/ Jam " <<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaAvanza ;
                                cout<<"nama mobil = Avanza"<<endl;
                                cout<<"harga mobil sewa = 350000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaAvanza - 200000;
                                cout<<"nama mobil= Avanza"<<endl;
                                cout<<"harga mobil sewa = 350000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaAvanza - 400000 ;
                                cout<<"nama mobil= Avanza"<<endl;
                                cout<<"harga mobil sewa= 350000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }

             if(rental.pil==9)
            {
	        	cout << "===Fortuner==="<<endl;
	         	cout<<"Anda Memilih Mobil Fortuner"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaFortuner << "/ Jam " <<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaFortuner ;
                                cout<<"nama mobil = Fortuner"<<endl;
                                cout<<"harga mobil sewa = 550000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaFortuner - 200000;
                                cout<<"nama mobil= Fortuner"<<endl;
                                cout<<"harga mobil sewa = 550000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week  * 7 * 24 * rental.hargaFortuner - 400000 ;
                                cout<<"nama mobil= Fortuner"<<endl;
                                cout<<"harga mobil sewa= 550000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }

             if(rental.pil==10)
            {
	        	cout << "===Rush==="<<endl;
	         	cout<<"Anda Memilih Mobil Rush"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaRush << "/ Jam " <<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaRush ;
                                cout<<"nama mobil = Rush"<<endl;
                                cout<<"harga mobil sewa = 650000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaRush - 200000;
                                cout<<"nama mobil= Rush"<<endl;
                                cout<<"harga mobil sewa = 650000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaRush - 400000 ;
                                cout<<"nama mobil= Rush"<<endl;
                                cout<<"harga mobil sewa= 650000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }
            
        break;

        case 3:
            cout<<"==========Daihatsu=========="<<endl;
            cout<<"Pilih mobil yang tersedia : "<<endl;
            cout<<"11. Ayla"<<endl;
            cout<<"12. Sigra"<<endl;
            cout<<"13. Xenia"<<endl;
            cout<<"14. Terios"<<endl;
            cout<<"15. Rocky"<<endl;

            cout<<"anda memilih pilihan merk, silahkan pilih mobil yang anda inginkan "<<endl;
	  	    cout<<"pilih mobil : ";
	  	    cin>>rental.pil;
	  	 
	        if(rental.pil==11)
            {
	        	cout << "===Ayla==="<<endl;
	         	cout<<"Anda Memilih Mobil Ayla"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaAyla << "/ Jam " <<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaAyla ;
                                cout<<"nama mobil = Ayla"<<endl;
                                cout<<"harga mobil sewa = 400000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaAyla - 200000;
                                cout<<"nama mobil= Ayla"<<endl;
                                cout<<"harga mobil sewa = 400000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaAyla - 400000 ;
                                cout<<"nama mobil= Ayla"<<endl;
                                cout<<"harga mobil sewa= 400000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }

             if(rental.pil==12)
            {
	        	cout << "===Sigra==="<<endl;
	         	cout<<"Anda Memilih Mobil Sigra"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaSigra << "/ Jam " <<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaSigra ;
                                cout<<"nama mobil = Sigra"<<endl;
                                cout<<"harga mobil sewa = 300000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaSigra - 200000;
                                cout<<"nama mobil= Sigra"<<endl;
                                cout<<"harga mobil sewa = 300000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaSigra - 400000 ;
                                cout<<"nama mobil= Sigra"<<endl;
                                cout<<"harga mobil sewa= 300000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }

            if(rental.pil==13)
            {
	        	cout << "===Xenia==="<<endl;
	         	cout<<"Anda Memilih Mobil Xenia"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaXenia << "/ Jam " <<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaXenia ;
                                cout<<"nama mobil = Xenia"<<endl;
                                cout<<"harga mobil sewa = 350000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                cout<<"nama mobil= Xenia"<<endl;
                                cout<<"harga mobil sewa = 350000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaXenia - 400000 ;
                                cout<<"nama mobil= Xenia"<<endl;
                                cout<<"harga mobil sewa= 350000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }

             if(rental.pil==14)
            {
	        	cout << "===Terios==="<<endl;
	         	cout<<"Anda Memilih Mobil Terios"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaTerios << "/ Jam " <<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaTerios ;
                                cout<<"nama mobil = Terios"<<endl;
                                cout<<"harga mobil sewa = 450000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaTerios - 200000;
                                cout<<"nama mobil= Terios"<<endl;
                                cout<<"harga mobil sewa = 450000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaTerios - 400000 ;
                                cout<<"nama mobil= Terios"<<endl;
                                cout<<"harga mobil sewa= 450000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }

             if(rental.pil==15)
            {
	        	cout << "===Rocky==="<<endl;
	         	cout<<"Anda Memilih Mobil Rocky"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaRocky << "/ Jam " <<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaRocky ;
                                cout<<"nama mobil = Rokcy"<<endl;
                                cout<<"harga mobil sewa = 200000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaRocky - 200000;
                                cout<<"nama mobil= Rocky"<<endl;
                                cout<<"harga mobil sewa = 200000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaRocky - 400000 ;
                                cout<<"nama mobil= Rocky"<<endl;
                                cout<<"harga mobil sewa= 200000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }
        break;

        case 4:
            cout<<"==========Mitsubishi=========="<<endl;
            cout<<"Pilih mobil yang tersedia : "<<endl;
            cout<<"16. Xpander"<<endl;
            cout<<"17. Xpander Cross"<<endl;
            cout<<"18. Pajero Sport"<<endl;
            cout<<"19. XForce"<<endl;
            cout<<"20. Triton"<<endl;

            cout<<"anda memilih pilihan merk, silahkan pilih mobil yang anda inginkan "<<endl;
	  	    cout<<"pilih mobil : ";
	  	    cin>>rental.pil;
	  	 
	        if(rental.pil==16)
            {
	        	cout << "===Xpander==="<<endl;
	         	cout<<"Anda Memilih Mobil Xpander"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaXpander << "/ Jam " <<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaXpander ;
                                cout<<"nama mobil = Xpander"<<endl;
                                cout<<"harga mobil sewa = 430000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaXpander - 200000;
                                cout<<"nama mobil= Xpander"<<endl;
                                cout<<"harga mobil sewa = 430000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaXpander - 400000 ;
                                cout<<"nama mobil= Terios"<<endl;
                                cout<<"harga mobil sewa= 430000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }

             if(rental.pil==17)
            {
	        	cout << "===Cross==="<<endl;
	         	cout<<"Anda Memilih Mobil Cross"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaCross << "/ Jam " <<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaCross ;
                                cout<<"nama mobil = Cross"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaCross - 200000;
                                cout<<"nama mobil= Cross"<<endl;
                                cout<<"harga mobil sewa = 500000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaCross - 400000 ;
                                cout<<"nama mobil= Cross"<<endl;
                                cout<<"harga mobil sewa= 500000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }

             if(rental.pil==18)
            {
	        	cout << "===Pajero==="<<endl;
	         	cout<<"Anda Memilih Mobil Pajero"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaPajero << "/ Jam " <<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaPajero ;
                                cout<<"nama mobil = Pajero"<<endl;
                                cout<<"harga mobil sewa = 550000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaPajero - 200000;
                                cout<<"nama mobil= Pajero"<<endl;
                                cout<<"harga mobil sewa = 550000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaPajero - 400000 ;
                                cout<<"nama mobil= Pajero"<<endl;
                                cout<<"harga mobil sewa= 550000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }

             if(rental.pil==19)
            {
	        	cout << "===Xforce==="<<endl;
	         	cout<<"Anda Memilih Mobil Xforce"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaXforce << "/ Jam " <<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaXforce ;
                                cout<<"nama mobil = Xforce"<<endl;
                                cout<<"harga mobil sewa = 300000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaXforce - 200000;
                                cout<<"nama mobil= Xforce"<<endl;
                                cout<<"harga mobil sewa = 300000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaXforce - 400000 ;
                                cout<<"nama mobil= Xforce"<<endl;
                                cout<<"harga mobil sewa= 300000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }

             if(rental.pil==20)
            {
	        	cout << "===Triton==="<<endl;
	         	cout<<"Anda Memilih Mobil Triton"<<endl;
	         	cout<<"Anda Harus Membayar = "<<rental.hargaTriton << "/ Jam " <<endl;
	         	cout<<endl;

                           cout<<"pilih paket yang anda ingin pesan"<<endl;
                           cout<<"1. paket perjam"<<endl;
                           cout<<"2. paket perhari"<<endl;
	         	           cout<<"3. paket perminggu"<<endl;
                           cout<<"tentukan pilihan paket yang anda inginkan :";
                           cin>>rental.paket;
                            
                            if(rental.paket==1){
                                cout<<"=====paket perjam====="<<endl;
                                cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                                cin>>rental.jam;
                                rental.totalharga = rental.jam * rental.hargaTriton ;
                                cout<<"nama mobil = Triton"<<endl;
                                cout<<"harga mobil sewa = 400000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==2){
                                cout<<"=====paket perhari====="<<endl;
                                cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                                cin>>rental.hari;
                                rental.totalharga = rental.hari * 24 * rental.hargaTriton - 200000;
                                cout<<"nama mobil= Triton"<<endl;
                                cout<<"harga mobil sewa = 400000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}

                            if(rental.paket==3){
                                cout<<"=====paket perminggu====="<<endl;
                                cout<<"mohon maaf ingin berapa minggu anda akan sewa"<<endl;
                                cin>>rental.week;
                                rental.totalharga = rental.week * 7 * 24 * rental.hargaTriton - 400000 ;
                                cout<<"nama mobil= Triton"<<endl;
                                cout<<"harga mobil sewa= 400000"<<endl;
                                cout<<"harga total sewa "<< rental.totalharga <<endl;}
             }

		break;
       
    }
}

void displayRENTAL (const RENTAL & rental, int index = -1) {
	

    const int lebar = 60;
    cetakBingkaiAtasBawah(lebar,1);

	cout << endl;
    if (index != -1)
        cout << "Data Rental ke-" << index + 1 << endl;
 
    cout << setw((lebar + 18) / 2) << "RENTAL MOBIL" << endl;
    cetakBingkaiAtasBawah(lebar,1);
 	cout << endl;
 	
    cout << left << setw(20) << "Merek Mobil" << ": " << getMEREK(rental.merek) << endl;
    cout << left << setw(20) << "Mobil" << ": " << getMOBIL(rental.pil)<< endl;
    cout << left << setw(20) << "Nama Penyewa" << ": " << rental.nama << endl;
    cout << left << setw(20) << "Nik" << ": " << rental.nik << endl;
    cout << left << setw(20) << "Nomor HP" << ": " << rental.nohp << endl;
    cout << left << setw(20) << "Alamat" << ": " << rental.alamat << endl;
    cout << left << setw(20) << "Jenis Kelamin" << ": " 
         << (rental.jeniskel ? "Laki-laki" : "Perempuan") << endl;
    cout << left << setw(20) << "Paket Sewa" << ": " << getPAKET(rental.paket)<< endl;
    cout << left << setw(20) << "Total Harga" << ": " << rental.totalharga << endl;

 
    cetakBingkaiAtasBawah(lebar,1);
}

void simpanDataKeFile(const vector<RENTAL> &rentalni) {
     ofstream file("data_rental.txt");
    if (!file) {
        cerr << "Error membuka file untuk penyimpanan!" << endl;
        return;
    }
 
   const int lebar = 60;
    cetakBingkaiAtasBawah(lebar,1);

	cout << endl;
    
 
    cout << setw((lebar + 18) / 2) << "RENTAL MOBIL" << endl;
    cetakBingkaiAtasBawah(lebar,1);
 	cout << endl;
 	
 	for (size_t i = 0; i < rentalni.size(); i++) {
        const RENTAL &rental = rentalni[i];
    file << left << setw(20) << "Merek Mobil" << ": " << getMEREK(rental.merek) << endl;
    file << left << setw(20) << "Mobil" << ": " << getMOBIL(rental.pil)<< endl;
    file << left << setw(20) << "Nama Penyewa" << ": " << rental.nama << endl;
    file << left << setw(20) << "Nik" << ": " << rental.nik << endl;
    file << left << setw(20) << "Nomor HP" << ": " << rental.nohp << endl;
    file << left << setw(20) << "Alamat" << ": " << rental.alamat << endl;
    file << left << setw(20) << "Jenis Kelamin" << ": " 
            << (rental.jeniskel ? "Laki-laki" : "Perempuan") << endl;
    file << left << setw(20) << "Paket Sewa" << ": " << getPAKET(rental.paket)<< endl;
    file << left << setw(20) << "Total Harga" << ": " << rental.totalharga << endl;
}
    cetakBingkaiAtasBawah(lebar,1);
 
    file.close();
    cout << "Data berhasil disimpan ke file data_ktp.txt\n";
}

void editRENTAL(RENTAL &rental) {
    int pilihan;
    do {
        cout << "\n1. Merek\n2. Nama Mobil\n3. Nama Penyewa\n4. Nik\n5. Nomor HP\n6. Alamat\n";
        cout << "7. Jenis Kelamina\n8. Paket Sewa\n0. Selesai Mengedit";
        cout << "Pilihan Anda: ";
        cin >> pilihan;
        clearInputBuffer();
 
        switch (pilihan) {
            case 1: 
			{
				cout << "Pilih Merek Mobil baru : \n";
				cout << "1. Honda\n2. Toyota\n3. Daihatsu\n4. Mitsubishi\n";
                cout << "Pilihan: ";
                cin >> rental.merek;
                clearInputBuffer();
                break;
			}
            case 2: 
			{
				cout << "Pilih Mobil baru : \n";
				cout << "1.Civic\n2. Jazz\n3. Brio\n4. CRV\n5. City\n";
				cout << "6.Yaris\n7. Innova\n8. Avanza\n9. Fortuner\n10. Rush\n";
				cout << "11.Ayla\n12. Sigra\n13. Xenia\n14. Terios\n15. Rocky\n";
				cout << "16.Xpander\n17. Cross\n18. Pajero\n19. Xforce\n20. Triton\n";
                cout << "Pilihan: ";
                cin >> rental.pil;
                clearInputBuffer();
                break;
			}
            case 3: cout << "Nama Penyewa Baru : "; getline(cin, rental.nama); break;
            case 4: 
			{
				cout << "Nik Baru: "; 
				cin >> rental.nik; 
				break;
			}
            case 5: 
			{
				cout << "Nomor HP baru: ";
				cin >> rental.nohp;
				break;
			}
            case 6: cout << "Alamat baru: "; getline(cin, rental.alamat); break;
            case 7: 
			{
                cout << "Pilih Jenis Kelamin baru (1 = Laki-laki, 2 = Perempuan): ";
                int jk;
                cin >> jk;
                rental.jeniskel = (jk == 1);
                clearInputBuffer();
                break;
            }
            case 8: 
			{
				cout << "Pilih Paket baru : \n";
				cout << "1. Per Jam\n2. Per Hari\n3. Per Minggu\n";
                cout << "Pilihan: ";
                cin >> rental.paket;
                if(rental.paket==1)
				{
                    cout<<"=====paket perjam====="<<endl;
                    cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                    cin>>rental.jam;
                    rental.totalharga = rental.jam * rental.hargaTriton ;
				}

                if(rental.paket==2
				){
                    cout<<"=====paket perhari====="<<endl;
                    cout<<"mohon maaf ingin berapa hari anda akan sewa"<<endl;
                    cin>>rental.hari;
                    rental.totalharga = rental.hari * 24 * rental.hargaTriton - 200000;
				}

                if(rental.paket==3)
				{
                    cout<<"=====paket perminggu====="<<endl;
                    cout<<"mohon maaf ingin berapa jam anda akan sewa"<<endl;
                    cin>>rental.week;
                    rental.totalharga = rental.week * 7 * 24 * rental.hargaTriton - 400000 ;
				}
                clearInputBuffer();
                break;
			}
            case 0: cout << "Selesai mengedit data.\n"; break;
            default: cout << "Pilihan tidak valid.\n"; break;
        }
    } while (pilihan != 0);
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
	
    cout << "\n=== Semua Data Rental ===\n";
    for (int i = 0; i < jumlah; i++) {
        displayRENTAL(dataRENTAL[i], i);
    }
    
    char edit;
    cout << "\nApakah Anda ingin mengedit data? (y/n): ";
    cin >> edit;
    clearInputBuffer();
 
    while (edit == 'y' || edit == 'Y') {
        int indeks;
        cout << "Masukkan Nomor Data Rental Yang Ingin Diedit (1 - " << jumlah << "): ";
        cin >> indeks;
        clearInputBuffer();
 
        if (indeks >= 1 && indeks <= jumlah) {
            editRENTAL(dataRENTAL[indeks - 1]);
            displayRENTAL(dataRENTAL[indeks - 1], indeks - 1);
        } else {
            cout << "Nomor tidak valid.\n";
        }
 
        cout << "\nApakah Anda ingin mengedit data lagi? (y/n): ";
        cin >> edit;
        clearInputBuffer();
    }
    cout<<endl;
    simpanDataKeFile(dataRENTAL);
    
    cout << "\nTerima kasih.\n";
    return 0;
}
   

