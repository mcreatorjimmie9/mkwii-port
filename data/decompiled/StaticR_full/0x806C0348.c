/* Function at 0x806C0348, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806C0348(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3 + 0x174; // 0x806C0358
    *(8 + r1) = r30; // stw @ 0x806C035C
    /* li r30, 0 */ // 0x806C0360
    r3 = r31;
    FUN_8064A340(r3); // bl 0x8064A340
    if (==) goto 0x0x806c037c;
    r3 = r30;
    /* b 0x806c0390 */ // 0x806C0378
    r30 = r30 + 1; // 0x806C037C
    r31 = r31 + 0x254; // 0x806C0380
    if (<) goto 0x0x806c0364;
    /* li r3, -1 */ // 0x806C038C
    r0 = *(0x14 + r1); // lwz @ 0x806C0390
    r31 = *(0xc + r1); // lwz @ 0x806C0394
    r30 = *(8 + r1); // lwz @ 0x806C0398
    return;
}