#include<stdio.h>
#include<string.h>
struct player{
		int jerseyno;
		char playername[100];
		int runs;
		int wickets;
		int matches;
	};
	int main(){
	struct player p[100];
	int n=0,choice,i,jerseyno,found;
	
	while(1){
		printf("\n  Player Management System   \n");
		printf("1. Add Player \n");
		printf("2. Display All players \n");
		printf("3. Search Players \n");
		printf("4. Update player \n");
		printf("5. Delete player \n");
		printf("6.Exit\n");
		printf("Enter Choice \n");
		scanf("%d",&choice);
		
		if(choice==1){
			printf("enter a jersey no: ");
			scanf("%d",&p[n].jerseyno);
			
			printf("enter player name: ");
			scanf("%s",&p[n].playername);
			
			printf("enter runs: ");
			scanf("%d",&p[n].runs);
			
			printf("enter wickets: ");
			scanf("%d",&p[n].wickets);
			
			printf("enter matches: ");
			scanf("%d",&p[n].matches);n++;
			
			printf("player added! \n ");
			
		}
		else if(choice==2){
			if(n==0)
			printf("no player available");
			else
			for(i=0; i<n; i++){
			
			printf("\n player %d\n",i+1);
			printf("jersey no : %d\n",p[i].jerseyno);
			printf("player name :%s\n",p[i].playername);
			printf("runs :%d\n",p[i].runs);
			printf("wickets :%d\n",p[i].wickets);
			printf("matches :%s\n",p[i].matches);
			
		    }
		}

	else if(choice==3)
	{
		printf("enter jerseyno to search: ");
			scanf("%d",&jerseyno);
			found=0;
			for(i=0;i<n;i++){
				if(p[i].jerseyno==jerseyno){
			
			printf("\nplayer found\n");		
			printf("player name :%s\n",p[i].playername);
			printf("runs :%d\n",p[i].runs);
			printf("wickets :%d\n",p[i].wickets);
			printf("matches :%d\n",p[i].matches);
		    
		    
		    found=1;
		    printf("player updated !\n");
		    break;
					
				}
			}
			if(found==0)
			printf("player not found! \n");
			
	}
	else if(choice==5){
		printf("enter jersey no to delete: ");
		scanf("%d",&jerseyno);
		found=0;
		for(i=0;i<n;i++)
		if(p[i].jerseyno==jerseyno)
		{
			for(int k=i; k<n-1; k++){
				p[k]=p[k+1];
			}
			n--;
			found=1;
			printf("player deleted! \n");
		}
		else if(choice==6){
			printf("exit!\n");
			break;
		}
		else{
			printf("invalid choice!\n");
		}
	}	
	}
	}