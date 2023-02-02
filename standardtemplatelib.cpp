//STANDARD TEMPLATE LIBRARAY
//1.array
// #include<iostream>
// using namespace std;
// #include<array>
// int main()
// {
//     array<int,4>a={1,2,3,4};//also static array
//     int size=a.size();
//     for(int i=0;i<size;i++)
//     {
//         cout<<a[i]<<endl;
//     }
//     cout<<"elemnt at 2 index"<<a.at(2)<<endl;
//     cout<<"empty or not"<<a.empty()<<endl;
//     cout<<"First element"<<a.front()<<endl;
//     cout<<"last element"<<a.back()<<endl;
//     return 0;
// }
//2.Vector:
// #include<iostream>
// using namespace std;
// #include<vector>
// int main()
// {
//     //vector is the dynamic array 
//     //when vector get full it double its size by making the vector of double size and copy the content of old vector into new and destroy old
//     vector<int>v;
//     vector<int>v2(6);//this is used to create the vector of size 6
//     vector<int>v3(3,1);//this is used to create the vector of size 3 and initializes with 1
//     cout<<v2.capacity();//6
//     vector<int>newvec(v);//copy the value of vector v in newvec
//     cout<<"Capacity"<<v.capacity()<<endl;
//     v.push_back(23);
//     v.push_back(90);
//     cout<<"Capacity"<<v.capacity()<<endl;
//     v.push_back(900);
//     cout<<"capacity"<<v.capacity()<<endl;//here it grows its capcity to double of 2 
//     cout<<"size:"<<v.size()<<endl;
// cout<<"element at 2 index"<<v.at(2)<<endl;
// cout<<"first:"<<v.front()<<endl;
// cout<<"last:"<<v.back()<<endl;
// //printing elemnts:
// for(auto x:v)
// {
//     cout<<x;
// }
// v.pop_back();
// //after popping the elemnt
// for(auto x:v)
// {
//     cout<<x;
// }
// //clearing the vector
// // v.clear();
// //after clearing the size and capacity  is:
// cout<<v.size()<<endl<<v.capacity();
// //making the iterator:
// vector<int>::iterator itr;
// //to get the iterator of starting element and last use begin() and end()
// for(itr=v.begin();itr<v.end();itr++)
// {
//     cout<<*itr<<endl;
// }

//    return 0;
// }
//3.Deque:dynamic
// #include<iostream>
// #include<deque>
// using namespace std;
// int main()
// {
//     deque<int>d;
//     d.push_back(1);
//     d.push_front(2);
//     for(auto a:d)
//     {
//         cout<<a<<endl;
//     }
//      cout<<"first elemnt:"<<d.at(1)<<endl;
//      cout<<"first elemnt:"<<d.front()<<endl;
//      cout<<"last element:"<<d.back()<<endl;
//      cout<<d.size()<<endl;
//     return 0;
// }
//4.List-->it is formed using doubly linkedlist
// #include<iostream>
// #include<list>
// using namespace std;
// int main()
// {
//     list<int>l;
//     l.push_back(3);
//     l.push_back(90);
//     for(auto c:l)
//     {
//         cout<<c<<endl;
//     }
//     //In list we cannot access the element directly we have to access the whole list once 

//     return 0;
// }
//5.Stack
// #include<iostream>
// using namespace std;
// #include<stack>
// int main()
// {
//     stack<int>st;
//     st.push(234);
//     st.push(90);
//     st.pop();
//     cout<<st.top();
//     return 0;
// }
//6.Queue
// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//     queue<int>qe;
//     qe.push(90);
//     qe.push(89);
//     cout<<"first element"<<qe.front()<<endl;
//     qe.pop();
//     cout<<"now first elemnt"<<qe.front()<<endl;
//     cout<<"size:"<<qe.size()<<endl;
//     return 0;
// }
//7.Priority Queue
// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//     //for creating maxheap
//     priority_queue<int>maxi;
//     priority_queue<int,vector<int>,greater<int>>mini;
//     maxi.push(70);
//     maxi.push(93);
//     maxi.push(11);
//     cout<<"size:"<<maxi.size()<<endl;
//     int n=maxi.size();
//     for(int i=0;i<n;i++)
//     {
//         cout<<maxi.top()<<endl;
//         maxi.pop();
//     }
//     //same for mini 
//     return 0;
// }
//8.Set-->stores unique element only 
//implementation take place by bst 
//modification do not take place 
//unordered_set gives random order solution 
// #include<iostream>
// #include<set>
// using namespace std;
// int main()
// {
// set<int>s;//sorted order ,no duplicates
// s.insert(23);
// s.insert(45);
// s.insert(12);
// s.insert(12);
// s.insert(11);
// s.insert(90);
// for(auto d:s)
// {
//     cout<<d<<endl;
// }
// //for deleting the element
// s.erase(s.begin());
// cout<<"after deleting first element"<<endl;
// for(auto d:s)
// {
//     cout<<d<<endl; 
// }
// //now deleting the second element::
// set<int>::iterator it=s.begin();
// it++;
// s.erase(it);
// cout<<"after deleitng the second element";
// for(auto d:s)
// {
//     cout<<d<<endl; 
// }
// //to check whether the elemnt is present or not
// cout<<s.count(45);
// //to return the iterator of the elemnt 
// set<int>::iterator itr=s.find(45);
// cout<<"value of iterator"<<*itr;
//     return 0;
// }
//9.Map--implementation using balanced tree 
//complexity here is logn;
// #include<iostream>
// #include<map>
// using namespace std;
// int main()
// {
//     map<int,string>m;
//     m[1]="Babbar";
//     m[2]="love";
//     for(auto d:m)
//     {
//         cout<<d.first<<" "<<d.second<<endl;
//     }
//     //another way to insert the value in map 
//     m.insert({5,"bheem"});
//     cout<<"aftwe inserting the another value";
//     for(auto d:m)
//     {
//         cout<<d.first<<" "<<d.second<<endl;
//     }
//     //finding whther 5 key presnt or not 
//     cout<<"finding 5"<<" "<<m.count(5);
//     //delting 5 key elemnt 
//     m.erase(5);
//     for(auto d:m)
//     {
//         cout<<d.first<<endl;
//     }

//     return 0;
// }
//using algorithms of standard template library:
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main()
// {
// vector<int>v;
// v.push_back(11);
// v.push_back(23);
// v.push_back(45);
// v.push_back(67);
// //it is inbuilt binary function which holds strting endin and the value that we have to check
// cout<<binary_search(v.begin(),v.end(),23);
// int a=23;
// int b=90;
// cout<<"finding maximum:"<<max(a,b);
// cout<<endl<<"finding minimum:"<<min(a,b);
// swap(a,b);
// cout<<"now printing a and b"<<endl<<a<<" "<<b;
// reverse(v.begin(),v.end());
// string d="simran";
// reverse(d.begin(),d.end());//for reversing anything use reverse function with strting and dning iterator 
// cout<<d<<endl;
// for(auto s:v)
// {
//     cout<<s<<endl;
// }
// //sorting 
// sort(v.begin(),v.end());
// cout<<"after sorting lements are :"<<endl;

// for(auto s:v)
// {
//     cout<<s<<endl;
// }
//     return 0;
// }