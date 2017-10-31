void main()
{
    int m,n=2,jc=1;
    scanf("%d",&m);
    //for (n = 2; jc <= m; n++)
      //  jc = jc * n;
    while(jc<=m)
    {
        jc*=n;
        n++;
    }  
    printf("n = %d\n", n-2);
    getchar();
    getchar();
}