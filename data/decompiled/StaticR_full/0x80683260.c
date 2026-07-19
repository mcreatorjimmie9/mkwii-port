/* Function at 0x80683260, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80683260(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x1c + r1) = r31; // stw @ 0x80683270
    *(0x18 + r1) = r30; // stw @ 0x80683274
    r30 = r5;
    if (!=) goto 0x0x806832b8;
    /* lis r31, 0 */ // 0x80683280
    /* li r4, 4 */ // 0x80683284
    r3 = *(0 + r31); // lwz @ 0x80683288
    /* li r5, 1 */ // 0x8068328C
    FUN_80698C44(r4, r5); // bl 0x80698C44
    r31 = *(0 + r31); // lwz @ 0x80683294
    r3 = r30;
    FUN_8064A384(r5, r3); // bl 0x8064A384
    /* fctiwz f0, f1 */ // 0x806832A0
    r3 = r31;
    /* li r5, 0xff */ // 0x806832A8
    /* stfd f0, 8(r1) */ // 0x806832AC
    r4 = *(0xc + r1); // lwz @ 0x806832B0
    FUN_80698CD0(r3, r5); // bl 0x80698CD0
    r0 = *(0x24 + r1); // lwz @ 0x806832B8
    r31 = *(0x1c + r1); // lwz @ 0x806832BC
    r30 = *(0x18 + r1); // lwz @ 0x806832C0
    return;
}