// // Reverse a string using recursion //

// #include<iostream>
// using namespace std;

// void reverse(string s)
// {
//     if(s.length() == 0) // base case 
//     {
//         return ;
//     }
//     string rev = s.substr(1);
//     reverse(rev);
//     cout<<s[0];
// }
// int main()
// {
//     reverse("binod");
// }


// pi replace pi with 3.14 in string 


// #include<iostream>
// using namespace std;

// void replacePi(string s)
// {
//     if(s.length() == 0)
//     {
//         return ;
//     }
//     if(s[0] == 'p' && s[1] == 'i')
//     {
//         cout<<"3.14";
//         replacePi(s.substr(2));
//     }
//     else
//     {
//         cout<<s[0];
//         replacePi(s.substr(1));

//     }
// }
// int main()
// {
//     replacePi("pippppiiiipi");
//     return 0 ;
// }


// TOWER OF HANOI //

// #include<iostream>
// using namespace std;

// void towerofHanoi(int n , char src , char dest , char helper)
// {
//     if(n==0)
//     {
//         return ; // base case 
//     }
//     towerofHanoi(n-1,src,helper,dest);
//     cout<<"Move from" << src << "to" << dest << endl;
//     towerofHanoi(n-1 , helper , dest , src);
// }
// int main()
// {
//     towerofHanoi(3,'A','C','B');
//     return 0;
// }

//// REMOVE ALL DUPLICATES FROM THE STRING //// 

// #include<iostream>
// using namespace std;

// string removeDup(string s)
// {
//     if(s.length() == 0)
//     {
//         return "";
//     }
//     char ch=s[0];
//     string ans = removeDup(s.substr(1));

//     if(ch==ans[0])
//     {
//         return ans;
//     }
//     return (ch+ans);
// }
// int main()
// {
//     cout<<removeDup("aaaaabbbeeeecccddd")<<endl;
//     return 0;
// }

/// MOVE ALL X TO THE END OF THE STRING //// 

// #include<iostream>
// using namespace std;
// string moveallX(string s)
// {
//     if(s.length()==0)
//     {
//          return "";
//     }
//     char ch=s[0];
//     string ans = moveallX(s.substr(1));

//     if(ch=='x')
//     {
//         return ans+ch;
//     }
//     return ch+ans;
// }
// int main()
// {
//     cout<<moveallX("axxbdxcefxhix")<<endl;
//     return 0;
// }


////// GENERATE ALL SUBSTRING OF A STRING //////

// #include<iostream>
// using namespace std;

// void subseq(string s , string ans)
// {
//     if(s.length()==0)
//     {
//         cout<<ans<<endl;
//         return ;
//     }

//     char ch=s[0];
//     string ros=s.substr(1);

//     subseq(ros,ans);
//     subseq(ros,ans+ch);
// }

// int main()
// {
//     subseq("ABC","");
//     cout<<endl;
// }


//// GENERATE SUBSTRINGS WITH ASCII NUMBER /// 

// #include<iostream>
// using namespace std;

// void subseq(string s , string ans)
// {
//     if(s.length() == 0)
//     {
//         cout<<ans<<endl;
//         return ;
//     }
//     char ch = s[0];
//     int code = ch ;
//     string ros = s.substr(1);

//     subseq(ros , ans);
//     subseq(ros , ans + ch );
//     subseq(ros , ans + to_string(code));
// }
// int main()
// {
//     subseq("AB","");
//     return 0 ;
// }


////// PRINT ALLL POSSIBLE WORD FROM PHONE DIGITS ///// 

#include<iostream>
using namespace std;

int main()
{

}