// #include <iostream>
// using namespace std;

// My Answer ******************************************

// int main()
// {
//     double a, b;
//     cout<<"Enter 2 Numbers: \n";

//     cin>>a>>b;
//     cout<< a << " + " << b << " = " << a + b <<"\n";
//     cout<< a << " - " << b << " = " << a - b <<"\n";
//     cout<< a << " / " << b << " = " << a / b <<"\n";
//     cout<< a << " * " << b << " = " << a * b <<"\n";
    
//     return 0;
// }

// Instructors Answer *********************************

// #include<iostream>
// using namespace std;

// int main() {
// 	int a, b;

// 	cin >> a >> b;

// 	cout << a << " + " << b << " = " << a + b << "\n";
// 	cout << a << " - " << b << " = " << a - b << "\n";
// 	cout << a << " / " << b << " = " << a / b << "\n";
// 	cout << a << " * " << b << " = " << a * b << "\n";

// 	return 0;
// }

// Homework # 2 MY Answer ******************************

// int main()
// {
//     string studentName1, studentName2;
//     int id1, id2;
//     double examGrade1, examGrade2;
    
    
//     cout<<"What is student 1 name: \n";
//     cin>>studentName1;
//     cout<<"His ID: \n";
//     cin>>id1;
//     cout<<"His math exam grade: \n";
//     cin>>examGrade1;

//     cout<<"What is student 2 name: \n";
//     cin>>studentName2;
//     cout<<"His ID: \n";
//     cin>>id2;
//     cout<<"His math exam grade: \n";
//     cin>>examGrade2;
    
//     double average = (examGrade1 + examGrade2) / 2;
    
//     cout<<"Students Grade in Math \n";
//     cout<<studentName1<< "(with id " <<id1<< ")  got grade: " <<examGrade1<< "\n";
//     cout<<studentName2<< "(with id " <<id2<< ")  got grade: " <<examGrade2<< "\n";
//     cout<<"Average grade is: "<<average<<"\n";
    
//     return 0;
// }

// Instructor Answer ********************************

// int main() {
// 	string name1;
// 	cout<<"What is student 1 name: ";
// 	cin>>name1;

// 	// Although looks as integer, no guarantee (make be big or has letters)
// 	string id1;
// 	cout<<"His id: ";
// 	cin>>id1;

// 	// Although looks as integer, but grade could be 30.5
// 	double grade1;
// 	cout<<"His math exam grade: ";
// 	cin>>grade1;

// 	/////////////////////////
// 	string name2;
// 	cout<<"What is student 2 name: ";
// 	cin>>name2;

// 	string id2;
// 	cout<<"His id: ";
// 	cin>>id2;

// 	double grade2;
// 	cout<<"His math exam grade: ";
// 	cin>>grade2;

// 	cout<<"\nStudents grades in math\n";

// 	cout<<name1<<" (with id "<<id1<<") got grade: "<<grade1<<"\n";
// 	cout<<name2<<" (with id "<<id2<<") got grade: "<<grade2<<"\n";
// 	cout<<"Average grade is "<<(grade1 + grade2) / 2.0<<"\n";
	
// 	// Notice we used () to apply this operation first. More later

// 	return 0;
// }

// // Homework # 3 My Answer ******************************

// int main(){
//     int a, b, c, d, e, f, g, h;
//     cin>>a>>b>>c>>d>>e>>f>>g>>h;

//     cout<<b + d + f + h<<"\n";
//     cout<<a + c + e + g<<"\n";
    

//     return 0;
// }

// Homework # 3 Instructor Answer ***********************

// int main() {
// 	/*
// 	 * We know we will read 8 numbers
// 	 * 	The first number is the first odd
// 	 * 	The third number is the second odd
// 	 * 	The fifth number is the their odd
// 	 * 	The seventh number is the forth odd
// 	 *
// 	 * Same logic for even numbers
// 	 *
// 	 * The key: good naming variables and read them in right order
// 	 */
// 	int even1, even2, even3, even4;
// 	int odd1, odd2, odd3, odd4;

// 	cin>>odd1>>even1;
// 	cin>>odd2>>even2;
// 	cin>>odd3>>even3;
// 	cin>>odd4>>even4;

// 	int even_sum = even1 + even2 + even3 + even4;
// 	int odd_sum = odd1 + odd2 + odd3 + odd4;

// 	cout<<even_sum<<" "<<odd_sum<<"\n";

// 	return 0;
// }

