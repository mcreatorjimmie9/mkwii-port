/* Function at 0x805B55A0, size=84 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805B55A0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805B55AC
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r0 = *(0x20 + r3); // lbz @ 0x805B55C0
    if (==) goto 0x0x805b55d4;
    /* li r3, 0 */ // 0x805B55CC
    /* b 0x805b568c */ // 0x805B55D0
    /* li r4, 0 */ // 0x805B55D4
    r3 = r3 + 0x10; // 0x805B55D8
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x805b5608;
    r4 = r31;
    r3 = r27 + 0x10; // 0x805B55F0
}