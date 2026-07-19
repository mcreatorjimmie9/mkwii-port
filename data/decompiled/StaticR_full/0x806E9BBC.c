/* Function at 0x806E9BBC, size=272 bytes */
/* Stack frame: 0 bytes */

int FUN_806E9BBC(int r3, int r4, int r5)
{
    /* mulli r0, r4, 0xc */ // 0x806E9BBC
    r4 = r3 + r0; // 0x806E9BC0
    r0 = *(0x25f5 + r4); // lbz @ 0x806E9BC4
    if (==) goto 0x0x806e9bdc;
    r0 = *(0x25f4 + r4); // lbz @ 0x806E9BD0
    if (!=) goto 0x0x806e9be4;
    /* li r3, 1 */ // 0x806E9BDC
    return;
    r5 = *(0x25f1 + r4); // lbz @ 0x806E9BE4
    if (==) goto 0x0x806e9cc4;
    r0 = r5 + -0xb; // 0x806E9BF0
    if (<=) goto 0x0x806e9cb4;
    r0 = r5 + -2; // 0x806E9BFC
    if (<=) goto 0x0x806e9cb4;
    if (==) goto 0x0x806e9c1c;
    if (==) goto 0x0x806e9c68;
    /* b 0x806e9cbc */ // 0x806E9C18
    r0 = *(0x2760 + r3); // lwz @ 0x806E9C1C
    if (==) goto 0x0x806e9c30;
    /* li r3, 2 */ // 0x806E9C28
    return;
    r0 = *(0x25f0 + r4); // lbz @ 0x806E9C30
    /* extsb r0, r0 */ // 0x806E9C34
    if (==) goto 0x0x806e9c60;
    /* lis r4, 0 */ // 0x806E9C40
    /* li r3, 7 */ // 0x806E9C44
    r4 = *(0 + r4); // lwz @ 0x806E9C48
    r4 = *(0x84 + r4); // lwz @ 0x806E9C4C
    /* bnelr  */ // 0x806E9C54
    /* li r3, 6 */ // 0x806E9C58
    return;
    /* li r3, 5 */ // 0x806E9C60
    return;
    r0 = *(0x2760 + r3); // lwz @ 0x806E9C68
    if (==) goto 0x0x806e9c7c;
    /* li r3, 2 */ // 0x806E9C74
    return;
    r0 = *(0x25f0 + r4); // lbz @ 0x806E9C7C
    /* extsb r0, r0 */ // 0x806E9C80
    if (==) goto 0x0x806e9cac;
    /* lis r4, 0 */ // 0x806E9C8C
    /* li r3, 0xa */ // 0x806E9C90
    r4 = *(0 + r4); // lwz @ 0x806E9C94
    r4 = *(0x84 + r4); // lwz @ 0x806E9C98
    /* bnelr  */ // 0x806E9CA0
    /* li r3, 9 */ // 0x806E9CA4
    return;
    /* li r3, 8 */ // 0x806E9CAC
    return;
    r3 = r5;
    return;
    r3 = r5;
    return;
    /* li r3, 2 */ // 0x806E9CC4
    return;
}