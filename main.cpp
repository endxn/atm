#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    int pilihan=1, saldo=1000000, tarik, pin,nominal,transfer,ganti_pin,lpin,npin,salah=0;
    int isi_pulsa;
printf("-------------SELAMAT DATANG DI ATM BANK UPN----------");
printf("\n\n================MASUKKAN ATM ANDA================");
getch();

depan:

    system("cls");
    printf("\n------------- SELAMAT DATANG DI ATM BANK UPN-----------");
    printf("\n\nPILIH BAHASA");
    
    printf("\n\n1. Indonesia");
    printf("\n\n= ");
    scanf("%d", &pilihan);

        if(pilihan==1) goto indonesia;
        else
            goto depan;

indonesia:
    system("cls");
    printf("------------- SELAMAT DATANG DI ATM BANK UPN-----------");   

pin:
    printf("\n\nMasukkan PIN anda = ");
    scanf("%d", &pin);

    system("cls");
    if(pin==123456 or pin==npin) {
            printf("Pin Cocok !");
            printf("\nSilahkan dilanjutkan\n"); 
            system("cls");

    }    else {
            printf("Silahkan masukkan pin yang benar !\n");
            salah+=1;
            if (salah==3) {
                printf ("ATM Diblokir Karena Anda 3x Salah Memasukkan PIN\n\n"); goto blokir; }

                else 
                    goto pin;
    }

menu:
        system("cls");
        printf("\n------------- SELAMAT DATANG DI ATM BANK UPN-----------");
        printf("\n\n======================Menu Utama========================");

        printf("\n\n1. Penarikan Tunai");
        printf("\n\n2. Transfer");
        printf("\n\n3. Isi pulsa");
        printf("\n\n4. Cek Saldo");
        printf("\n\n5. Ganti pin");
        printf("\n\n6. Keluar");
        printf("\n\nMasukan pilihan anda: ");
        scanf("%d", &pilihan);

        if (pilihan==1) goto tarik;
        else if (pilihan==2) goto transfer;
        else if (pilihan==3) goto isi_pulsa;
        else if (pilihan==4) goto saldo;
        else if (pilihan==5) goto ganti_pin;
        else if (pilihan==6) goto end;

        else
            printf("Masukan pilihan yang benar");

tarik:
        system("cls");
         printf("\n\n======================PILIH NOMINAL YANG AKAN DIAMBIL========================");
        printf("\n\n1. 100000");
        printf("\n\n2. 200000");
        printf("\n\n3. 300000");
        printf("\n\n4. Pilih jumlah nominal lain");
        printf("\n\n5. Keluar");

        printf("\n\nMasukan pilihan anda: ");
        scanf("%d", &pilihan);
        if(pilihan==1){
        	if(saldo>=100000){
        	printf("Nominal yang akan anda tarik adalah : Rp. 100000");
        	printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-100000);
        	}

        	else if(saldo<100000){
        	printf("Saldo anda kurang!");
			}      	
		}
		else if(pilihan==2){
      		  if(saldo>=200000){
        		printf("Nominal yang akan anda tarik adalah : Rp. 200000");
        		printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-200000);
        	}

        	else if(saldo<200000){
        	printf("Saldo anda kurang!");
			}      	
		}

		else if(pilihan==3){
        	if(saldo>=300000){
        	printf("Nominal yang akan anda tarik adalah : Rp. 300000");
        	printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-300000);
        	}

        	else if(saldo<300000){
        	printf("Saldo anda kurang!");
			}      	
		}

		else if(pilihan==4){
			printf("Masukkan nominal yang akan anda tarik = ");
        	scanf("%d", &nominal);
        
        if(saldo>=nominal){
      	printf("Apakah anda akan menarik uang sebesar Rp. %d ?", nominal);
        printf("\n\n1. Ya  2. Tidak\n\n");
        printf("Masukkan pilihan anda = ");

       			scanf("%d", &pilihan);{       
      					  if (pilihan==1){
            			    printf("\nTransaksi Berhasil");
              				printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-nominal); }
           				 else 
              				  printf("\nTransaksi Dibatalkan");
        					}
							}
        	else if(saldo<nominal){
        	printf("Saldo anda kurang!");
       }
   }
        else
        printf("Masukan pilihan yang benar");
         goto transaksi;