// Homework # 4  / Swapping / My Answer *****************

// int main(){

//     int num1, num2, tmp;
//     cin>>num1>>num2;
//     tmp = num1;
//     num1 = num2;
//     num2 = tmp;

//     cout<<num1<< " " <<num2;

//     return 0;
// }

// Homework 4 / SWAPPING Instructor Answer **************

// int main() {
// 	int num1, num2, num3;
	
// 	cin>>num1>>num2;

// 	// Swap operation in 3 steps using num3 as temporary storage
// 	// 1) put num2 value in num3
// 	num3 = num2;	// now num3 is 231

// 	// put num1 in num2
// 	num2 = num1;		// now num2 is 7

// 	// get the temp value in num3 in num1
// 	num1 = num3;

// 	cout<<num1<<" "<<num2<<endl;	// 231 7

// 	// if hard? maybe watch https://www.youtube.com/watch?v=A7li4rrkS54


// 	return 0;
// }

// Homework # 5  / Swapping 3 numbers / My Answer ******

// int main(){
//     int a, b, c, tmp;
//     cin>>a>>b>>c;

//     tmp = a;
//     a = b; 
//     b = c;
//     c =tmp;

//     cout<<a<< " " <<b<< " " <<c;    
//     return 0;
// }


// Homework # 5  / Swapping 3 numbers / Instructor Answer ******

// int main() {
// 	int num1, num2, num3, temp = -1;

// 	// Circulate them instead of direct 2 swaps
// 	cin>>num1>>num2>>num3;
// 	temp = num1;
// 	num1 = num2;
// 	num2 = num3;
// 	num3 = temp;

// 	cout<<num1<<" "<<num2<<" "<<num3<<"\n";


// 	return 0;
// }

// // Homework Hard # 3 / Instructor Answer / 

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     int equ_is_1 = a * a;
//     int equ_is_neg_1 = 2 * a + 1;

//     int is_1= (b + 1) / 2;
//     int is_neg_1 = 1 - is_1;

//     cout<<is_1 * equ_is_1 + is_neg_1 * equ_is_neg_1;
    
//     return 0;
// }

// // Sum From 1 to N hard section / My Answer/ Instructor ans

// int main() {
//     int n;
//     cin>>n;

//     cout<<n * (n + 1 ) / 2;
//     return 0;
// }


// // //  Homework Operators Medium *************** Trace ****

// int main() {
//     int a {0}, b {1};

//     cout<<a++<<"\n";
//     cout<<++a<<"\n";
//     a += 2 * b + 1;
//     b = ++a * 2;
//     cout<<a<<" "<<b<<"\n";

//     b = a;
//     a = 12 + a/ 3 / 2 - 2 * 2;
//     cout<<a<<"\n";

//     a = b;
//     a = ((12 + a) / 3 / 2 - 2) * 2;
//     cout<<a<<"\n";

//     return 0;
// }

// // Trace this Operators Homework **********************

// int main() {
//     int a {1}, b {1}, c;

//     cout<<(c = a+b, a = b, b = c,
//            c = a+b, a = b, b = c,
//            c = a+b, a = b, b = c,
//            c = a+b, a = b, b = c) << endl;
// }

// // // Trace this Operators Homework **********************

// int main() {
//     int a {210};
//     cout<<a<<"\n";

//     cout<< (a /= 3)<<"\n";
//     cout<<(a /= 5)<<"\n";
//     cout<<(a /= 7)<<"\n";

//     cout<<(2 +3) * (5 - (-3)) / 5 / 8 <<"\n";

//     a = 10;
//     cout<<a++ + 10 <<"\n";
//     cout<<++a + 10<<"\n";
//     cout<<a-- + 10 <<"\n";
//     cout<<--a + 10 <<"\n";

//     int b {20};
//     cout<<a++ + ++b<<"\n"; // Don't code this way

//     cout<<a<<"\n";
//     ++a+10;                 // Don't code this way
//     cout<<a<<"\n";

//     return 0;
// }

// // // Trace this Operators Homework **********************
// int main() {
//     int a {10}, b {20}, c {30}, d {40};

//     cout << (a + b == c) <<"\n";
//     cout << (a + b + c >= 2 * d) <<"\n";

//     cout << (a > 5 || d < 30)<<"\n";
//     cout << (a > 5 && d < 30) <<"\n";
//     cout << (a <= b && b <= c) << "\n";

//     cout << (a > 5 && d < 30 || c - b == 10) <<"\n";
//     cout << (a <= b && b <= c && c <= d) <<"\n";

