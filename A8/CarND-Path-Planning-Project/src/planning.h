#include "json.hpp"

int car_in_lanes(nlohmann::json sensor_fusion, double car_s, int prev_size) noexcept
{
    bool too_close_lane0 = false;
    bool too_close_lane1 = false;
    bool too_close_lane2 = false;

    for (int i = 0; i < sensor_fusion.size(); i++)
    {
        float d = sensor_fusion[i][6];

        double vx = sensor_fusion[i][3];
        double vy = sensor_fusion[i][4];
        double check_speed = sqrt(vx * vx + vy * vy);
        double check_car_s = sensor_fusion[i][5];
        check_car_s += (double)prev_size * 0.02 * check_speed;

        if (check_car_s > car_s && (check_car_s - car_s) < 30)
        {
            too_close_lane0 |= (d >= 0 && d <= 4);
            too_close_lane1 |= (d > 4 && d <= 8);
            too_close_lane2 |= (d > 8 && d <= 12);
        }
    }

    int rv = static_cast<int>(too_close_lane0) * 4 + static_cast<int>(too_close_lane1) * 2 + static_cast<int>(too_close_lane2);
    return rv;
}