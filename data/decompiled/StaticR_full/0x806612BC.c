/* Function at 0x806612BC, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806612BC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806612CC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806612D4
    r30 = r3;
    if (==) goto 0x0x80661328;
    /* addic. r3, r3, 0x3dc */ // 0x806612E0
    if (==) goto 0x0x80661300;
    /* lis r4, 0 */ // 0x806612E8
    r3 = r3 + 0x68; // 0x806612EC
    r4 = r4 + 0; // 0x806612F0
    /* li r5, 0xc */ // 0x806612F4
    /* li r6, 5 */ // 0x806612F8
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30 + 0x238; // 0x80661300
    /* li r4, -1 */ // 0x80661304
    FUN_8066D714(r5, r6, r3, r4); // bl 0x8066D714
    r3 = r30 + 0x188; // 0x8066130C
    /* li r4, -1 */ // 0x80661310
    FUN_8066D714(r3, r4, r3, r4); // bl 0x8066D714
    if (<=) goto 0x0x80661328;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8066132C
    r30 = *(8 + r1); // lwz @ 0x80661330
    r0 = *(0x14 + r1); // lwz @ 0x80661334
    return;
}