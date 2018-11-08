//Adding a data at the end of the array program (Static)
#include <iostream>
using namespace std;

int main(){

    //Initializing array and values
    int arr[10] = {1,2,3,4,5};
    //Getting the size of the array
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    cout <<"Size of this static array is "<<arrSize<<endl;
    cout <<endl;
    //Non empty index counting var init
    int nonEmptyIndexCount = 0;

    cout <<"Existing elements in the array"<<endl;

    //Loop for printing existing elements in the array
    for(int n=0; n<arrSize; n++){
        //Condition to check non empty elements in the array
        if(arr[n] != 0){
               nonEmptyIndexCount++;
            }

            cout <<"arr["<<n<<"] = "<<arr[n]<<endl;

    }


    cout <<endl;
    cout <<"Add a new item: "<<endl;
    int newItem;
    //New item input
    cin >>newItem;
    //Indicating the first empty index and assigning the new item as the last item in the array
    arr[nonEmptyIndexCount] = newItem;

    cout <<endl;
    cout <<"After adding an item at the end of the array"<<endl;
    //Loop for printing after adding a new item in the array
    for(int n=0; n<arrSize; n++){

            cout <<"arr["<<n<<"] = "<<arr[n]<<endl;

    }


return 0;

}
