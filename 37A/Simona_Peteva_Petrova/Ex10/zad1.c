struct Vehicle
{
     char brand[50];
     int max_speed;
     int year;
     float price;
 };
 typedef union Data 
 {
     int horsepower;
     float displacement;
     int engine_count;
 };
 struct SpecialVehicle
 {
     char type[20];
     struct Vehicle base;
     union Data u;
 };
 int main() 
 {
     struct SpecialVehicle car = 
     {
         "car",
         {"BMW", 210, 2020, 25000},
         203
     };
     struct SpecialVehicle motorcycle = 
     {
         "motorcycle",
         {"Mercedes", 280, 2020, 15000},
         118
     };
 
     struct SpecialVehicle boat = 
     {
         "boat",
         {"Lagoon 43", 70, 2018, 150000},
         8.2
     };
 
     struct SpecialVehicle airplane = 
     {
         "airplane",
         {"Airbus", 302, 2015, 300000},
         1
     };
     printf("%s",car.type);
     return 0;
 }