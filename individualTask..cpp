#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

int main()
{

    ifstream file("racers data.txt");
   string line ;
    vector <string> data ;
        if(file.good()) {
            while ( getline(file ,line)) {
            data.push_back(line);
            }
      file.close();
        }
    else{
        cout<<"Error !";
        return 0;
    }


vector<int> values;
int num;

    for(int i = 0 ; i < data.size() ; i++){
    stringstream stream(data[i]);

    while (stream >> num){

        char c = stream.get();
        values.push_back(num);

     cout<<num<<" ";
    }
       cout<<endl;
    }


int arr1 [16];
int arr2 [16];
int arr3 [16];
double t1=0.0;
double t2=0.0;
double t3=0.0;
double T ;
int n;
double velocity = 0.0 ;
double mini = (1*60+34+16/60);

cout<<"Enter the number of the racer :"<<endl;
cin>>n;
if (n != 100 && n != 132 && n != 182 ) {
    cout<<"The number is not found here \n";
}
else {
for (int j = 3; j < 18 ; j++)
{
    arr1[j]=values[j];
    if(n == arr1[j]){

    t1= values[j+1]*60 + values[j+2] + values[j+3]/60;
    cout<<"The split time of the player = "<<(t1/7)<<endl;
}

}

for (int k = 18; k< 33 ; k++){

    arr2[k]=values[k];
    if(n==arr2[k]){

       t2= values[k+1]*60 + values[k+2] + values[k+3]/60;
       cout<<"The split time of the player = "<<(t2-t1)/7<<endl;
                          }
}


for (int l = 33 ; l < 48 ; l++)
{   arr3[l]=values[l];
    if(n==arr3[l]){

    t3= values[l+1]*60 + values[l+2] + values[l+3]/60;
    velocity =(t3-t1)/13.1 ;
    cout<<"The time taken by the player to cover the distance ="<<(t3-t1)<<endl;
    cout<<"The split time of the player = "<<(t3-t2)/7<<endl;
    cout<<"The velocity of the player = "<<velocity<<endl;
    }
    if ((t3 - t1) < mini ) {
        cout<<"First player \n";
    }

    else if ((t3-t1) > mini ) {
        cout<<"Third player \n";

    }
    else
         cout<<"Second player \n";

}

}






     return 0;


}
