/******************************************************
 * AUTHOR: F3NG
 * DATE:   2020.08.23
 ******************************************************/
/**
 * Define a table of the name of the months of the year and the number of days in each month
 * Do this twice
 *  once using two array one hold month name one hold day of the month;
 *  once using struct hold the month name and days of the month;
*/

int main(){
    char* name[12] = {"January", "February", "March", "April",
                      "May", "June", "July", "Augest", "September", 
                      "Octerber", "Novermber", "Decenber"};
    int   days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    typedef struct monthDay
    {
        char* month;
        int days;
    };
    monthDay year[12];
    for(int i = 0; i < 12; i++)
    {
        switch (i)
        {
        case 0 :
            year[i].month = "January";
            year[i].days = 31;
            break;
        case 1 :
            year[i].month = "February";
            year[i].days = 28;
            break;
        case 2 :
            year[i].month = "March";
            year[i].days = 31;
            break;
        case 3 :
            year[i].month = "April";
            year[i].days = 30;
            break;
        case 4 :
            year[i].month = "May";
            year[i].days = 31;
            break;
        case 5 :
            year[i].month = "June";
            year[i].days = 30;
            break;
        case 6 :
            year[i].month = "July";
            year[i].days = 31;
            break;
        case 7 :
            year[i].month = "Augest";
            year[i].days = 31;
            break;
        case 8 :
            year[i].month = "September";
            year[i].days = 30;
            break;
        case 9 :
            year[i].month = "Octerber";
            year[i].days = 31;
            break;
        case 10 :
            year[i].month = "Novermber";
            year[i].days = 31;
            break;
        case 11 :
            year[i].month = "Decenber";
            year[i].days = 31;
            break;
        default:
            break;
        }
    }
}