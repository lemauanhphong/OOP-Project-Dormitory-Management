#include "Phong.h"

using namespace std;

class Toa
{
    private:
        string toa;
        vector <Phong> phong;
        int sucChua();

    public:
        Toa();
        Toa(string toa = "AH1", int sucChua = 1);
        ~Toa();
        string getToa();
        void setToa(string toa = "AH1");
        int getSoLuongPhong();
        vector <Phong>* getPhong();
        int getSucChua();
        void setSucChua();
};