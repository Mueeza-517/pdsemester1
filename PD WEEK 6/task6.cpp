#include<iostream>
using namespace std;
void calculateHotelPrice(string month, int number_of_stays);
main()
{
  string month;
  int number_of_stays;
  cout <<"Enter the month (May ,June ,July ,August ,September, October):";
  cin >>month;
  cout <<"Enter the number of stays:";
  cin >>number_of_stays;
  calculateHotelPrice(month,number_of_stays);
}
void calculateHotelPrice(string month, int number_of_stays)
{
  float studio_discount = 0 , studio_total, apartment_total , apartment_discount = 0;
  if(month=="May" || month=="October") 
  {
    if(number_of_stays>7 && number_of_stays <= 14)
    { 
      studio_total = number_of_stays * 50;
      studio_total = studio_total - (0.05 * studio_total);

      apartment_total= number_of_stays * 65;

      cout <<"for apartment:" <<apartment_total<<endl;
      cout <<"for studio:" << studio_total; 
    }
    else if(number_of_stays > 14)
    {
      studio_total = number_of_stays * 50;
      studio_total = studio_total - (0.3 * studio_total);

      apartment_total= number_of_stays * 65;
      apartment_total = apartment_total - (0.1 * apartment_total);

      cout <<"for apartment:" <<apartment_total<<endl;
      cout <<"for studio:" << studio_total;  
    }
    else{
      studio_total = number_of_stays * 50;

      apartment_total= number_of_stays * 65;

      cout <<"for apartment:" <<apartment_total<<endl;
      cout <<"for studio:" << studio_total;  
    }
  }

  
  else if(month=="June" || month=="September")
  {
    if(number_of_stays>14) 
    {
      studio_total = number_of_stays * 75.2;
      studio_total = studio_total - (0.2 * studio_total);

      apartment_total= number_of_stays * 68.7;
      apartment_total = apartment_total - (0.1 * apartment_total);

      cout <<"for apartment:" <<apartment_total<<endl;
      cout <<"for studio:" << studio_total;  
    }
    else
    {
      studio_total = number_of_stays * 75.2;

      apartment_total= number_of_stays * 68.7;

      cout <<"for apartment:" <<apartment_total<<endl;
      cout <<"for studio:" << studio_total;
    }
  }
    
  else if( month=="July" ||month =="August" ) 
  {
    if(number_of_stays>14) 
    {
      studio_total = number_of_stays * 76;
      apartment_total= number_of_stays * 77;
      apartment_total = apartment_total - (0.1 * apartment_total);

      cout <<"for apartment:" <<apartment_total<<endl;
      cout <<"for studio:" << studio_total;  
    }
    else
    {
      studio_total = number_of_stays * 76;
      apartment_total= number_of_stays * 77;
      cout <<"for apartment:" <<apartment_total<<endl;
      cout <<"for studio:" << studio_total;
    }
  }
}