//     cout << (a > 5 && d < 30 || c > d || d % 2 == 0) <<"\n";
//     cout << (a > 5 && d < 30 || c > d && d % 2 == 0) <<"\n";

//     cout << ( a == 10 || b != 20 && c!= 30 || d!= 40) <<"\n";
//     cout << ((a == 10 || b != 20) && c!= 30 || d != 40) <<"\n";

    
//     return 0;
// }

// // Create Logic Operators Homework **********************

// int main() {
//     int nb, ng, nt;
//     cin>>nb>>ng>>nt;

//     cout<< (nb > 25)<<"\n";
//     cout<< (ng <= 30)<<"\n";
//     cout<< (nb > 20 && nt > 2 || ng > 30 && nt > 4)<< "\n";
//     cout<< (nb < 60 || ng < 70) <<"\n";
//     cout <<(!(nb >= 60) && !(ng >= 70)) <<"\n";
//     cout << (nb == (ng - 10))<<"\n";
//     cout << (nb - ng > 10 || nt > 5)<<"\n";
//     cout << (nb - ng == 10 || ng - nb == 15)<<"\n";
    
//     return 0;
// }

// Instructors Answer **********************************

// int main() {
// 	int nb, ng, nt;
// 	cin >> nb >> ng >> nt;

// 	// nb greater than 25
// 	cout << (nb > 25) << "\n";

// 	// ng less than or equal to 30
// 	cout << (ng <= 30) << "\n";

// 	// nb > 20 and nt > 2 or ng > 30 and nt > 4
// 	cout << (nb > 20 && nt > 2 || ng > 30 && nt > 4) << "\n";

// 	// Either nb < 60 or ng < 70
// 	cout << (nb < 60 || ng < 70) << "\n";

// 	// Neither nb >= 60 nor ng >= 70
// 	cout << (  !(nb >= 60) && !(ng >= 70) ) << "\n";

// 	// nb is 10 more students than ng
// 	cout << (nb == ng + 10) << "\n";

// 	// Difference between nb and ng is more than 10 or nt > 5
// 	cout << (nb - ng > 10 || nt > 5) << "\n";

// 	// Either nb is 10 more students than ng or ng is 15 more students than nb
// 	cout << (nb == ng + 10 || ng == nb + 15) << "\n";

// 	return 0;

// // Averages Div/Mod Homework / My Answer************

// int main() {
//    double num1, num2, num3, num4, num5;
//    cin>>num1>>num2>>num3>>num4>>num5;

//    double sum_nums = (num1 + num2 + num3 + num4 + num5);
//    double sum_first_3 = (num1+num2+num3);
//    double sum_last_2 = (num4+num5);

//    cout<<(sum_nums / 5)<<"\n";
//    cout<<(sum_first_3 / sum_last_2)<<"\n";
//    cout<<((sum_first_3 / 3) / (sum_last_2 / 2))<<"\n";

   
//    return 0;

// }

// // Averages Div/Mod Homework / Instructor Answer*******

// int main() {

// 	double a1, a2, a3, a4, a5;
// 	cin >> a1 >> a2 >> a3 >> a4 >> a5;

// 	double avg1 = (a1+a2+a3+a4+a5) / 5.0;	// A
// 	double sum1 = (a1+a2+a3) / (a4+a5);		// B
// 	double first3_avg = (a1+a2+a3) / 3.0;
// 	double last2_avg = (a4+a5) / 2.0;
// 	double avg2 = first3_avg / last2_avg;	// C

// 	cout<<avg1<<"\n";
// 	cout<<sum1<<"\n";
// 	cout<<avg2<<"\n";

// 	cout<<sum1 * 2.0/3.0<<"\n";		// C = 2/3 B

// 	return 0;
// }

// // Fractional Part Div/Mod Homework / My Answer************

// int main() {
//     int a, b;
//     cin>>a>>b;

//     int step1 = a % b;
//     double res = step1 / double(b);
//     cout<<res<<"\n";
    
//     return 0;

// }

// // Fractional Part Div/Mod Homework/Instructor Answer*******

// int main() {

// 	double a, b;
// 	cin>>a>>b;

// 	double result = a/b;

// 	cout<<result - (int)result;

// 	return 0;
// }

// // Our Remainder Div/Mod Homework / My Answer************

// int main() {
//     int a, b;
//     cin>>a>>b;

