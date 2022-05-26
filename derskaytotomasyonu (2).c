#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define bolum "Bilgisayar Muhendisligi" //Bolum sabit oldugu icin define ile tanýmladýk.

    struct ogrenci{
       char ad[10];
       char soyad[10];
       int no;
       int kontrol;
       };
       
    struct ders{
    	char dersAdi[10];
    	int kredisi;
    	int dersKodu;
    	int akts;
    	int kontrol;
	}ders;   
void ogrenciekle(void); // prototip fonksiyon tanýmlanir. en aþaðýya ise fonksiyonun kendisi atýlý
    
void yenifonksiyon(void);

void dersekle(void);

void derslistele(void);

void ogrencilistele(void);
    
void guncelleme(void);

void ogrencisil(void);

int main(){
	 
int secim;
int secim3;
int secim2;

printf("\t\t Ana Menu\n");
printf("1-Ogrenci Menu\n");
printf("2-Ders Menu\n");
printf("Tuslayiniz..\n\n");
scanf("%d",&secim3);  

 do{ 
	switch(secim3){
		
	 case 1:
    printf("\t\tOgrenci Menusu\n");
	printf("1.OGRENCi EKLEME\n");
    printf("2.OGRENCi LISTELE\n");
    printf("3.OGRENCi ARAMA\n");
    printf("4.OGRENCi GUNCELLEME\n");
    printf("5.OGRENCi SiLME\n");
    printf("6.CIKIS\n");
    
    printf("Tuslayiniz...");
	scanf("%d",&secim3); 
    
    if(secim3 == 1){
    	
    	ogrenciekle();
    	
    	return main();
	}
	
	else if(secim3 == 2 ){
		ogrencilistele();
		
		return main();
	}
	
	else if(secim3 == 3){
		ogrenciara();
		
		return main();
	}
      
    break;
	
	case 2:
		printf("\t\tDers Menusu\n"); 
	printf("1.DERS EKLEME\n");
    printf("2.DERS LISTELE\n");
    printf("3.CIKIS\n");
	printf("Tuslayiniz...");
	scanf("%d",&secim2); 
	
	if(secim2 == 1){
		dersekle();
		return main();	
	}
	
		getch();
	
	
	 if(secim2 == 2){
		
		derslistele();
		return main();
	}
	if(secim2 == 3){
		return main();
	}
		break;
	} 
 
       
}while(secim3!=6);                
     
getch();

       }
       
    void ogrenci_menu(void);
    void ogrenci_menu(){
           printf("\t\t\t DERS ogrenci OTOMASYONU.....\n");    
 ogrenci_menu();
int secim;
 printf("SECiMiNiZ:");
 scanf("%d",&secim);
 switch(secim){  
 case 1:
     ogrenciekle();
      break;
 case 2:
      ogrencilistele();
      break;
  case 3:
       ogrenciara();
       break;
  case 4:
       guncelleme();
       break;  
   case 5:
        ogrencisil();
        break;
   case 6:
       
        break;  
                               
             
   default:
           printf("\n1-6 ARASI SECIM YAPINIZ...\a\a\n\n");
           break;      }
        system("PAUSE");
        system("cls");
       
    }  

       
    void ogrenciekle(){
   
    int i,j,temp;
    char gecici1[10];
    struct ogrenci ogrenciyeni,ogrenci;
    FILE *dosya,*gecici;
    dosya=fopen("ogrenci.txt","a+");
    gecici=fopen("a.txt","a");
    if(dosya==NULL){printf("\n\nDOSYA ACÝLAMADÝ...\n\a");
    }
 
    else{
    printf("OGRENCININ ADI:");
    scanf("%s",ogrenciyeni.ad);
    printf("OGRENCININ SOYADI:");
    scanf("%s",ogrenciyeni.soyad);
    printf("OGRENCININ NUMARASI:");
    scanf("%d",&ogrenciyeni.no);
    ogrenciyeni.kontrol=1;
    int hata=0;
 
                     fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);
                     while(!feof(dosya)){
                   
                                        if(ogrenci.kontrol==1&&ogrenci.no==ogrenciyeni.no) {
                                                         hata=1;                                              
                                                         }              
                      fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);              
                                        }
                      fclose(dosya);  
                      dosya=fopen("ogrenci.txt","a+");
 
                   

                           if(hata==0){
               
                                        fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);
                                        while(!feof(dosya)){
                       
                                        i=0;      
                                        while(ogrenciyeni.ad[i]==ogrenci.ad[i]){
                                                  i++;
                                                  }
                                                                 
                                        if(ogrenciyeni.ad[i]>ogrenci.ad[i]){
                                        fprintf(gecici,"%10s%10s%10d%5d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no,ogrenci.kontrol);                                
                                               }                
                                        else{
                                             for(i=0;ogrenci.ad[i];i++){
                                                                        gecici1[i]=ogrenci.ad[i];  
                                                                        }
                                                                       while(i<9){
                                                                                  gecici1[i]=' ';    
                                                                                 i++;
                                                                                 }  
             
                                                                                 gecici1[i]='\0';    
                                            for(i=0;ogrenciyeni.ad[i];i++){
                                                                           ogrenci.ad[i]=ogrenciyeni.ad[i];  
                                                                           }
                                                                 while(i<9){
                                                                            ogrenci.ad[i]=' ';    
                                                                            i++;
                                                                            }  
                                                                            ogrenci.ad[i]='\0';          
                               
                   
                                             for(i=0;gecici1[i];i++){
                                                                     ogrenciyeni.ad[i]=gecici1[i];
                                                                     }
                                                           while(i<9){
                                                                       ogrenciyeni.ad[i]=' ';    
                                                                       i++;    
                                                                       }
                                                                             ogrenciyeni.ad[i]='\0';                    
                     
             
             
                                              
                                            for(i=0;ogrenci.soyad[i];i++){
                                                                          gecici1[i]=ogrenci.soyad[i];  
                                                                         }
                                                              while(i<9){
                                                                         gecici1[i]=' ';    
                                                                         i++;
                                                                         }  
             
                                                                          gecici1[i]='\0';    
                                               for(i=0;ogrenciyeni.soyad[i];i++){
                                                                                ogrenci.soyad[i]=ogrenciyeni.soyad[i];  
                                                                                 }
                                                               while(i<9){
                                                                          ogrenci.soyad[i]=' ';    
                                                                          i++;
                                                                          }  
                                                                                  ogrenci.soyad[i]='\0';          
                               
                   
                                             for(i=0;gecici1[i];i++){
                                                                     ogrenciyeni.soyad[i]=gecici1[i];
                                                                     }
                                                                      while(i<9){
                                                                                  ogrenciyeni.soyad[i]=' ';    
                                                                                  i++;    
                                                                                  }
                                                                                   ogrenciyeni.soyad[i]='\0';    
            
         
                                                                      temp=ogrenci.no;
                                                                      ogrenci.no=ogrenciyeni.no;
                                                                       ogrenciyeni.no=temp;
       
                                                                      temp=ogrenci.kontrol;
                                                                      ogrenci.kontrol=ogrenciyeni.kontrol;
                                                                      ogrenciyeni.kontrol=temp;
             
                                               fprintf(gecici,"%10s%10s%10d%5d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no,ogrenci.kontrol);            
                                              }                    
                                               fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);                  
                                              }
       
       
                                            fprintf(gecici,"%10s%10s%10d%5d\n",ogrenciyeni.ad,ogrenciyeni.soyad,ogrenciyeni.no,ogrenciyeni.kontrol);
       
          printf("ogrenci BASARIYLA EKLENDI....\n\n");
          fclose(dosya);
          fclose(gecici);
       
          remove("ogrenci.txt");
          rename("a.txt","ogrenci.txt");
       
          }
   
     else{
               
       printf("\n\nogrenci YAPILAMADI...\a\a\n\n");
       fclose(dosya);  
       fclose(gecici);  
               remove("a.txt");
         
           }
     
   
       }
   
      } 
      
      
      
      void  ogrencilistele(){
         int i,j;
         char temp[10];  
      struct ogrenci ogrenci;
      FILE *dosya;
      dosya=fopen("ogrenci.txt","r");
      if(dosya==NULL){
      printf("DOSYA ACILAMADI...\a\a\n");                                                                                                    
                     }
      else{
                fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);  
                 while(!feof(dosya)){
                                     if(ogrenci.kontrol==1){
                                      printf("%10s%10s%10d  %10s\n",ogrenci.ad,ogrenci.soyad,ogrenci.no,bolum);
									               
                                                            }            
                fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);  
				fprintf(dosya,bolum);                 
                                     }    
          }
    fclose(dosya);
     
   
                       }    
                       


   void ogrenciara(){
     int  i,j, bulunan=0,uzunluk=0;
     struct ogrenci ogrenci;
     char aranan[10];
     FILE*dosya;
     dosya=fopen("ogrenci.txt","r");
     if(dosya==NULL){printf("\n\nDOSYA ACILAMADI...\n\n\a");
                    }
     else{  
          printf("\n\nARANAN OGRENCININ ADI:");
          scanf("%s",aranan);
       
                  for(i=0;aranan[i]!='\0';i++){
                               uzunluk++;     }
     
       
       fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);
      while(!feof(dosya)){
                       
                         if(ogrenci.kontrol==1){
                                                 j=0;
                                                 for(i=0;ogrenci.ad[i]!='\0';i++){
             
                             if(aranan[j]==ogrenci.ad[i]){
                                                           j++;
         
                                                         if(j==uzunluk){
                                                                        printf("%10s%10s%10d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no);                
                                                                        bulunan++;      
                                                                        }
                                                           }  
       
                                                          else{j=0;
                                                               }                          
                                     
                                                                                      }  
                                                  }                          
                           
          fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);  
                            }            
         fclose(dosya);
       
         if(bulunan==0){
          printf("\n\nARANAN KRÝTERE GORE ogrenci BULUNAMADI..\a\n\n");
                        }
         else{
         printf("\n\nTOPLAM %d ogrenci BULUNDU....\n\n",bulunan); }
              }
     }
     
    
