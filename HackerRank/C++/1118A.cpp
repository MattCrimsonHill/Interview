#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 10000007
#define mod 1000000007
#define PI acos(-1.0)

#define size1 44

int drx[8] = {-2,-2,-1,-1,1,1,2,2};
int dcy[8] = {-1,1,-2,2,-2,2,-1,1};

int dirx[4] = { -1, 0, 1, 0 };
int diry[4] = { 0, -1, 0, 1 };


ll gcd(ll a,ll b){ if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int main()
{
    ll tc, num, t = 1, pownum;

    // freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    // freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc1(tc);

    while (tc--){

        ll a, b;

        cin >> num >> a >> b;

        if(num & 1){

            ll first = (num -1) / 1;
            ll last = (num - 1) / 2;

            ll ans = min((first * a), (last * b));

            ans += a;
            pf1(ans);
        }
        else{

            ll first = num / 1;
            ll last = num / 2;

            ll ans = min((first * a), (last * b));
            pf1(ans);
        }

    }

    return 0;
}
