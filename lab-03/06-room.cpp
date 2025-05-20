/*
Create a class called Volume that uses three Variables (length, width, height) of type distance (feet and
inches) to model the volume of a room. Read the three dimensions of the room and calculate the volume it
represent, and print out the result .The volume should be in (feet3) form i.e. you will have to convert each
dimension into the feet and fraction of For instance , the length 12 feet 6 inches will be 12.5 ft.
*/

#include<iostream>
using namespace std;
class Volume
{
    private:
    float feet, inches;
    float volume;
    public:
    void getData()
    {
        cout<<"Enter feet:";
        cin>>feet;
        cout<<"Enter inches:";
        cin>>inches;
        feet = feet + ( inches/12 );    // inches is float data type so inches/12  will also give  float value
    }
    void display()
    {
        cout<<"The volume is "<<volume<<" cubic feet.";    
    }
    void calVolume( Volume l, Volume b, Volume h )
    {
        volume = l.feet * b.feet * h.feet;
    }
};
int main()
{
    Volume l, b, h, vol;
    cout<<"Enter length of room in  feet and inches:\n";
    l.getData();
    cout<<"Enter breadth of room in feet and inches:\n";
    b.getData();
    cout<<"Enter height of room in feet and inches:\n";
    h.getData();
    vol.calVolume( l, b, h );
    vol.display();
    return 0;

}