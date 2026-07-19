/* Function at 0x8073BD58, size=208 bytes */
/* Stack frame: 32 bytes */
/* Calls: 4 function(s) */

int FUN_8073BD58(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r6, 0 */ // 0x8073BD60
    *(0x24 + r1) = r0; // stw @ 0x8073BD68
    /* slwi r0, r4, 2 */ // 0x8073BD6C
    r8 = *(0x6d0 + r3); // lwz @ 0x8073BD70
    r7 = *(0x6d4 + r3); // lwz @ 0x8073BD74
    r4 = *(0 + r6); // lwz @ 0x8073BD78
    *(0xc + r1) = r7; // stw @ 0x8073BD7C
    r4 = r4 + r0; // 0x8073BD80
    *(8 + r1) = r8; // stw @ 0x8073BD84
    r0 = *(0x6d8 + r3); // lwz @ 0x8073BD88
    *(0x10 + r1) = r0; // stw @ 0x8073BD8C
    /* lfs f0, 0x1c(r4) */ // 0x8073BD90
    /* stfs f0, 0xc(r1) */ // 0x8073BD94
    if (==) goto 0x0x8073bddc;
    r0 = *(0xb0 + r3); // lbz @ 0x8073BD9C
    if (==) goto 0x0x8073bdc4;
    /* lis r6, 0 */ // 0x8073BDA8
    r6 = r6 + 0; // 0x8073BDB0
    r5 = r3 + 0x72c; // 0x8073BDB4
    r3 = r6 + 0x188c; // 0x8073BDB8
    FUN_807457A0(r6, r4, r6, r5, r3); // bl 0x807457A0
    /* b 0x8073be18 */ // 0x8073BDC0
    /* lis r3, 0 */ // 0x8073BDC4
    r3 = r3 + 0; // 0x8073BDCC
    r3 = r3 + 0x1899; // 0x8073BDD0
    FUN_807456E0(r3, r4, r3, r3); // bl 0x807456E0
    /* b 0x8073be18 */ // 0x8073BDD8
    r0 = *(0xb0 + r3); // lbz @ 0x8073BDDC
    if (==) goto 0x0x8073be04;
    /* lis r6, 0 */ // 0x8073BDE8
    r6 = r6 + 0; // 0x8073BDF0
    r5 = r3 + 0x72c; // 0x8073BDF4
    r3 = r6 + 0x18a6; // 0x8073BDF8
    FUN_807457A0(r6, r4, r6, r5, r3); // bl 0x807457A0
    /* b 0x8073be18 */ // 0x8073BE00
    /* lis r3, 0 */ // 0x8073BE04
    r3 = r3 + 0; // 0x8073BE0C
    r3 = r3 + 0x18b4; // 0x8073BE10
    FUN_807456E0(r3, r4, r3, r3); // bl 0x807456E0
    r0 = *(0x24 + r1); // lwz @ 0x8073BE18
    return;
}