//     int step1 = a / b;
//     int step2 = step1 * b;
//     int res = a - step2;

//     cout<<res<<"\n";
    
//     return 0;

// }

// // // Our Remainder Div/Mod Homework/Instructor Answer*******

// int main() {

// 	int n, m;
// 	cin >> n >> m;

// 	// let's try 13/5
// 	// 13/5 = 2  [2 complete units, each is 5]
// 	// 2*5 = 10  [total complete units]
// 	// Reminder is 13-10 = 3. This number generates the fractional part
// 	int result = n - (n / m) * m;

// 	cout << result << " " << n % m << "\n";

// 	return 0;
// }

// // Is Even Div/Mod Homework / My Answer************

// int main() {
//     int num;
//     cin>>num;

//     bool is_even1 = num % 2 == 0;
//     cout<<is_even1<<"\n";
    
//     int num_div1 = num / 2;
//     double num_div2 = double(num) / 2;
    
//     bool is_even2 = num_div2 - num_div1 == 0;
//     cout<<is_even2<<"\n";

//     int rem = num % 10;
//     bool is_even3 = rem % 2 ==0;
//     cout<<is_even3<<"\n";

    
//     return 0;

// }

// // // // Is Even Div/Mod Homework/Instructor Answer*******

// int main() {

// 	int num;
// 	cin >> num;

// 	// Is even using %2
// 	bool is_even1 = (num % 2 == 0);

// 	// is even using /2
// 	double by2 = (double) num / 2.0;// this is either X.0 or X.5  (try 10, 11)
// 	by2 = by2 - (int) by2;// Remove X. This is now either 0 (for even) or 0.5 (for odd)
// 	bool is_even2 = by2 == 0;

// 	// is even using %10
// 	int last_digit = num % 10;	// even last digit is 0, 2, 4, 6, 8
// 	bool is_even3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;

// 	return 0;
// }

// // 3 digits sum /Mod Homework / My Answer************

// int main() {
//     int num;
//     cin>>num;

//     int dig1 = num % 10;
//     num /= 10;

//     int dig2 = num % 10;
//     num /= 10;

//     int dig3 = num % 10;

//     cout<<(dig1+dig2+dig3)<<"\n";

//     return 0;

// }

// // // // 3 digits sum Div/Mod Homework/Instructor Answer*******

// // Same as Above

// // // Print 4th digit /Mod Homework / My Answer************

// int main() {
//     int num;
//     cin>>num;

//     cout<<((num % 10000) / 1000)<<"\n";
    
//     return 0;

// }

// // // // // Print 4th digit /Mod Homework/Instructor Answer*******

// int main() {

// 	int n;
// 	cin >> n;

// 	// /1000 => removes last 3 digits
// 	// %10 get next digit = 4th
// 	cout << (n / 1000) % 10 << "\n";

// 	return 0;
// }

// // 100 || 7 /Mod Homework / My Answer************

// int main() {
//     int num;
//     cin>>num;

//     int x = num % 2;
//     cout<<((1 - x) * 100) + ((x * 1) * 7)<<"\n";    
//     return 0;

// }

// // 100 || 7 /Mod Homework/Instructor Answer*******

// int main() {

// 	int n;
// 	cin >> n;

// 	int is_even = n % 2 == 0;
// 	int is_odd = 1 - is_even;

// 	// formula of 2 parts: only one of them will be activated
// 	int result = is_even * 100 + is_odd * 7;

// 	cout<<result<<"\n";

// // Years! /Mod Homework / My Answer************

// int main() {
//     int num;
//     cin>> num;

    
//     int years = num / 360;
//     num = num % 360;
//     int months = num / 30;
//     int days = num % 30;
    
    
//     cout<<years<<" "<<months<<" "<<days<<"\n";
//     return 0;

// }

// // Years! /Mod Homework/Instructor Answer*******


// // Same or very close to above

// # digits  /Selection Homework / My Answer************

// int main() {
//     int num;
//     cin>>num;

//     if (num < 10){        
//         cout<<"1 digit"<<"\n";
//     }
//     else if (num < 100){
//         cout<<"2 digits"<<"\n";
//     }
//     else if (num < 1000) {
//         cout<<"3 digits"<<"\n";
//     }
//     else if (num < 10000) {
//         cout<<"4 digits"<<"\n";
//     }
//         else{
//             cout<<"5 or more digits"<<"\n";
//         }
//     return 0;

// }

// # Min of #'s  /Selection Homework / My Answer************

