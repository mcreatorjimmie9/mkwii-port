/* Function at 0x806CCB68, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_806CCB68(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x806CCB80
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806CCB88
    r28 = r3;
    r0 = *(0x90 + r3); // lbz @ 0x806CCB90
    if (!=) goto 0x0x806ccbcc;
    /* lis r31, 0 */ // 0x806CCB9C
    r3 = *(0 + r31); // lwz @ 0x806CCBA0
    FUN_8064762C(); // bl 0x8064762C
    /* mulli r0, r29, 0xc */ // 0x806CCBA8
    r3 = r28 + r0; // 0x806CCBAC
    r0 = *(0x5c + r3); // lbz @ 0x806CCBB0
    if (==) goto 0x0x806ccbcc;
    r3 = *(0 + r31); // lwz @ 0x806CCBBC
    r4 = r29;
    r5 = r30;
    FUN_80647644(r4, r5); // bl 0x80647644
    r0 = *(0x24 + r1); // lwz @ 0x806CCBCC
    r31 = *(0x1c + r1); // lwz @ 0x806CCBD0
    r30 = *(0x18 + r1); // lwz @ 0x806CCBD4
    r29 = *(0x14 + r1); // lwz @ 0x806CCBD8
    r28 = *(0x10 + r1); // lwz @ 0x806CCBDC
    return;
}