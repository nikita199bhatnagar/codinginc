#include <stdio.h>

void main()
{
	//codet is no of tast cases


	int g=0,a[100],count[100],b,j,i,t,N,c1=0,c2=0;

	scanf("%d",&t);
      while(t>0)
      {
	  count[g]=0;
	 scanf("%d",&N);
	 for (i=0;i<N;i++)
	    scanf("%d",&a[i]);
	 b=a[0];
	 for (j=0;j<N;j++)
	 {
	    if(a[j]==b)
	    {
		count[g]=count[g]+1;

	    }
	 }
	// g++;
	 t--;
	 g++;
      }
      g--;
      for(i=0;i<=g;i++)
      {
	 if(count[i]>(N/2))
	   printf("%d\n",count[i]);
	 else
	   printf("NO Majority Element\n");

	}

}
