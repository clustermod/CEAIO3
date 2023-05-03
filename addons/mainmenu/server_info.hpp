#define SERVER_IP 85.190.160.117
#define SERVER_PORT 12000
#define SERVER_PASSWORD hahaItMe

#define JOINPARAMS(var1,var2,var3,var4) [QUOTE(QUOTE(var1)),QUOTE(QUOTE(var2)),QUOTE(QUOTE(var3)),QUOTE(QUOTE(var4))]
#define JOINACTION(var1,var2,var3,var4) QUOTE(JOINPARAMS(var1,var2,var3,var4) spawn FUNC(joinServer);)