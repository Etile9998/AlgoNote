#include <chrono>

class Timer{
private:
    using clock_t = std::chrono::steady_clock;
    using second_t = std::chrono::duration<double, std::ratio<1>>;

    std::chrono::time_point<clock_t> startTime = clock_t::now();

public:
    void elapsed(){
        std::chrono::time_point<clock_t> endTime = clock_t::now();
        std::cout << std::chrono::duration<second_t>(endTime - startTime).count() << std::endl;
    }
}
