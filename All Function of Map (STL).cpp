#include<iostream>
#include<map>
#include<conio.h>
#include<stdlib.h>

using namespace std;

    void task1()
    {
         map<char,int>m;
    map<char,int>m1;
    map<char,int>::iterator p;
        int n,i;
        cout<<"Enter value of before stop lope:\n";
        cout<<"Press...";

        cin>>n;
        for(i=0;i<n;i++){
            m.insert(pair<char,int>('A'+i,1+i));




        }
        cout<<"here we insert number and using pair statement in 'm'\n";
        cout<<endl;
        cout<<"Enter char type key to find near this value:";
        cout<<endl;
        char ch;
        cout<<"Press...";


        cin>>ch;
        p = m.find(ch);
        if (p!=m.end())
            cout<<"Near Value is : " << p->second;
        else
            cout<<"It's can't store in a map";
            cout<<endl;
            cout<<"Now copy value of m to m1:\n";
            m1.insert(m.begin(),m.end());
            p=m1.begin();
            for(;p!=m1.end();p++){
                cout<<(*p).first<<"=>"<<(*p).second<<endl;
            }

    }
    void task2()
    {
           int i,n,p;
           char ch;
    cout<<endl;
  map<char,int> mymap;
  map<char,int>::iterator it;
  cout<< "Enter value before stop loop : \n";
  cout<<"Press...";

  cin>>n;


  for(i=0;i<n;i++){
    mymap.insert(pair<char,int>('A'+i,i+1));
  }




  //it=mymap.find(ch);
  it=mymap.begin();

  for (; it != mymap.end(); it++ )
    cout << (*it).first << " => " << (*it).second << endl;

cout<< "For prove to Erase Fact press 1 to cotinue.........";
cout<<endl;
cout<<"Press...";

cin>>p;
    switch(p)
     {



 case 1 : mymap.erase (mymap.begin(),mymap.end());

         for (it=mymap.begin(); it != mymap.end(); it++ ){
             cout << (*it).first << " => " << (*it).second << endl;
         }
    cout<<endl;
    cout<<"empty";
    cout<<endl;
      }
    }
    void task3()
    {
        int x,y,i,z,j,flt;
    char ch;
   map<char,int>mp;
   map<char,int>::iterator itr;
   cout<<"Enter number for limitation running loop : \n";
   cout<<"Press...";

   cin>>z;
   cout<<endl;
   for(i=0;i<z;i++){
    mp.insert(pair<char,int>('A'+i,i+1));
   }
   cout << "KEY\tELEMENT\n";

    for ( itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
    cout<<"What character you want to erase press here(must be uppercase)... : \n";
    cout<<"Press...";

    cin>>ch;


    mp.erase(ch);
    for ( itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
    cout<<"This term is erase before 'I' : \n";
    //cin>>flt;
    mp.erase(mp.begin(),mp.find('I'));
    for ( itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }


    }
    void task4()
    {int i,n,k;
    map<char,bool> m;
    map<char,bool>::iterator it;
    cout<<endl;
    cout<<"Enter limitation for running loop : ";
    cout<<endl;
    cout<<"Press...";

    cin>>n;
    for(i=0;i<n;i++){
            if(i%2==0){
            m.insert(pair<char,bool>('A'+i,true));
            }
            else{
                    m.insert(pair<char,bool>('A'+i,false));

            }


             }
    char ch;
    //it=m.find(ch);
    it=m.begin();
    for (; it != m.end(); it++ ){
    cout << (*it).first << " => "<<boolalpha << (*it).second << endl;

    }
    cout<<"Example of template <class Inlter> press '1' to continue........\n";
    cout<<"Press...";
    cin>>k;
    switch(k){
        case 1:




    map<int, int> mp;
     map<int, int>::iterator p;


    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 60 });


    mp.insert({ 2, 20 });
    mp.insert({ 5, 50 });


    cout << "KEY\tELEMENT\n";
    for (p = mp.begin(); p != mp.end(); p++) {
        cout << p->first
             << '\t' << p->second << '\n';
    }



}

    }
    void task5()
    {
        int i,n;
    char ch;
    map<char,bool>m;
    map<char,bool>::iterator p;
    cout<<"Enter limitation for running loop : \n";
    cout<<"Press...";

    cin>>n;

    for(i=0;i<n;i++){
            if(i%2==0){
            m.insert(pair<char,bool>('A'+i,true));
            }
            else{
                    m.insert(pair<char,bool>('A'+i,false));

            }





             }
             p=m.begin();
             for(;p!=m.end();p++){
                cout << (*p).first << " => "<<boolalpha << (*p).second << endl;
             }
             //m.clear();
             if(!m.empty()){
             cout<<"What number you count?(Must Be Uppercase char)\n";
             cout<<"Press...";


             cin>>ch;
             cout<<m.at(ch)<<endl;
             cout<<"After using void clear()function now size is :\n ";
             }
             else{
                cout<<"Bool is empty!\n";
             }
             m.clear();
             cout<<m.size();

    }
    int main()
    {
        while(1){

        int n;
        cout<<endl;
        cout<<"===================================Enter Choice======================================\n";
        cout<<" 1. Example of iterator_begin(),iterator_end(),iterator_find(),iterator_insert()\n";
        cout<<" 2. Example of void erase(iterator i),size_type size()const\n";
        cout<<" 3. Example of size_type erase(),void erase(iterator start,iterator end)\n";
        cout<<" 4. Example of pair<iterator,bool>,template <class Inlter> \n";
        cout<<" 5. Example of size_type count(const key_type&k),void clear(),bool empty() \n";
        cout<<" 6.Exit.\n";
        cout<<"Press...";

        cin>>n;
        switch(n)
        {
            case 1 :task1();
            break;
            case 2 :task2();
            break;
            case 3 :task3();
            break;
            case 4 :task4();
            break;
            case 5 :task5();
            break;
            case 6 :exit(0);
            break;
            default:
                cout<<"Something was wrong! Try Again.....\n";
        }

        }
        getch();

    }



