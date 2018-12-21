  for(int i=0;i<n;++i){
        cin>>a[i];
      }
      int max = 0;
      for(int j=0; j<n;++j){
        if(a[j]>max){
          max = a[j];
        }
      }
      cout<<max