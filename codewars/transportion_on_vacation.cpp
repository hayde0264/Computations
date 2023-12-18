// https://www.codewars.com/kata/568d0dd208ee69389d000016/train/cpp
int rental_car_cost(int d)
{
    if (d >= 7)
        return 40 * d - 50;
    else if (d >= 3)
        return 40 * d - 20;
    else
        return d * 40;
}