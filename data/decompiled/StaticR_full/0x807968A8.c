/* Function at 0x807968A8, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807968A8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x807968B4
    r31 = r3;
    r5 = *(0xdc + r3); // lwz @ 0x807968BC
    r5 = *(0 + r5); // lwz @ 0x807968C0
    r5 = *(4 + r5); // lwz @ 0x807968C4
    r5 = *(8 + r5); // lwz @ 0x807968C8
    /* rlwinm. r0, r5, 0, 0x1b, 0x1b */ // 0x807968CC
    if (!=) goto 0x0x8079699c;
    /* clrlwi. r0, r5, 0x1f */ // 0x807968D4
    if (!=) goto 0x0x8079699c;
    r5 = *(0xe4 + r3); // lwz @ 0x807968DC
    if (>=) goto 0x0x807968f4;
    r0 = *(0xe4 + r4); // lwz @ 0x807968E8
    if (==) goto 0x0x8079699c;
    r0 = *(0xd3 + r3); // lbz @ 0x807968F4
    /* extsb r0, r0 */ // 0x807968F8
    if (<) goto 0x0x8079699c;
    r4 = *(0xd4 + r3); // lbz @ 0x80796904
    r0 = r4 + 1; // 0x80796908
    *(0xd4 + r3) = r0; // stb @ 0x8079690C
    /* clrlwi r0, r0, 0x18 */ // 0x80796910
    if (!=) goto 0x0x80796928;
    /* li r0, 0 */ // 0x8079691C
    *(0xd4 + r3) = r0; // stb @ 0x80796920
    /* b 0x8079699c */ // 0x80796924
    r12 = *(0 + r31); // lwz @ 0x80796928
    /* lis r5, 0 */ // 0x8079692C
    r4 = *(0x9c + r31); // lhz @ 0x80796930
    r3 = r31;
    r12 = *(0xe4 + r12); // lwz @ 0x80796938
    r4 = r4 + 0x1ab; // 0x8079693C
    /* lfs f1, 0(r5) */ // 0x80796940
    /* mtctr r12 */ // 0x80796944
    /* bctrl  */ // 0x80796948
    /* lis r4, 0 */ // 0x8079694C
    r4 = *(0 + r4); // lwz @ 0x80796950
    r0 = *(0xb70 + r4); // lwz @ 0x80796954
    if (!=) goto 0x0x80796994;
    if (==) goto 0x0x80796994;
    r4 = r3;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = *(8 + r1); // lwz @ 0x80796974
    if (==) goto 0x0x8079698c;
    /* li r4, 1 */ // 0x80796980
    /* li r5, 1 */ // 0x80796984
    FUN_805E3430(r4, r5); // bl 0x805E3430
}