// int main(){
//     int a, b, c;
//     cin >> a >> b >> c;
//     int res = a;

//     if (res > b)
//     {
//         res = b;
//     }
//     if (res > c)
//     {
//         res = c;
//     }

//     cout<<res<<"\n";
        

//     return 0;
// }

// // # is even? /Selection Homework / My Answer************

// int main(){
//     int n;
//     cin>>n;

//     if (n % 2 ==0){
//         cout<<(n % 10)<<"\n";
//     }
//         else
//         {
//             if (n < 1000) {
//                 cout<< (n % 100) <<"\n";
//             }
//             else if(n < 1000000){
//                 cout<<(n % 10000);
//             }
//                 else {
//                     cout<<(n * -1)<<"\n";                }
//         }

//     return 0;
// }

// // is even? /Mod Homework/Instructor Answer*******


// // Same or very close to above

// # Last 3 Digits /Selection Homework / My Answer************

// int main(){
//     int num;
//     cin>>num;

//     if (num < 10000) {
//         cout<<"This is a small number!"<<"\n";
//     }
//         else
//         {
//             int a = num % 10;
//             num /= 10;
//             int b = num % 10;
//             num /=10;
//             int c = num % 10;
//             int res = a + b + c;

//             if (res % 2 != 0){
//                 cout<<"This is a great number"<<"\n";
//             }
            
//                 else {
//                     if (a % 2 != 0 || b % 2 != 0 || c % 2 != 0){
//                     cout<<"This is a good number"<<"\n";                   
//                 } 
//                     else
//                     {
//                         cout<<"This is a bad number"<<"\n";
//                     }
//             }
//         }

//     return 0;
// }

// Last 3 digits /Mod Homework/Instructor Answer*******

// int main(){
//     int n;
//     cin>>n;

//     if (n < 10000)
//         cout<<"This is a small number"<<"\n";
//     else
//     {
//         int digit1 = n%10;
//         n = n/10;
//         int digit2 = n%10;
//         n = n/10;
//         int digit3 = n%10;
        
//         int sum = digit1+digit2+digit3;

//         if ((sum%2) != 0) 
//             cout<<"this is a great number/n";
//         else{
//             bool is_digit1_odd = (digit1 % 2 == 1);
//             bool is_digit2_odd = (digit2 % 2 == 1);
//             bool is_digit3_odd = (digit3 % 2 == 1);

//             if (is_digit1_odd || is_digit2_odd || is_digit3_odd) {
//                 cout<<"this is a good number\n";
//             }
//             else
//                 cout<<"this is a bad number"<<"\n";
//         }
//     }
//     return 0;

// }

// Arithmetic /Selection Homework / My Answer************

// int main(){
//     int a, b;
//     cin>>a>>b;
//     bool a_is_odd = (a % 2 == 1);
//     bool b_is_odd = (b % 2 == 1);

//     if (a_is_odd && b_is_odd){
//         cout<<(a*b)<<"\n";
//     }
//     else if (!a_is_odd && !b_is_odd){
//         cout<<(a/ b)<<"\n";
//     }
//     else if (a_is_odd && !b_is_odd){
//         cout<<(a+b)<<"\n";
//     }
//     else
//     {
//         cout<<(a-b)<<"\n";
//     }
    

//     return 0;
// }

// // Arithmetic /Mod Homework/Instructor Answer*******

// int main() {
// 	int a, b;
// 	cin >> a >> b;

// 	bool is_a_even = (a % 2 == 0);
// 	bool is_b_even = (b % 2 == 0);

// 	if (!is_a_even && !is_b_even)
// 		cout << a * b << "\n";
// 	else if (is_a_even && is_b_even)
// 		cout << a / b << "\n";
// 	else if (!is_a_even && is_b_even)
// 		cout << a + b << "\n";
// 	else
// 		cout << a - b << "\n";

// 	return 0;
// }

// Sort 3 Numbers /Selection Homework / My Answer************

// int main(){
//     int a, b, c, tmp;
//     cin>>a>>b>>c;
    
//     if (a > b){
//         tmp = b;
//         b = a;
//         a = tmp;
//     }
//     if (b > c){
//         tmp = c;
//         c = b;
//         b = tmp;
//     }
//     if (a > b){
//         tmp = b;
//         b = a;
//         a = tmp;
//     }

//     cout<<a<<" "<<b<<" "<<c;

//     return 0;
// }

// // // Arithmetic /Mod Homework/Instructor Answer*******

// // Same as above
