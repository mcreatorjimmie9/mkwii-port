/* Function at 0x806FE734, size=92 bytes */
/* Stack frame: 304 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_806FE734(int r3, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -304(r1) */
    /* saved r23 */
    /* stmw r23, 0x10c(r1) */ // 0x806FE740
    r26 = r3;
    r31 = *(0x13b + r1); // lbz @ 0x806FE748
    r28 = r5;
    r27 = r6;
    r29 = r7;
    r23 = r8;
    r30 = r9;
    r24 = r10;
    r0 = *(0x7580 + r3); // lwz @ 0x806FE764
    r3 = *(0x7584 + r3); // lwz @ 0x806FE768
    r0 = r5 ^ r0; // 0x806FE76C
    r3 = r6 ^ r3; // 0x806FE770
    /* or. r0, r3, r0 */ // 0x806FE774
    if (==) goto 0x0x806fe7c4;
    /* li r3, 1 */ // 0x806FE77C
    FUN_805E3430(r3); // bl 0x805E3430
    r25 = r3;
    if (==) goto 0x0x806fe7b4;
}