/* Function at 0x805A8C6C, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805A8C6C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r7;
    *(0x14 + r1) = r29; // stw @ 0x805A8C84
    r29 = r6;
    *(0x10 + r1) = r28; // stw @ 0x805A8C8C
    r28 = r5;
    FUN_805A904C(r5); // bl 0x805A904C
    r31 = r3;
    if (==) goto 0x0x805a8cf0;
    r12 = *(0 + r28); // lwz @ 0x805A8CA8
    r3 = r28;
    /* extsb r5, r30 */ // 0x805A8CB0
    r4 = *(8 + r1); // lwz @ 0x805A8CB4
    r12 = *(0x14 + r12); // lwz @ 0x805A8CB8
    /* mtctr r12 */ // 0x805A8CBC
    /* bctrl  */ // 0x805A8CC0
    r5 = *(8 + r1); // lwz @ 0x805A8CC4
    r30 = r3;
    r4 = r31;
    FUN_805E3430(r4); // bl 0x805E3430
    r31 = r30;
    if (==) goto 0x0x805a8cf0;
    if (==) goto 0x0x805a8cf0;
    r0 = *(8 + r1); // lwz @ 0x805A8CE8
    *(0 + r29) = r0; // stw @ 0x805A8CEC
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x805A8CF4
}