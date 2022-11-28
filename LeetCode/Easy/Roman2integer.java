
class Solution {
    public int romanToInt(String s) {
            char c,temp='\0';
            int sum=0,i;
            int top = s.length();
            top--;
            while(top!=-1)
            {
                c= s.charAt(top);
                top--;
                if(c=='I'&& prio(c)>=prio(temp))
                    sum++;
                else if(c=='I'&& prio(c)<prio(temp))
                    sum--;
                else if(c=='V'&&prio(c)>=prio(temp))
                    sum=sum+5;
                else if(c=='V'&&prio(c)<prio(temp))
                    sum=sum-5;
                else if(c=='X'&&prio(c)>=prio(temp))
                    sum=sum+10;
                else if(c=='X'&&prio(c)<prio(temp))
                    sum=sum-10;
                else if(c=='L'&&prio(c)>=prio(temp))
                    sum=sum+50;
                else if(c=='L'&&prio(c)<prio(temp))
                    sum=sum-50;
                else if(c=='C'&&prio(c)>=prio(temp))
                    sum=sum+100;
                else if(c=='C'&&prio(c)<prio(temp))
                    sum=sum-100;
                else if(c=='D'&&prio(c)>=prio(temp))
                    sum=sum+500;
                else if(c=='5'&&prio(c)<prio(temp))
                    sum=sum-500;
                else if(c=='M'&&prio(c)>=prio(temp))
                    sum=sum+1000;

                else if(c=='M'&&prio(c)<prio(temp))
                    sum=sum-1000;
                temp=c;
            }
        return sum;
        
    }
    
    
    int prio(char c){
        int temp=0;
        switch(c)
        {
            case '\0':
                temp= 0;
                break;
            case 'I':
                temp= 1;
                     break;
            case 'V':
                temp= 2;
                 break;
            case 'X':
                temp= 3;
                 break;   
            case 'L':
                temp= 4;
                 break;     
            case 'C':
                temp= 5;
                 break; 
            case 'D':
                temp= 6;
                 break;
            case 'M':
                temp= 7;
                 break;                            
        }
        return temp;
    }
}