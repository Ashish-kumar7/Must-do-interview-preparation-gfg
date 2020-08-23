	int t;
	cin>>t;
	while(t--){
	    string s1;
	    string s2;
	    cin>>s1;
	    cin>>s2;
	    int arr1[26];
	    int arr2[26];
	    for(int i=0;i<26;i++){
	        arr1[i]=0;
	    }
	    for(int i=0;i<26;i++){
	        arr2[i]=0;
	    }
	    for(int i=0;i<s1.length();i++){
	        arr1[s1[i]-'a']++;
	    }
	    for(int i=0;i<s2.length();i++){
	        arr2[s2[i]-'a']++;
	    }
	    int flag=0;
	    for(int i=0;i<26;i++){
	        if(arr1[i]!=arr2[i]){
	            flag=1;
	            break;
	        }
	    }
	    
	    if(flag==0){
	        cout<<"YES"<<endl;
	    }
	    else {
	        cout<<"NO"<<endl;
	    }
	    
	    
	    
	    
	}
	return 0;
}