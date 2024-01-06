#include <stdio.h>

int main ()
{int a;
 if(scanf("%d",&a));
 switch(a%10)
   { case 1:
        switch(a/10)
           {case 1:printf("Faint signals, barely perceptible, unreadable.\n");break;
            case 2:printf("Faint signals, barely perceptible, barely readable, occasional words distinguishable.\n");break;
            case 3:printf("Faint signals, barely perceptible, readable with considerable difficulty.\n");break;
            case 4:printf("Faint signals, barely perceptible, readable with practically no difficulty.\n");break;
            case 5:printf("Faint signals, barely perceptible, perfectly readable.\n");break;
            default:printf("Error!\n") ;}
		break;
	 case 2	:
	    switch(a/10)
           {case 1:printf("Very weak signals, unreadable.\n");break;
            case 2:printf("Very weak signals, barely readable, occasional words distinguishable.\n");break;
            case 3:printf("Very weak signals, readable with considerable difficulty.\n");break;
            case 4:printf("Very weak signals, readable with practically no difficulty.\n");break;
            case 5:printf("Very weak signals, perfectly readable.\n");break;
            default:printf("Error!\n") ;}
		break;
	 case 3:
	   	switch(a/10)
           {case 1:printf("Weak signals, unreadable.\n");break;
            case 2:printf("Weak signals, barely readable, occasional words distinguishable.\n");break;
            case 3:printf("Weak signals, readable with considerable difficulty.\n");break;
            case 4:printf("Weak signals, readable with practically no difficulty.\n");break;
            case 5:printf("Weak signals, perfectly readable.\n");break;
            default:printf("Error!\n") ;}
		break;
	 case 4:
	    switch(a/10)
           {case 1:printf("Fair signals, unreadable.\n");break;
            case 2:printf("Fair signals, barely readable, occasional words distinguishable.\n");break;
            case 3:printf("Fair signals, readable with considerable difficulty.\n");break;
            case 4:printf("Fair signals, readable with practically no difficulty.\n");break;
            case 5:printf("Fair signals, perfectly readable.\n");break;
            default:printf("Error!\n") ;}
		break;
	 case 5:
	    switch(a/10)
           {case 1:printf("Fairly good signals, unreadable.\n");break;
            case 2:printf("Fairly good signals, barely readable, occasional words distinguishable.\n");break;
            case 3:printf("Fairly good signals, readable with considerable difficulty.\n");break;
            case 4:printf("Fairly good signals, readable with practically no difficulty.\n");break;
            case 5:printf("Fairly good signals, perfectly readable.\n");break;
            default:printf("Error!\n") ;}
		break;	
	 case 6:
	    switch(a/10)
           {case 1:printf("Good signals, unreadable.\n");break;
            case 2:printf("Good signals, barely readable, occasional words distinguishable.\n");break;
            case 3:printf("Good signals, readable with considerable difficulty.\n");break;
            case 4:printf("Good signals, readable with practically no difficulty.\n");break;
            case 5:printf("Good signals, perfectly readable.\n");break;
            default:printf("Error!\n") ;}
		break;
	 case 7:
	    switch(a/10)
           {case 1:printf("Moderately strong signals, unreadable.\n");break;
            case 2:printf("Moderately strong signals, barely readable, occasional words distinguishable.\n");break;
            case 3:printf("Moderately strong signals, readable with considerable difficulty.\n");break;
            case 4:printf("Moderately strong signals, readable with practically no difficulty.\n");break;
            case 5:printf("Moderately strong signals, perfectly readable.\n");break;
            default:printf("Error!\n") ;}
		break;
	 case 8:
	    switch(a/10)
           {case 1:printf("Strong signals, unreadable.\n");break;
            case 2:printf("Strong signals, barely readable, occasional words distinguishable.\n");break;
            case 3:printf("Strong signals, readable with considerable difficulty.\n");break;
            case 4:printf("Strong signals, readable with practically no difficulty.\n");break;
            case 5:printf("Strong signals, perfectly readable.\n");break;
            default:printf("Error!\n") ;}
		break;
	 case 9:
	    	switch(a/10)
           {case 1:printf("Extremely strong signals, unreadable.\n");break;
            case 2:printf("Extremely strong signals, barely readable, occasional words distinguishable.\n");break;
            case 3:printf("Extremely strong signals, readable with considerable difficulty.\n");break;
            case 4:printf("Extremely strong signals, readable with practically no difficulty.\n");break;
            case 5:printf("Extremely strong signals, perfectly readable.\n");break;
            default:printf("Error!\n") ;}
		break;
	 default:printf("Error!\n")	;				   
 }
  
}
