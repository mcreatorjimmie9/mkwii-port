/* Function at 0x8061DCF4, size=244 bytes */
/* Stack frame: 0 bytes */

void FUN_8061DCF4(int r3, int r4, int r5, int r6, int r7)
{
    r5 = *(0 + r3); // lwz @ 0x8061DCF4
    r6 = *(4 + r5); // lwz @ 0x8061DCF8
    r0 = *(8 + r6); // lwz @ 0x8061DCFC
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x8061DD00
    if (==) goto 0x0x8061dd74;
    /* lis r3, 0 */ // 0x8061DD08
    r3 = *(0 + r3); // lwz @ 0x8061DD0C
    r0 = *(0xb74 + r3); // lwz @ 0x8061DD10
    /* beqlr  */ // 0x8061DD18
    r0 = *(0xc + r6); // lwz @ 0x8061DD1C
    /* rlwinm. r0, r0, 0, 0xc, 0xc */ // 0x8061DD20
    /* bnelr  */ // 0x8061DD24
    r0 = *(4 + r6); // lwz @ 0x8061DD28
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8061DD2C
    /* bnelr  */ // 0x8061DD30
    r5 = *(0 + r5); // lwz @ 0x8061DD34
    /* lis r3, 0 */ // 0x8061DD38
    r3 = *(0 + r3); // lwz @ 0x8061DD3C
    r0 = *(0x10 + r5); // lbz @ 0x8061DD44
    /* li r4, 0x19 */ // 0x8061DD48
    r3 = *(0xc + r3); // lwz @ 0x8061DD4C
    /* slwi r0, r0, 2 */ // 0x8061DD50
    /* lwzx r3, r3, r0 */ // 0x8061DD54
    r3 = *(0x48 + r3); // lwz @ 0x8061DD58
    if (==) goto 0x0x8061dd64;
    /* li r4, 0x1a */ // 0x8061DD60
    /* lis r5, 0 */ // 0x8061DD64
    /* lfs f1, 0(r5) */ // 0x8061DD68
    /* li r5, 1 */ // 0x8061DD6C
    /* b 0x805b1660 */ // 0x8061DD70
    r7 = *(0xc + r6); // lwz @ 0x8061DD74
    /* rlwinm. r0, r7, 0, 0x10, 0x10 */ // 0x8061DD78
    /* beqlr  */ // 0x8061DD7C
    /* lis r3, 0 */ // 0x8061DD80
    r3 = *(0 + r3); // lwz @ 0x8061DD84
    r0 = *(0xb74 + r3); // lwz @ 0x8061DD88
    /* beqlr  */ // 0x8061DD90
    /* rlwinm. r0, r7, 0, 0xc, 0xc */ // 0x8061DD94
    /* bnelr  */ // 0x8061DD98
    r0 = *(4 + r6); // lwz @ 0x8061DD9C
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8061DDA0
    /* bnelr  */ // 0x8061DDA4
    r5 = *(0 + r5); // lwz @ 0x8061DDA8
    /* lis r3, 0 */ // 0x8061DDAC
    r3 = *(0 + r3); // lwz @ 0x8061DDB0
    r0 = *(0x10 + r5); // lbz @ 0x8061DDB8
    /* li r4, 0x1d */ // 0x8061DDBC
    r3 = *(0xc + r3); // lwz @ 0x8061DDC0
    /* slwi r0, r0, 2 */ // 0x8061DDC4
    /* lwzx r3, r3, r0 */ // 0x8061DDC8
    r3 = *(0x48 + r3); // lwz @ 0x8061DDCC
    if (==) goto 0x0x8061ddd8;
    /* li r4, 0x1e */ // 0x8061DDD4
    /* lis r5, 0 */ // 0x8061DDD8
    /* lfs f1, 0(r5) */ // 0x8061DDDC
    /* li r5, 1 */ // 0x8061DDE0
    /* b 0x805b1660 */ // 0x8061DDE4
}