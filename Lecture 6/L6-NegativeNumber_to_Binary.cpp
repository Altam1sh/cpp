// int n,ans=0,i;
// 	cin>>n;
// 	int t=~n;
// 	cout<<t;
// 	while(t){
// 		int bit=t&1;
// 		ans=bit*pow(10,i)+ans;
// 		t=t>>1;
// 		i++;
// 	}
// 	cout<<ans;



// int n;
//     cout << "Enter the decimal number: ";
//     cin >> n;

//     int ans = 0;
//     int i = 0;
//     if(n < 0) {
//         n = -1 * n;
//     }
//     while (n != 0)
//     {
//         int bit = n & 1; //reads last bit
//         ans = ans + (bit * pow(10, i));
//         n = n >> 1; //helps to read the other bits by shifting it to the right
//         i++; 
//     }  
//     cout<< "Binary equivalent: " << (~ans + 1) * -1;




// int n;
// cin>>n;
// int ans=0;
// int i=0;
// n*=-1;
// while(n){

// int bit=n&1;
// ans=bit*pow(10,i)+ans;
// n=n>>1;
// i++;
// }

// int ones=~(ans);
// int twos=ones+1;

// int ones1=~(twos);
// int twos2=ones1+1;
// cout<<twos2;