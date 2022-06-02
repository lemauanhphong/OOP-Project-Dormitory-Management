#include "Phong.h"

using namespace std;

class Toa
{
    private:
        string toa;
        vector <Phong> phong;

    public:
        Toa();
        Toa(string toa = "AH1");
        ~Toa();
        string getToa();
        void setToa(string toa = "AH1");
        vector <Phong>* getPhong();
};