#include<stdio.h>




void soruekle();
void dosyayayaz();
void guncelle();
void sil();
void goruntule();
void goruntuleme ekrani();
void main();

struct sorular {

	struct sorular{
	char soru[256];
	char a_sikki[256];
	char b_sikki[256];
	char c_sikki[256];
	char d_sikki[256];
	char dogru_cevap[256];
	int id;
}soruu[BUFSIZ];




  do {
     printf("\n");
     id1 = fonk1();

     switch (id1) {
        case 1 : soruekle();
			dosyaya yaz();
        	break;
        case 2 : fonk3();
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
