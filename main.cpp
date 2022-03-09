/*
NIM         : 422021611061
Nama        : Yudhatama Gusdi Rahmatullah
Fakultas    : Sains Dan Teknologi
Prodi       : Teknik Informatika
*/

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    bool saldo;
    char menu[50], back;
    const int diskon = 2000;
    string ulang, nama, file, tgl, yt, telp;
    int pil, jml, total, bayar, kurang, kembalian, bonus,
		harga[9] = {125, 150, 125, 150, 125, 150, 500, 750, 150}, i = 0;

do {
    system("clear");
    cout<<"┏━━━┳━━━┳┓╋╋┏━━━┳━┓┏━┳━━━┳━━━━┓┏━━━┳━━━┳━━━━┳━━━┳━┓╋┏┳━━━┓┏━━━┳━━┓┏━━━━┳━━━┳┓┏━┳━━━┓┏━━━┳━━━┳━━━┳━━━┳━━━┳━━━━┳━━━┳┓┏━┳━━━┳━┓╋┏┓"<<endl;
    cout<<"┃┏━┓┃┏━━┫┃╋╋┃┏━┓┃┃┗┛┃┃┏━┓┃┏┓┏┓┃┗┓┏┓┃┏━┓┃┏┓┏┓┃┏━┓┃┃┗┓┃┃┏━┓┃┗┓┏┓┣┫┣┛┃┏┓┏┓┃┏━┓┃┃┃┏┫┏━┓┃┃┏━┓┃┏━━┫┏━┓┃┏━┓┃┏━━┫┏┓┏┓┃┏━┓┃┃┃┏┫┏━┓┃┃┗┓┃┃"<<endl;
    cout<<"┃┗━━┫┗━━┫┃╋╋┃┃╋┃┃┏┓┏┓┃┃╋┃┣┛┃┃┗┛╋┃┃┃┃┃╋┃┣┛┃┃┗┫┃╋┃┃┏┓┗┛┃┃╋┗┛╋┃┃┃┃┃┃╋┗┛┃┃┗┫┃╋┃┃┗┛┛┃┃╋┃┃┃┗━┛┃┗━━┫┗━┛┃┃╋┗┫┗━━╋┛┃┃┗┫┃╋┃┃┗┛┛┃┃╋┃┃┏┓┗┛┃"<<endl;
    cout<<"┗━━┓┃┏━━┫┃╋┏┫┗━┛┃┃┃┃┃┃┗━┛┃╋┃┃╋╋╋┃┃┃┃┗━┛┃╋┃┃╋┃┗━┛┃┃┗┓┃┃┃┏━┓╋┃┃┃┃┃┃╋╋╋┃┃╋┃┃╋┃┃┏┓┃┃┃╋┃┃┃┏━━┫┏━━┫┏┓┏┫┃╋┏┫┏━━┛╋┃┃╋┃┗━┛┃┏┓┃┃┗━┛┃┃┗┓┃┃"<<endl;
    cout<<"┃┗━┛┃┗━━┫┗━┛┃┏━┓┃┃┃┃┃┃┏━┓┃╋┃┃╋╋┏┛┗┛┃┏━┓┃╋┃┃╋┃┏━┓┃┃╋┃┃┃┗┻━┃┏┛┗┛┣┫┣┓╋╋┃┃╋┃┗━┛┃┃┃┗┫┗━┛┃┃┃╋╋┃┗━━┫┃┃┗┫┗━┛┃┗━━┓╋┃┃╋┃┏━┓┃┃┃┗┫┏━┓┃┃╋┃┃┃"<<endl;
    cout<<"┗━━━┻━━━┻━━━┻┛╋┗┻┛┗┛┗┻┛╋┗┛╋┗┛╋╋┗━━━┻┛╋┗┛╋┗┛╋┗┛╋┗┻┛╋┗━┻━━━┛┗━━━┻━━┛╋╋┗┛╋┗━━━┻┛┗━┻━━━┛┗┛╋╋┗━━━┻┛┗━┻━━━┻━━━┛╋┗┛╋┗┛╋┗┻┛┗━┻┛╋┗┻┛╋┗━┛"<<endl;
    cout<<endl;
    cout<<"                 .-:::-.                                                  `/ooooooooooooooooooo/`    "<<endl;
    cout<<"           :yy+///+yy:```````````````    ```````````  ````````````    ``````-+sssssssssssssssssss-   "<<endl;
    cout<<"          oh/-ydddy-/ooooooooooooooooyhyhsooooooooooshyoooooooooooyhhsoooooooo++oss+--------osssss/` "<<endl;
    cout<<"        .yy-+ddddddh +sssssssssssssss+-:-osssssssssso- osss+-sssss-:-osssssssssso:/h-      `/ssssso. "<<endl;
    cout<<"       :hs.sdddddddd oddddddddddddddddo hdddddddddddds yddds:dddddd+oddddddddddddd yyssssssssssss:   "<<endl;
    cout<<"      od/-hdddhsdddd :++++//++++//hdddo ++++/////++++: yddds.///////ydddh/++++++++ ysssssssssssss/   "<<endl;
    cout<<"    .yy-+dddds`:ssss odddy -dddd- ydddo hdddo-dd`yddds yddds.dyooyd-odddy :hdddddd y+       :ssssso. "<<endl;
    cout<<"   :hs.sdddddsssssss odddy -dddd- ydddo hdddo-dd`yddds yddds.d:  :d-odddy o.ydddho.hy`......+sssss:  "<<endl;
    cout<<"  od/-hddddddddddddd odddy -dddd- ydddo hdddy////hddds yddds.d:  :d-odddh////+++//-.d/`/sssssssso.   "<<endl;
    cout<<".yh-+dddds/////sdddd odddy -dddd- ydddo hdddddddddddds yddds.d:  :d-odddddddddddd+-yy.  `/+++++/     "<<endl;
    cout<<"yy`+ssss+-hysd/:ssss +ssso -ssss. osss/`-osssssssssso- osss+.d:  .do-ossssssssss:/ho                 "<<endl;
    cout<<"+hsssssssho  shsssssssssssyssssssyssssshhsssssssssssyhysssssyy`   -shsssssssssssyh:                  "<<endl;
    cout<<endl;
    cout<<"╭━┳╮╱╭┳╮╱╭━┳╮╭┳╮╱╱╭╮╱╱╭╮╱╭╮╱╱╱╱╱╱╱╱╱╭╮   "<<endl;
    cout<<"┃╋┣╋╮┣┫╰╮╰╮┃┃┃┃┣━┳┫╰┳┳┫┣╮┃┃╭━╮╭━┳┳┳┳┫╰╮╭╮"<<endl;
    cout<<"┃╭┫┃╰┫┃┃┃╭┻╮┃┃┃┃┃┃┃╭┫┃┃━┫┃╰┫╋╰┫┃┃┣┫┃┃╭┫┣┫"<<endl;
    cout<<"╰╯╰┻━┻┻┻╯╰━━╯╰━┻┻━┻━┻━┻┻╯╰━┻━━┻┻┳╯┣━┻━╯╰╯"<<endl;
    cout<<"╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╱╰━╯      "<<endl;
    cin>>yt;
    system("clear");
    cout<<"====================================================================================="<<endl;
    cout<<"|                                                                                   |"<<endl;
    cout<<"|                              TOKO PERCETAKAN AMORE 3                              |"<<endl;
    cout<<"|                        DIGITAL PRINT CENTER & ADVERTISING                         |"<<endl;
    cout<<"|                             Jln Mastrip No 22C Jember                             |"<<endl;
    cout<<"|                                                                                   |"<<endl;
    cout<<"|===================================================================================|"<<endl;
    cout<<"|                                                                                   |"<<endl;
    cout<<"|                      Selamat Datang Di Toko Percetakan AMORE 3                    |"<<endl;
    cout<<"|                                                                                   |"<<endl;
    cout<<"|	    [1] A4 70 Gram                  =                         Rp 125           |"<<endl;
    cout<<"|	    [2] A4 80 Gram                  =                         RP 150           |"<<endl;
    cout<<"|      [3] F4 70 Gram                  =                         RP 125             |"<<endl;
    cout<<"|	    [4] F4 80 Gram                  =                         Rp 150           |"<<endl;
    cout<<"|	    [5] Q 70 Gram                   =                         Rp 125           |"<<endl;
    cout<<"|	    [6] Q 80 Gram                   =                         Rp 150           |"<<endl;
    cout<<"|	    [7] A3 70 Gram                  =                         Rp 500           |"<<endl;
    cout<<"|	    [8] Bufallo                     =                         Rp 750           |"<<endl;
    cout<<"|	    [9] Kertas Warna                =                         Rp 150           |"<<endl;
    cout<<"|                                                                                   |"<<endl;
    cout<<"|===================================================================================|"<<endl;
    cout<<"|     Jln Mastrip No 22c, Telp 0812-4919-6789, E-mail amore3_mastrip@yahoo.com      |"<<endl;
    cout<<"====================================================================================="<<endl;
    cout<<endl;
    cout<<"Kode No. "<<&tgl<<endl;
    cout<<endl;
    cout<<"Masukkan Tanggal Pemesanan            : "; cin>>tgl;
    cout<<"Masukkan Nama Anda                    : "; cin>>nama;
    cout<<"Masukkan No Telpon                    : "; cin>>telp;
    cout<<"Masukkam File Yang Akan Di Duplikat   : "; cin>>file;
    cout<<"Masukkan pilihan Kertas Anda          : "; cin>>pil;

		switch(pil){
			case 1:
				strcpy(menu,"A4 70 Gram");
				break;
			case 2:
				strcpy(menu,"A4 80 Gram");
				i=1;
				break;
			case 3:
				strcpy(menu,"F4 70 Gram");
				i=2;
				break;
			case 4:
				strcpy(menu,"F4 80 Gram");
				i=3;
				break;
			case 5:
				strcpy(menu,"Q 70 Gram");
				i=4;
				break;
            		case 6:
				strcpy(menu,"Q 80 Gram");
				i=5;
				break;
            		case 7:
				strcpy(menu,"A3 70 Gram");
				i=6;
				break;
            		case 8:
				strcpy(menu,"Bufallo");
				i=7;
				break;
            		case 9:
				strcpy(menu,"Kertas Warna");
				i=8;
				break;
			default:
				cout << "Pilihan menu yang anda pilih tidak tersedia..." << endl;
				goto ulang;
        }

  cout<<"Berapa Jumlah Yang Mau Anda Foto Copy : "; cin>>jml;
  system("clear");
  total = jml * harga[i];
  cout << endl;
  cout<<"====================================================================================="<<endl;
  cout<<"|                                                                                   |"<<endl;
  cout<<"|                              TOKO PERCETAKAN AMORE 3                              |"<<endl;
  cout<<"|                        DIGITAL PRINT CENTER & ADVERTISING                         |"<<endl;
  cout<<"|                             Jln Mastrip No 22C Jember                             |"<<endl;
  cout<<"|                                                                                   |"<<endl;
  cout<<"====================================================================================="<<endl;
  cout << "\tKode No. "<<&tgl<<endl;
  cout << "\tTanggal Pemesanan \t\t\t : \t"<<tgl<<endl;
  cout << "\tNama Pemesan \t\t\t\t : \t"<<nama<<endl;
  cout << "\tNo Telp \t\t\t\t : \t"<<telp<<endl;
  cout << "\tNama File Anda \t\t\t\t : \t"<<file<<endl;
  cout << "\tKertas Yang anda Pilih \t\t\t : \t"<<menu<<endl;
  cout << "\tJumlah Duplikat \t\t\t : \t"<<jml<<endl;
  cout << "\tBiaya Foto Copy \t\t\t : \tRp "<<harga[i]<<" x "<<jml<<endl;
  cout << "\tTotal Pembayaran \t\t\t : \tRp "<<total<<endl;

	if(jml > 100000){
		bonus = total - diskon;
		total = bonus;
		cout << endl;
		cout << "# Anda mendapatkan diskon Potongan Harga : Rp " << diskon <<" #"<< endl;
		cout << "Total Pembayaran Setelah diskon  : Rp "<< total << endl;
		}

        cout<<"\n#####################################################################################\n"<<endl;
	cout << "\tSilahkan bayar disini \t\t\t : \tRp. "; 		cin>>bayar;
	cout << endl;

	while (saldo = bayar < total){
		cout << "Saldo anda kurang, Silahkan bayar lagi : Rp. "; cin>>kurang;
		bayar+=kurang;
	};

	    kembalian=bayar-total;
	    cout << "\tUang yang anda bayar \t\t\t\tRp. " << bayar<<endl;
	    cout << "\tUang kembalian \t\t\t\t\tRp. "     << kembalian <<endl;
	    cout<<endl;
	    cout<<"====================================================================================="<<endl;
	    cout<<"|     Jln Mastrip No 22c, Telp 0812-4919-6789, E-mail amore3_mastrip@yahoo.com      |"<<endl;
	    cout<<"====================================================================================="<<endl;
	    cout<<endl<<endl;

	ulang:
		cout<<"#################################################################"<<endl;
		cout<<"#\t\t\t\t\t\t\t\t#"<<endl;
		cout<<"#\t\tApakah Anda Ingin Foto Copy Lagi\t\t#"<<endl;
		cout<<"#\t\t\t[Y = ya / T = tidak]\t\t\t#"<<endl;
		cout<<"#\t\t\t\t\t\t\t\t#"<<endl;
		cout<<"#################################################################\n"<<endl;
		cout<<"Pilih ==> "; cin>>back;
	} while (back=='Y'||back=='y');
		system("clear");
		cout << endl;
        cout<<"             ____________________________________________________              "<<endl;
        cout<<"            /                                                    \             "<<endl;
        cout<<"           |    _____________________________________________     |            "<<endl;
        cout<<"           |   |                                             |    |            "<<endl;
        cout<<"           |   |           TOKO PERCETAKAN AMORE 3           |    |            "<<endl;
        cout<<"           |   |     DIGITAL PRINT CENTER & ADVERTISING      |    |            "<<endl;
        cout<<"           |   |          Jln Mastrip No 22C Jember          |    |            "<<endl;
        cout<<"           |   |                                             |    |            "<<endl;
        cout<<"           |   |=============================================|    |            "<<endl;
        cout<<"           |   |                                             |    |            "<<endl;
        cout<<"           |   |                                             |    |            "<<endl;
        cout<<"           |   |        Terima kasih atas kunjungan anda     |    |            "<<endl;
        cout<<"           |   |      Kami tunggu kedatangan anda kembali    |    |            "<<endl;
        cout<<"           |   |                                             |    |            "<<endl;
        cout<<"           |   |                __.---.___                   |    |            "<<endl;
        cout<<"           |   |            ___/__\_O_/___\___               |    |            "<<endl;
        cout<<"           |   |           /___\__________/___\              |    |            "<<endl;
        cout<<"           |   |           |===|\________/|===|              |    |            "<<endl;
        cout<<"           |   |    _______|===|__________|===|______        |    |            "<<endl;
        cout<<"           |   |                  AMORE 3                    |    |            "<<endl;
        cout<<"           |   |_____________________________________________|    |            "<<endl;
        cout<<"           |                                                      |            "<<endl;
        cout<<"            \_____________________________________________________/            "<<endl;
        cout<<"                   \_______________________________________/                   "<<endl;
        cout<<"                _______________________________________________                "<<endl;
        cout<<"             _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_             "<<endl;
        cout<<"          _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_          "<<endl;
        cout<<"       _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_       "<<endl;
        cout<<"    _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_    "<<endl;
        cout<<" _-'.-.-.-.-.-. .---.-. .-----------------------------. .-.---. .---.-.-.-.`-_ "<<endl;
        cout<<":-----------------------------------------------------------------------------:"<<endl;
        cout<<"`---._.-----------------------------------------------------------------._.---'"<<endl;

    return 0;
}

