// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
 long int left=1,right=n,mid=0;
 while(left<right){
     mid=(left+right)/2;
     if(isBadVersion(mid)){
         right=mid;
     }
     else{
         left=mid+1;
     }
 }
 return right;
}
