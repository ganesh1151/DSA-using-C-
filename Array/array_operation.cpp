#include<iostream>
using namespace std;
class Array{
    public: 
        int *pA,n;
        Array(int *pA,int n)
        {
    		this->pA=pA;
    		this->n=n;
		}
        
        void display(int *pA,int n);
        void search(int *pA,int n);
        void insert(int *pA,int n);
        void deleteEle(int *pA,int n);
        void largest(int *pA,int n);
        void secondLargest(int *pA,int n);
        void revese(int *pA,int n);


};

//define display funciton for display array element
void Array :: display( int *pA,int n)
{   
    cout<<"Array Element are : "<<endl;
    for(int i=0;i<n;i++)
        cout<<pA[i]<<" ";
}

//defien search funciton for finding particualr element is present or not
void Array:: search(int *pA,int n)
{   
    int x,i;
    bool flag=false;
    cout<<"\nWhich element you want to find : "<<endl;
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(pA[i]==x)
            flag=true;
            break;
    }
    
    if(flag)
        cout<<"\nElement is Present in Array at position  : "<<i+1;
    else
        cout<<"\nElement is not Present in Array   ";
}

//define insert function for inserting a particular elment in array
/*void Array:: insert(int *pA,int n)
{   
    int x;
    cout<<"\nWhich Element you want to insert : "<<endl;
    cin>>x;
    pA[n+1]=x;
    n++;
} 

void Array::deleteEle(int *pA,int n)
{   
    int x ,i;
    cout<<"\nwhich element you want to delete"<<endl;
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(pA[i]==x)
            break;
    }
    if(i!=n)
    {
        for(int j=i;i<n-1;j++)
            pA[i]=pA[i+1];
        n--;
    }
    else
        cout<<"Element is not present : ";
}*/

//define function for findint laragest element and its position in array
void Array :: largest(int *pA,int n)
{
    int res=0;
    for(int i=1;i<n;i++)
        if(pA[i]>pA[res])
            res=i;

    cout<<"\nLargest Element in Array is "<<pA[res]<<" present at position "<<res;
}

//defined for finding seconf largest element in array and its position 
void Array:: secondLargest(int *pA,int n)
{
    int res=-1,largest=0;
    for(int i=1;i<n;i++)
    {
        if(pA[i]>pA[largest])
        {
            res=largest;
            largest=i;
        }
        else if(pA[i]!=pA[largest])
            if(res==-1 || pA[i]>pA[res])
                res=i;
    }
    cout<<"\nSecond Largest Element in Array is "<<pA[res]<<" present at position "<<res;
}

//defined for reversing an aary
/*void Array::revese(int *pA,int n)
{
    int low=0, high=n-1;
    
    while (low<high)
    {
        int temp=pA[low];
        pA[low]=pA[high];
        pA[high]=temp;

        low++;
        high--;
    }
}
*/

// our program start from here
int main()
{   cout<<"*****************Array operation Program*******************";
    int *ptrArr,ch=0, n;;
    cout<<"\nEnter size of array : "<<endl;
    cin>>n;

    ptrArr=new int[n];
    cout<<"\nEnter "<<n<<" element of array :"<<endl;;
    for(int i=0;i<n;i++)
        cin>>ptrArr[i];
        
    Array obj(ptrArr,n);
    while(ch!=5){
        cout<<"\n\nEnter Your choice : ";
        cout<<"\n1.display\n2.Seach Element\n3.Largest Element";
        cout<<"\n4.Second Larget Element\n5.Exit"<<endl;
        cin>>ch;

        switch (ch)
        {
        case 1:
            obj.display(ptrArr,n);
            break;

        case 2:
            obj.search(ptrArr,n);
            break;

        /*case 3:
            obj.insert(ptrArr,n);
            break;

        case 4:
            obj.deleteEle(ptrArr,n);
            break;*/
        
        case 3:
            obj.largest(ptrArr,n);
            break;
        
        case 4:
            obj.secondLargest(ptrArr,n);
            break;
        
        /*case 5:
            obj.revese(ptrArr,n);
            break;
        */

        default:
            cout<<"\n******** Thanks For visiting ***********";
            break;
        }

    }
    return 0;
}
