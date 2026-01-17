#include <stdio.h>
#include <stdlib.h>
#include <time.h>
s
int main()
{
    int n,i,j,sayi,uygun,a,b,sansli,eleman,satirmin,sutunmax,k;

    srand(time(NULL));

    printf("n i girin ");
    scanf("%d",&n);

    int matris[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(;;){
                sayi=rand()%(n*n)+1;

                uygun=1;

                for(a=0;a<n;a++){
                    for(b=0;b<n;b++){
                        if(matris[a][b]==sayi){
                            uygun=0;
                            break;
                        }
                    }
                    if(uygun==0){
                        break;
                    }
                }

                if(uygun==1){
                    break;
                }



            }

            matris[i][j]=sayi;



        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }

    sansli=0;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            eleman=matris[i][j];
            satirmin=1;
            sutunmax=1;

            for(k=0;k<n;k++){
                if(matris[i][k]<eleman){
                    satirmin=0;
                    break;
                }
            }

            if(satirmin==1){
                for(k=0;k<n;k++){
                    if(matris[k][j]>eleman){
                        sutunmax=0;
                        break;
                    }
                }
            }
            else{
                sutunmax=0;
            }

            if(satirmin==1 && sutunmax==1){
                printf("sansli sayi %d dir",eleman);
                sansli=1;
            }


        }
    }

    if(sansli==0){
        printf("sansli sayi yoktur");
    }






    return 0;
}
