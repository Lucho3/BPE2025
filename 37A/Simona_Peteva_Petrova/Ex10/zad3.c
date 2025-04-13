typedef struct 
{
     float x;
     float y;
     float z;
 } Point;
 float distance(Point a, Point b) 
 {
     return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));
 }
 void Points(Point *points, int count) 
 {
     for (int i=0; i<count; i++) 
     {
         printf("Въведете данни за точката %d:", i+1);
         scanf("%f %f %f", &points[i].x, &points[i].y, &points[i].z);
     }
 }
 void Points_triangle(Point *points, int count) 
 {
     printf("Въведени точки:\n");
     for (int i=0; i<count; i++) 
     {
         printf("Точката %d: (%.2f, %.2f, %.2f)\n", i + 1, points[i].x, points[i].y, points[i].z);
     }
 }
 void Triangles(Point *points, int pointCount) 
 {
     if (pointCount < 3) 
     {
         printf("Няма достатъчно точки:\n");
         return;
     }
     int triangleCount = 0;
     for (int i = 0; i < pointCount - 2; i++) 
     {
         for (int j = i + 1; j < pointCount - 1; j++) 
         {
             for (int k = j + 1; k < pointCount; k++)
              {
                 float ab, bc, ac;
                bool is_found = false;
                 if ((points[i].x*(points[j].y - points[k].y) + points[j].x*(points[k].y - points[i].y) + points[k].x*(points[i].y - points[j].y)) != 0) 
                 { 
                     ab = distance(points[i], points[j]);
                     bc = distance(points[j], points[k]);
                     ac = distance(points[i], points[k]);
                     triangleCount++;
                     is_found = true;
                 }
 
                 if (is_found){
                     printf("Дължини на страните:\n");
                     printf("AB = %.2f\n", ab);
                     printf("BC = %.2f\n", bc);
                     printf("AC = %.2f\n", ac);
                 }
 
                 else{
                     printf("Не съществува триъглник с такива координати!\n");
                 }
             }
         }
     }
 }
 int main() 
 {
     int pointCount;
     printf("Въведете брой точки: ");
     scanf("%d", &pointCount);
     Point *points = (Point *)malloc(pointCount * sizeof(Point));
 
     if (!points)
     {
         printf("Не може да се задели динамична памет за масива. \n");
         exit(1);
     }
 
     Points(points, pointCount);
     Points_triangle(points, pointCount);
     Triangles(points, pointCount);
 
     free(points);
     return 0;
 }