void dersekle(){
   
 
    int i,j,temp;
    char gecici1[10];
    struct ders dersyeni,ders;
    FILE *dersdosya,*dersgecici;
    dersdosya=fopen("ders.txt","a+");
    dersgecici=fopen("a.txt","a");
    if(dersdosya==NULL){printf("\n\nDOSYA ACÝLAMADÝ...\n\a");
    }
 
    else{
    printf("DERS ADI:");
    scanf("%s",ders.dersAdi);
    printf("DERS KREDISI:");
    scanf("%d",&ders.kredisi);
    printf("DERS KODU:");
    scanf("%d",&ders.dersKodu);
   ders.kontrol=1;
    int hata=0;
 
                     fscanf(dersdosya,"%s%d%d",&ders.dersAdi,&ders.dersKodu,&ders.kredisi);
                     while(!feof(dersdosya)){
                   
                                                 
                      fscanf(dersdosya,"%s%d%d",&ders.dersAdi,&ders.dersKodu,&ders.kredisi);              
                                        }
                      fclose(dersdosya);  
                      dersdosya=fopen("ders.txt","a+");
 
                   

                           if(hata==0){
               
                                        fscanf(dersdosya,"%s%d%d",&ders.dersAdi,&ders.dersKodu,&ders.kredisi);
                                        while(!feof(dersdosya)){
                       
                                        i=0;      
                                        while(dersyeni.dersAdi[i]==ders.dersAdi[i]){
                                                  i++;
                                                  }
                                                                 
                                        if(dersyeni.dersAdi[i]>ders.dersAdi[i]){
                                        fprintf(dersdosya,"%s%d%d",ders.dersAdi,ders.dersKodu,ders.kredisi);                                
                                               }                
                                        else{
                                             for(i=0;ders.dersAdi[i];i++){
                                                                        gecici1[i]=ders.dersAdi[i];  
                                                                        }
                                                                       while(i<9){
                                                                                  gecici1[i]=' ';    
                                                                                 i++;
                                                                                 }  
             
                                                                                 gecici1[i]='\0';    
                                            for(i=0;dersyeni.dersAdi[i];i++){
                                                                           ders.dersAdi[i]=dersyeni.dersAdi[i];  
                                                                           }
                                                                 while(i<9){
                                                                            ders.dersAdi[i]=' ';    
                                                                            i++;
                                                                            }  
                                                                            ders.dersAdi[i]='\0';          
                               
                   
                                             for(i=0;gecici1[i];i++){
                                                                     dersyeni.dersAdi[i]=gecici1[i];
                                                                     }
                                                           while(i<9){
                                                                       dersyeni.dersAdi[i]=' ';    
                                                                       i++;    
                                                                       }
                                                                             dersyeni.dersAdi[i]='\0';                    
                     
             
             
                                              
                                                
            
         
                                                                      temp=ders.kredisi;
                                                                      ders.kredisi=dersyeni.kredisi;
                                                                       dersyeni.kredisi=temp;
       
                                                                      
             
                                               fprintf(dersdosya,"%s%d%d",ders.dersAdi,ders.dersKodu,ders.kredisi);            
                                              }                    
                                               fscanf(dersdosya,"%s%d%d",&ders.dersAdi,&ders.dersKodu,&ders.kredisi);                  
                                              }
       
       
                                            fprintf(dersgecici,"%s%d%d",ders.dersAdi,ders.dersKodu,ders.kredisi);
       
          printf("ogrenci BASARIYLA EKLENDI....\n\n");
          fclose(dersdosya);
          fclose(dersgecici);
       
          remove("ders.txt");
          rename("a.txt","ders.txt");
       
          }
   
     else{
               
       printf("\n\nogrenci YAPILAMADI...\a\a\n\n");
       fclose(dersdosya);  
       fclose(dersgecici);  
               remove("a.txt");
         
           }
     
   
       }
   
      } 


