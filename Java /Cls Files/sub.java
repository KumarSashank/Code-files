import java.util.Scanner;
class main{ 
    public static void main(String[] main)
    { Scanner sc=new Scanner(System.in);
         int arr[]=new int[8];
          int ans[]=new int[8];
           int ind,itr; 
           int num=sc.nextInt(); 
           int day=sc.nextInt(); 
           for(itr=0;itr<num;itr++)  arr[itr]=sc.nextInt(); for(itr=1;itr<=day;itr++) { ans[0]=arr[1]; ans[7]=arr[6]; for(ind=1;ind<7;ind++) ans[ind]=arr[ind-1]^arr[ind+1];
     for(ind=0;ind<8;ind++) arr[ind]=ans[ind]; } for(ind=0;ind<8;ind++) System.out.println(arr[ind]);}}sss