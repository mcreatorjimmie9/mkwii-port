/* Function at 0x8083842C, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8083842C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0x101 */ // 0x80838434
    *(0x14 + r1) = r0; // stw @ 0x80838438
    r5 = r5 + 0x101; // 0x8083843C
    *(0xc + r1) = r31; // stw @ 0x80838440
    r31 = r3;
    r4 = *(0xa4 + r3); // lwz @ 0x80838448
    r0 = *(0x20 + r4); // lwz @ 0x8083844C
    /* andc. r0, r5, r0 */ // 0x80838450
    if (==) goto 0x0x80838498;
    r0 = *(0x7c + r31); // lwz @ 0x80838458
    /* lis r3, 0 */ // 0x8083845C
    r3 = *(0 + r3); // lwz @ 0x80838460
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x80838464
    r3 = *(0x74 + r3); // lwz @ 0x80838468
    if (==) goto 0x0x80838478;
    r4 = r31 + 0x8c; // 0x80838470
    /* b 0x8083847c */ // 0x80838474
    r4 = *(0x98 + r31); // lwz @ 0x80838478
    /* lfs f1, 0x68(r31) */ // 0x8083847C
    FUN_8071D110(r4); // bl 0x8071D110
    /* lis r3, 0 */ // 0x80838484
    r4 = *(0xa + r31); // lha @ 0x80838488
    r3 = *(0 + r3); // lwz @ 0x8083848C
    r3 = *(0x74 + r3); // lwz @ 0x80838490
    FUN_8071D008(r3); // bl 0x8071D008
    r3 = r31;
    FUN_80828D50(r3); // bl 0x80828D50
    r0 = *(0x14 + r1); // lwz @ 0x808384A0
    r31 = *(0xc + r1); // lwz @ 0x808384A4
    return;
}