void guncelleme(){
   
     char gecici1[10];
     int gun_no,temp;
     struct ogrenci ogrenci,ogrenciyeni;
     FILE *dosya,*gecici;
     dosya=fopen("ogrenci.txt","r+");
   
   
     if(dosya==NULL){
                                   printf("\n\nDOSYA ACILAMADI...\a\n\n");
                                 
                                   }
     else{
          gecici=fopen("a.txt","a+");
          ogrencilistele();
          printf("GUNCELLENECEK OGRENCI NO:");
          scanf("%d",&gun_no);
       
          int var=0;
          fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);
      while(!feof(dosya)){
                          if(gun_no==ogrenci.no&&ogrenci.kontrol==1){
                         var=1;                                  
                          printf("OGRENCI ADI:");scanf("%s",ogrenciyeni.ad);                                      
                          printf("OGRENCI SOYADI:");scanf("%s",ogrenciyeni.soyad);
                          printf("OGRENCI NO:");scanf("%d",&ogrenciyeni.no);
                          ogrenciyeni.kontrol=1;
                                                             
                                                              }      
          fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);            
                          }  
      if(var==0){
                 printf("ogrenci BULUNAMADI...\a\a\n\n");
                 fclose(dosya);
                 fclose(gecici);
                 remove("a.txt");
               
                 }  
      else{  
    fclose(dosya);
    dosya=fopen("ogrenci.txt","a+");
       
      
       
       
           int hata=0;      
          fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);
          while(!feof(dosya)){
             if(gun_no==ogrenci.no&&ogrenci.kontrol==1){
                                                     }              
                         else if(ogrenci.no==ogrenciyeni.no&&ogrenci.kontrol==1) {
                                                                       hata=1;                                          
                                                                      }            
          fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);              
                              }
                           
                           
                           
         if(hata==1){
                   
                  fclose(dosya);
                 fclose(gecici);
                 
         remove("a.txt");  
         printf("\n\nogrenci GUNCELLENEMEDI...\a\a\n\n");
                 
                      ogrencilistele();
                   }
                   
         else{
              fclose(dosya);
              dosya=fopen("ogrenci.txt","a+");
           
            fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);
                                 while(!feof(dosya)){
                                                     int i=0;
                             
                                                      while(ogrenciyeni.ad[i]==ogrenci.ad[i]){
                                                                                              i++;
                                                                                              }              
                                                      if(ogrenciyeni.ad[i]>ogrenci.ad[i]){
                                                                                          if(gun_no==ogrenci.no&&ogrenci.kontrol==1) {                          
                                                                                                  ogrenci.kontrol=0;                          
                                                   fprintf(gecici,"%10s%10s%10d%5d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no,ogrenci.kontrol);  
                                                           }
                                                                                          else{
                 
                                                  fprintf(gecici,"%10s%10s%10d%5d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no,ogrenci.kontrol);  
                                                                                                }                          
                                                                                          }              
                else{
            if(ogrenci.no==gun_no&&ogrenci.kontrol==1){
                        ogrenci.kontrol=0;
    for(i=0;ogrenci.ad[i];i++){
                gecici1[i]=ogrenci.ad[i];  
                                      }
               while(i<9){
                    gecici1[i]=' ';    
                   i++;  }  
             
                gecici1[i]='\0';    
            for(i=0;ogrenciyeni.ad[i];i++){
                ogrenci.ad[i]=ogrenciyeni.ad[i];  
                                           }
               while(i<9){
               ogrenci.ad[i]=' ';    
                   i++;   }  
              ogrenci.ad[i]='\0';          
                               
                   
              for(i=0;gecici1[i];i++){
              ogrenciyeni.ad[i]=gecici1[i];
                                      }
              while(i<9){
                    ogrenciyeni.ad[i]=' ';    
                   i++;    
                        }
               ogrenciyeni.ad[i]='\0';                    
                     
             
             
           
           for(i=0;ogrenci.soyad[i];i++){
                gecici1[i]=ogrenci.soyad[i];  
                                      }
               while(i<9){
                    gecici1[i]=' ';    
                   i++;  }  
             
                gecici1[i]='\0';    
            for(i=0;ogrenciyeni.soyad[i];i++){
                ogrenci.soyad[i]=ogrenciyeni.soyad[i];  
                                           }
               while(i<9){
               ogrenci.soyad[i]=' ';    
                   i++;   }  
              ogrenci.soyad[i]='\0';          
                               
                   
              for(i=0;gecici1[i];i++){
              ogrenciyeni.soyad[i]=gecici1[i];
                                      }
              while(i<9){
                    ogrenciyeni.soyad[i]=' ';    
                   i++;    
                        }
               ogrenciyeni.soyad[i]='\0';    
          
         
          temp=ogrenci.no;
          ogrenci.no=ogrenciyeni.no;
          ogrenciyeni.no=temp;
       
          temp=ogrenci.kontrol;
          ogrenci.kontrol=ogrenciyeni.kontrol;
          ogrenciyeni.kontrol=temp;                
                 
                 
            fprintf(gecici,"%10s%10s%10d%5d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no,ogrenci.kontrol);      
                   
                     }
              else{
                   for(i=0;ogrenci.ad[i];i++){
                gecici1[i]=ogrenci.ad[i];  
                                      }
               while(i<9){
                    gecici1[i]=' ';    
                   i++;  }  
             
                gecici1[i]='\0';    
            for(i=0;ogrenciyeni.ad[i];i++){
                ogrenci.ad[i]=ogrenciyeni.ad[i];  
                                           }
               while(i<9){
               ogrenci.ad[i]=' ';    
                   i++;   }  
              ogrenci.ad[i]='\0';          
                               
                   
              for(i=0;gecici1[i];i++){
              ogrenciyeni.ad[i]=gecici1[i];
                                      }
              while(i<9){
                    ogrenciyeni.ad[i]=' ';    
                   i++;    
                        }
               ogrenciyeni.ad[i]='\0';                    
                     
             
             
           
           for(i=0;ogrenci.soyad[i];i++){
                gecici1[i]=ogrenci.soyad[i];  
                                      }
               while(i<9){
                    gecici1[i]=' ';    
                   i++;  }  
             
                gecici1[i]='\0';    
            for(i=0;ogrenciyeni.soyad[i];i++){
                ogrenci.soyad[i]=ogrenciyeni.soyad[i];  
                                           }
               while(i<9){
               ogrenci.soyad[i]=' ';    
                   i++;   }  
              ogrenci.soyad[i]='\0';          
                               
                   
              for(i=0;gecici1[i];i++){
              ogrenciyeni.soyad[i]=gecici1[i];
                                      }
              while(i<9){
                    ogrenciyeni.soyad[i]=' ';    
                   i++;    
                        }
               ogrenciyeni.soyad[i]='\0';    
           
         
          temp=ogrenci.no;
          ogrenci.no=ogrenciyeni.no;
          ogrenciyeni.no=temp;
       
          temp=ogrenci.kontrol;
          ogrenci.kontrol=ogrenciyeni.kontrol;
          ogrenciyeni.kontrol=temp;      
           
                 
            fprintf(gecici,"%10s%10s%10d%5d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no,ogrenci.kontrol);
                 
                 
                 
                   }    
                   
                   
                   
                           
                   
                     }              
            fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);              
                                }
            fprintf(gecici,"%10s%10s%10d%5d\n",ogrenciyeni.ad,ogrenciyeni.soyad,ogrenciyeni.no,ogrenciyeni.kontrol);
         
         
            fclose(dosya);
            fclose(gecici);
            remove("ogrenci.txt");
         
            rename("a.txt","ogrenci.txt");
         
         
            printf("\n\nogrenci BASARIYLA GUNCELLENDI...\n\n");
    ogrencilistele();
              }
              }
          }
 
   
     }
     
     
