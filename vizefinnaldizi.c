#include <stdio.h>

main(){


int vize[5],final[5],k = 1;
float ortalama[5];

printf("Ogrencilerin vize notlarini giriniz\n");

for(int i=0 ; i<5 ;i++){

printf("%d. ogrenci = ",k);
scanf("%d",&vize[i]);
k=k+1;
}

printf("Ogrencilerin final notlarini giriniz\n");
k=1;
for(int i=0 ; i<5 ;i++){

printf("%d. ogrenci = ",k);
scanf("%d",&final[i]);
k=k+1;
}

for(int i=0;i<5;i++){

ortalama[i]=vize[i]*0.6+final[i]*0.4;

}

//for(int i=0;i<5;i++)
//printf("%.2f\n",ortalama[i]);
printf("Vize   Final   Ortalama\n");

for(int i=0;i<5;i++){

printf("  %d     %d      %.2f\n",vize[i],final[i],ortalama[i]);

}



}