isi_pulsa:
        system("cls");
        printf("Silahkan masukkan nomer HP tujuan anda = ");
        scanf("%d", &isi_pulsa);
        printf("\nMasukkan nominal yang akan anda isi = ");
        scanf("%d", &nominal);
        	if(saldo>=nominal){
      			printf("Apakah anda akan mengisi pulsa sebesar %d ke %d ?", nominal, isi_pulsa);
        		printf("\n\n1. Ya  2. Tidak");
        		printf("\n\nMasukkan pilihan anda = ");

       			scanf("%d", &pilihan);{       
      					  if (pilihan==1){
            			    printf("\nTransaksi Berhasil");
              				printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-nominal); }
           				 else 
              				  printf("\nTransaksi Dibatalkan");
        					}
							}
        	else if(saldo<nominal){
        	printf("Saldo anda kurang!");
			}      	
        goto transaksi;

transfer:
        system("cls");
        printf("Silahkan masukkan nomer rekening tujuan anda = ");
        scanf("%d", &transfer);
        printf("Masukkan nominal yang akan anda transfer = ");
        scanf("%d", &nominal);
        if(saldo>=nominal){
      	printf("Apakah anda akan mentransfer %d ke %d ?", nominal, transfer);
        printf("\n\n1. Ya  2. Tidak\n\n");
        printf("Masukkan pilihan anda = ");
       			scanf("%d", &pilihan);{       
      					  if (pilihan==1){
            			    printf("\nTransaksi Berhasil");
              				printf("\n\nSaldo anda sekarang = Rp. %d", saldo=saldo-nominal); }
           				 else 
              				  printf("\nTransaksi Dibatalkan");
        					}
							}
        	else if(saldo<nominal){
        	printf("Saldo anda kurang!");
			}      	
        goto transaksi;

transaksi:
        printf("\nApakah anda ingin transaksi lagi?");
        printf("\n\n1. Ya 2. Tidak = ");
        scanf("%d", &pilihan);
        system("cls");
            if (pilihan==1) goto pin;
            if (pilihan==2) goto end;
saldo:
        system ("cls");
        printf("Saldo anda Rp. %d\n\n", saldo);
        goto transaksi;
        
ganti_pin:
		system ("cls");
		printf(" GANTI PIN \n");
pinlama:
		printf("Masukan PIN lama:"); 
		scanf("%d", &lpin);
		system("cls");
			if(lpin==pin);
		else {
            printf("Silahkan masukkan pin yang benar !\n");
            salah+=1;
            if (salah==3) { 
				goto blokir; }

                else 
                    goto pinlama;
                }
                    
    	goto pinbaru;
pinbaru:
		printf("Masukan PIN baru:"); 
		scanf("%d", &npin);
		
		system("cls");
		pin=npin;
		
		system("cls");
		printf("*************** GANTI PIN ***************\n");
		printf("Ganti PIN berhasil. Silahkan login kembali.\n");
		
		getch();
		goto pin;
end:
        system ("cls");
        printf("Terima Kasih\n");
        printf("Atas Kerja Sama Dengan Kami\n\n");
        getch();
        goto selesai;        
		getch();

blokir:
		system ("cls");
		printf ("ATM Diblokir Karena Anda 3x Salah Memasukkan PIN\n\n"); 
		printf("Terima Kasih\n");
        printf("Atas Kerja Sama Dengan Kami\n\n");
        getch();
        goto selesai;        
		getch();
		
selesai:
        return 0;
} 