void ogrencisil(){
   
     ogrencilistele();
   
   
     struct ogrenci ogrenci;
     int sil_no,bulunan=0,var=0;
   
   
     FILE*dosya1,*dosya2;
   
     dosya1=fopen("ogrenci.txt","r");
           if(dosya1==NULL){printf("\n\nDOSYA ACILAMADI...\n\n\a");
                           }
           else{
                dosya2=fopen("yeni.txt","a");  
                printf("\n\nsilinecek ismin numarasini giriniz....");
                scanf("%d",&sil_no);
 
                 fscanf(dosya1,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);
                 while(!feof(dosya1)){
                                       if(sil_no==ogrenci.no &&  ogrenci.kontrol==1)  {
                                       var=1;        
                                       ogrenci.kontrol=0;
                                        fprintf(dosya2,"%10s%10s%10d%5d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no,ogrenci.kontrol);                                        
                                                                           }
                                        else{
                                              fprintf(dosya2,"%10s%10s%10d%5d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no,ogrenci.kontrol);
                                             }
   
                   fscanf(dosya1,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);
                                       }
 
                         
 
                      if(var==0){
                                printf("\n\nogrenci BULUNAMADI...\a\a\n\n");      
                                 }
                      else{
                                printf("\n\nogrenci BASARIYLA SILINDI.....\n\n");
                          }

     fclose(dosya1);
     fclose(dosya2);
   
    
       remove("ogrenci.txt");
       rename("yeni.txt","ogrenci.txt");
     }
     ogrencilistele();
     }
     
     
     
    void derslistele(void){ 
    int i,j;
         char temp[10];  
      
      FILE *dersdosya;
      dersdosya=fopen("ders.txt","r");
      if(dersdosya==NULL){
      printf("DOSYA ACILAMADI...\a\a\n");                                                                                                    
                     }
      else{
                fscanf(dersdosya,"%s%d%d%d",&ders.dersAdi,&ders.kredisi,&ders.dersKodu,&ders.kontrol);  
                 while(!feof(dersdosya)){
                                     if(ders.kontrol==1){
                                     	printf("%10s%10d%10d  %10s\n",ders.dersAdi,ders.dersKodu,ders.kredisi,bolum);
									 }
                                      
									               
                                                                       
                fscanf(dersdosya,"%s%d%d%d",&ders.dersAdi,&ders.kredisi,&ders.dersKodu,&ders.kontrol);  
				fprintf(dersdosya,bolum);                 
                                     }    
          }
    fclose(dersdosya);
    	
	}
