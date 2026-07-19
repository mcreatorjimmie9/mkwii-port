/* Function at 0x806D5418, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806D5418(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806D5428
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806D5430
    r30 = r3;
    if (==) goto 0x0x806d5484;
    /* addic. r3, r3, 0x60 */ // 0x806D543C
    if (==) goto 0x0x806d545c;
    /* lis r4, 0 */ // 0x806D5444
    r3 = r3 + 4; // 0x806D5448
    r4 = r4 + 0; // 0x806D544C
    /* li r5, 0x68 */ // 0x806D5450
    /* li r6, 0xa */ // 0x806D5454
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30 + 0x44; // 0x806D545C
    /* li r4, -1 */ // 0x806D5460
    FUN_80668158(r5, r6, r3, r4); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x806D546C
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806d5484;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806D5488
    r30 = *(8 + r1); // lwz @ 0x806D548C
    r0 = *(0x14 + r1); // lwz @ 0x806D5490
    return;
}