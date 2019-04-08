#include <math.h>
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double t,d,h;
    char alpha;
    while(1)
    {
        t=d=h=200;
        for(int i=0;i<2;++i)
        {
            cin >> alpha;
            if(alpha == 'E')
                return 0;
            if(alpha == 'T')
            {
                cin >> t;
            }else if(alpha == 'D')
            {
                cin >> d;
            }else if(alpha == 'H')
            {
                cin >> h;
            }
        }
        if(h==200)
			h=t+0.5555*(6.11*exp(5417.7530*(1/273.16-1/(d+273.16)))-10);
		else if(t==200)
			t=h-0.5555*(6.11*exp(5417.7530*(1/273.16-1/(d+273.16)))-10);
		else if(d==200)
			d=1/((1/273.16)-((log((((h-t)/0.5555)+10.0)/6.11))/5417.7530))-273.16;

        // printf("T %.1f D %.1f H %.1f",t,d,h);
        cout << setprecision(1)<<fixed<<"T "<<t<<" D "<<d<<" H "<<h<<endl;

    }
    return 0;
}