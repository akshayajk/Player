
int main()
{
    string str;
    cin>>str;
    for(int i=0;i<=str.length();i++)
    {
        
        if(str[i]=='x')
        {
            str[i]='a';
        }else if(str[i]=='X')
        {
            str[i]='A';
        }
        else if(str[i]=='y')
        {
            str[i]='b';
        }else if(str[i]=='Y')
        {
            str[i]='B';
        }
         else if(str[i]=='z')
        {
            str[i]='c';
        }else if(str[i]=='Z')
        {
            str[i]='C';
        }else{
            str[i]=str[i]+3;
        }
        
    }
    cout<<str;
    return 0;
}
