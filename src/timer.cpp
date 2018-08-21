#include <chrono>

using namespace std::chrono;
class Timer{
private:
    steady_clock::time_point t1 = steady_clock::now();
    
public:
    void elapsed(){
        steady_clock::time_point t2 = steady_clock::now();
        duration<double> time_span = duration_cast<double>>(t2 - t1);

        std::cout << time_span.count() << '\n';
    }
};
