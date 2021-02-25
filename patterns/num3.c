
main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
      {
          if(j>=6-i&&j<=5)
          {
           printf("%d",6-i);
          }
          else
          {
           printf(" ");
          }
      }
      printf("\n");
    }
}

