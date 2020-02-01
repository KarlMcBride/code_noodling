#ifndef __CAR_DEQUE_HPP
#define __CAR_DEQUE_HPP


#include <dequed_file.hpp>
#include <struct_car_t.hpp>


class car_deque : public dequed_file<struct_car_t>
{
    public:
        car_deque(const int _max_size);
        ~car_deque();

    private:
        // bool new_events_to_save;
};


#endif // __CAR_DEQUE_HPP