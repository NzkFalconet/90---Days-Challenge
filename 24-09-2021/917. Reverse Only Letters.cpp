class Solution {
public:
    int charCheck(char input_char)
{
    // CHECKING FOR ALPHABET
    if ((input_char >= 65 && input_char <= 90)
        || (input_char >= 97 && input_char <= 122))
        return 1;

   else
    return 0;
}

    string reverseOnlyLetters(string s) {
        int i=0;
    int j=s.size()-1;
    while(i<j)
    {


        if(charCheck(s[i])==1 && charCheck(s[j])==1)
        {
           char temp;
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
     else   if(charCheck(s[i])==1 && charCheck(s[j])==0)
        {

            j--;
        }
   else  if(charCheck(s[i])==0 && charCheck(s[j])==1)

        {

            i++;

        }
         else{
            i++;
            j--;
        }
     }
     return s;
    }
};
