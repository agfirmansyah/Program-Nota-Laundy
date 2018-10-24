/*HEADER*/
#include <stdio.h>//library input/output yang digunakan untuk menampilkan fungsi" printf,scanf,put,gets dll.
#include <conio.h>//library yang digunakan untuk menampilkan Hasil antarmuka dengan fungsi" getch(),getche(), clrscr()
#include <stdlib.h>
#include <time.h>//library untuk mengkonversi waktu lokal dan menampilkan dalam format tanggal

/*VARIABEL GLOBAL*/
float hatot,diskon,tobay;//tipe data untuk menampilkan format float/real yang nanti akan digunakan untuk jumlah uang Rp,000,00
int kate,brt;//tipe data untuk format integer

/*FUNGSI & PROSEDURE*/
void tanggal()//prosedureuntuk menampilkan waktu inputan data
	{struct tm *Sys_T;
	time_t rwaktu;//variabel untuk menyimpan data bertipe time
	rwaktu=time(NULL);//time(NULL)fungsi yang menampilkan nilai sesuai banyaknya detik sejak pertama diinputkan
	Sys_T=localtime(&rwaktu);//memanggil fungsi untuk menampilkan waktu saat ini dari sistem
	printf("Tgl : %s",asctime(Sys_T));//asctime untuk megkonversi/mengubah struct tm menjadi string dengan format Www Mmm dd hh:mm:ss yyyy
	}

void kategori()//prosedure untuk menampilkan kategori paket cucian
	{
	    printf("\nKategori Cucian	 \n");
		printf("\t\t1. Paket Standar\n");
		printf("\t\t2. Paket Cepat\n");
		printf("\t\t3. Paket Kilat\n");
		printf("Nomer Paket     = "); scanf("%d",&kate);
		switch (kate)
		{
		case 1:
		hatot = brt*4000;
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("														*Paket Standar*\n\n");
		printf("\t\t- Waktu pengambilan 1hari\n");
		printf("\t\t- Harga Rp.4000/kg\n");
		printf("\t\t- Pewangi (Akasia, Aloevera, Melati)\n");
		printf("\t\t- Harga total = Rp.%0.2f",hatot);
		printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		break;
		case 2:
	 	hatot = brt*6000;
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("														*Paket Cepat*\n\n");
		printf("\t\t- Waktu pengambilan 12 jam\n");
		printf("\t\t- Harga Rp.6000/kg\n");
		printf("\t\t- Pewangi (Akasia, Aloevera, Melati, Arizona, Ocean)\n");
		printf("\t\t- Harga total = Rp.%0.2f",hatot);
		printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		break;
		case 3:
		hatot = brt*8000;
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	 	printf("														*Paket Kilat*\n\n");
		printf("\t\t- Waktu pengambilan 4 jam\n");
		printf("\t\t- Harga Rp.8000/kg\n");
		printf("\t\t- Pewangi (Akasia, Aloevera, Melati, Arizona, Ocean,\n\t\t Molto, Bubblegum)\n");
		printf("\t\t- Harga total = Rp.%0.2f",hatot);
		printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		break;
		}
	}

void jumlah()//prosedure untuk mencatat jumlah pakaian yang ada
	{	struct laundry {char jen[25];
					}ldr[10];
	int i,k,j;
	k=1;
	printf("Jenis Pakaian   =  "); scanf("%d",&j);
	for(i=0;i<j;i++)
	{	printf("\t\t  Jenis Ke-%i (jenis,jumlah)= ",k); scanf("%s",&ldr[i].jen);
	k++;
	}
	}

void diskons()//prosedure untuk menghitung diskon
	{
	if (hatot>=50000)
	{	diskon=hatot*5/100;
		printf("\n\t\t\t..Anda Mendapatkan Potongan Harga Rp.%0.2f..",diskon);
	}
	else
	{	printf("\n\t\t\t..Anda Mendapatkan Potongan Harga Rp.0..");
	}
	}

float totbay(float tobay)//prosedure untuk menghitung biaya yang harus dibayar setelah dikurang diskon
    {
    diskon=hatot*5/100;
	return tobay = hatot-diskon;
    }


/*PROGRAM UTAMA*/
main()
{	/*VARIABEL LOKAL*/
    char y,n,diulang,nama[20],alamat[20],wangi[15];
	int nota,tlp,data,exit;
	float bayar;
	time_t waktu;//variabel untuk menyimpan data bertipe time
	time(&waktu);//digunakan untuk mengambil waktu secara realtime dari sistem
	y=data;
	n=exit;
	data=1;

	do{
	printf("\t\t\t\t\xB1\xB1\xB1\xB1\xB1\xB1`..LAUNDRY Bi Klin..`\xB1\xB1\xB1\xB1\xB1\xB1\n");
	data:
	tanggal();
	printf("\n\xDB\xDB DATA PELANGGAN \xDB\xDB \n\n");
    getch();//fungsinya untuk membaca karakter yang diinputkan tapi tidak menampilkannya dilayar
	printf("No Nota	\t= "); scanf("%i",&nota);
	printf("Nama  	\t= "); scanf("%s",&nama);
	printf("Alamat 	\t= "); scanf("%s",&alamat);
	printf("No Handphone    = "); scanf("%d",&tlp);
	printf("Berat Pakaian (kg)= "); scanf("%d",&brt);
	kategori();
	printf("Pewangi Pakaian = "); scanf("%s",&wangi);
	jumlah();
	bayar=totbay(tobay);
	printf("\nTotal Bayar   \t= Rp.%0.2f \n",bayar);
	diskons();
	printf("\n\nApakah data ingin dirubah (y/n)? "); scanf("%s",&diulang);
	printf("\n\n");
    system("cls");
	}
	while (diulang=='y');

    exit:
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t\t\t\xB1\xB1\xB1\xB1\xB1\xB1`..LAUNDRY Bi Klin..`\xB1\xB1\xB1\xB1\xB1\xB1\n\n");
	printf("\t        %s",ctime (&waktu));//ctime fungsi untuk menkonversi nilai hasil dari pemanggilan time(&waktu) ke bentuk string
	printf("\t        No Nota : %i\n",nota);
	printf("\t	=====================================================\n");
	printf("\t	||    NAMA   |   ALAMAT   |PAKET|   	BAYAR      ||\n");
	printf("\t	-----------------------------------------------------\n");
	printf("\t	||  %s   |  %s   |  %d  |   Rp.%0.2f    ||\n",nama,alamat,kate,bayar);
	printf("\t	=====================================================\n\n");
	printf("\n\n\t   PERHATIAN :\n");
	printf("\t   *Pengambilan barang harus Disertai Nota\n");
	printf("\t   *Klaim berlaku 12jam setelah Barang diambil\n");
	printf("\t   *Kain Halus atau Mudah Luntur Harap diKonfirmasi\n");
	printf("\t   *Kerusakan tanpa Konfirmasi sepenuhnya Resiko Konsumen\n");
	printf("\t   *Barang tidak diambil setelah 30hari diluar tanggung jawab kami.\n");
	return 0;//untuk mengembalikan fungsi ke 0
}
