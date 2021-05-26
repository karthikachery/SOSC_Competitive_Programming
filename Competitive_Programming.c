#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    //declare variables

    int num;
    int choice;

    
        printf("Enter a number\n");
        scanf("%d",&num);

        printf("This is a menu driven Program\n");
        printf(" 1.Find if the number is Prime Number \n 2.Find if the number is square Number \n 3.Find if the number is cube Number \n");
        printf(" 4.Find the factorial of that Number \n 5.Find if the number is Palindrom Number \n 6.Find if the number is Neon Number \n");
        printf(" 7.Print fibonacci series till that number \n 8.Find if the number is Armstrong number\n 9.Find if the number is Disarium number\n");
        printf(" 10.Find if the number is Harshad Number\n");
        printf("Please Enter your choice : ");
        scanf("%d",&choice);
        printf("\n");

        if(choice == 1){
        
            for(int i=2 ; i<num/2 ;i++ ){
                if(num%i==0){
                    printf("%d is not a prime number\n",num);
                    return 0;
                }
            }
            printf("%d is a prime number\n",num);
        }

        else if(choice == 2){
            int rootInt;
            float rootFloat;

            rootFloat = sqrt(num);
            rootInt =(int)sqrt(num);

            if(rootFloat == rootInt){
                printf("%d is a square number",num);
            }
            else{
                printf("%d is not a square number",num);
            }
        }

        else if(choice == 3){
            double cubeRootDouble,doubleNum;
            int cubeRootInt;
            doubleNum=num;
            cubeRootDouble = cbrt(doubleNum);
            cubeRootInt = (int)cubeRootDouble;

            if(cubeRootDouble == cubeRootInt){
               printf("%d is a cube number",num); 
            }
            else{
                printf("%d is not a cube number",num); 
            }
        }

        else if(choice == 4){
            long long int prod=1;
            if(num == 0)
            {
                printf("factorial of %d is : %lld \n",num,prod);
            }
            else
            {
                for(int i=num; i>0;i--)
                {
                    prod = prod*i;
                }
                printf("Factorial of %d is : %lld \n",num,prod);
            }
            
        }

        else if(choice == 5){
            long rem,rev=0,n;
            n=num;
            while(n!=0)
            {
                rem = n%10;
                n = n/10;
                rev = rev*10+ rem;
            }

            if (rev == num)
            {
                printf("%d is a palindrom number",num); 
            }
            else 
            {
                printf("%d is not a palindrom number",num); 
            }
        }

        else if(choice == 6){
           long int square,rem,sum=0;
            square=num*num;
           while (square != 0)
           {
               rem = square%10;
               square = square/10;
               sum=sum+rem;
           }

           if (num == sum){
               printf("%d is a neon number",num);
           }
           else{
               printf("%d is not a neon number",num);
           }
        }
        else if( choice == 7){
            int first=0,second=1,temp;

            while(first<=num){

                printf("%d ",first);
                temp = first;
                first = second;
                second= temp+second;
            }
        }

        else if(choice == 8){
            int sum=0,n,rem;

            n=num;
            while(n!=0){
                rem = n%10;
                n = n/10;
                sum = sum+rem*rem*rem;
            }

            if(num == sum){

                 printf("%d is a Armstrong number",num);
            }
            else{

                printf("%d is not a Armstrong number",num);
            }
        }

        else if (choice == 9){

          int rem,n,rev=0;
          double sum=0,i=1;

          n=num;

          while(n != 0){
              rem = n%10;
              n = n/10;
              rev = rev*10 + rem;
          }  	

          while(rev != 0){
              rem = rev%10;
              rev = rev/10;
              sum = sum+ pow(rem,i);
              i++;
          }

          if(num == sum){

              printf("%d is a disarium number",num);
          }
          else{

              printf("%d is not a disarium number",num);
          }

        }

        else if(choice == 10){
            int n,rem,sum=0;

            n=num;
            while(n != 0){

                rem = n%10;
                n = n/10;
                sum = sum+rem;
            }
            
            if(num%sum == 0){

                printf("%d is a Harshad number",num);
            }
            else{

                printf("%d is not a Harshad number",num);
            }
        }
        else{

            printf("Invalid choice entry\n");
        }

        
   return 0; 
}