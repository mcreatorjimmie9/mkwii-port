/* Function at 0x8083A6A8, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8083A6A8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8083A6B4
    r31 = r3;
    r0 = *(0x260 + r3); // lwz @ 0x8083A6BC
    if (<) goto 0x0x8083a71c;
    FUN_8083A124(); // bl 0x8083A124
    r0 = *(0x260 + r31); // lwz @ 0x8083A6CC
    if (!=) goto 0x0x8083a6f4;
    r3 = r31;
    FUN_80839F84(r3); // bl 0x80839F84
    if (==) goto 0x0x8083a720;
    /* li r0, -1 */ // 0x8083A6E8
    *(0x260 + r31) = r0; // stw @ 0x8083A6EC
    /* b 0x8083a720 */ // 0x8083A6F0
    r0 = *(0x78 + r31); // lwz @ 0x8083A6F4
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x8083A6F8
    if (==) goto 0x0x8083a70c;
    r0 = *(0x1cc + r31); // lbz @ 0x8083A700
    if (==) goto 0x0x8083a720;
    r3 = *(0x260 + r31); // lwz @ 0x8083A70C
    r0 = r3 + -1; // 0x8083A710
    *(0x260 + r31) = r0; // stw @ 0x8083A714
    /* b 0x8083a720 */ // 0x8083A718
    FUN_8083A36C(); // bl 0x8083A36C
    r0 = *(0x14 + r1); // lwz @ 0x8083A720
    r31 = *(0xc + r1); // lwz @ 0x8083A724
    return;
}