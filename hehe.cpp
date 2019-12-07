#include<stdio.h>
#include<locale.h>
#include<stdlib.h>


void soruekle();
void dosyayayaz();
void guncelle();
void sil();
void goruntule();
void goruntulemeekrani();


struct sorular {


	char soru[256];
	char a_sikki[256];
	char b_sikki[256];
	char c_sikki[256];
	char d_sikki[256];
	char dogru_cevap[256];
	int id;
}soruu[BUFSIZ];


int menu (void)
{
  int id1;
setlocale(LC_ALL, "Turkish");

  do {
     printf("\n");
     id1 = fonk1();

     switch (id1) {
        case 1 : soruekle();
			dosyayayaz();
        	break;
        case 2 : sil();
        		dosyayayaz();
			break;
        case 4: fonk4();
        	break;

        case 6: fonk10();
           break;
     }
  } while (id1!=6);

}
int fonk1 (void)
{
  int id1;
  printf("Oyuna Hoşgeldiniz\n");
  printf("[1]. Soru Ekleme\n");
  printf("[2]. Soru silme\n");
  printf("[3]. Sorulari göster ve güncelle\n");
  printf("[4]. Oyun Oyna\n");
  printf("[5]. En yüksek skorlari göster\n");
  printf("[6]. Exit\n");

  do {
     printf("\nSeçeneğinizi giriniz [1-6]: ");
     id1 = getche()-'0';
     printf("\n");
  } while (id1<1 || id1>6);

  return id1;
}

void dosyayayaz() {
	FILE *kayit;
	kayit = fopen("sorular.txt","a");

	if (kayit = NULL)
	printf("Dosya acilamadi.")
	else
		{
			for (int i = 0; i<N; i++)
			{
				fprintf(kayit,"%s\n%s\ts\ts\ts\ts\t", soruu[i].soru, soruu[i].a_sikki, soruu[i].b_sikki, soruu[i].c_sikki, soruu[i].d_sikki, soruu[i].dogru_cevap)
			}
		}

}
