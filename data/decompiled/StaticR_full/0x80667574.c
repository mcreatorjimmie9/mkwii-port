/* Function at 0x80667574, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80667574(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80667584
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8066758C
    r30 = r3;
    if (==) goto 0x0x806675b8;
    if (==) goto 0x0x806675a8;
    /* li r4, -1 */ // 0x8066759C
    r3 = r3 + 4; // 0x806675A0
    FUN_805E3430(r4, r3); // bl 0x805E3430
    if (<=) goto 0x0x806675b8;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806675BC
    r30 = *(8 + r1); // lwz @ 0x806675C0
    r0 = *(0x14 + r1); // lwz @ 0x806675C4
    return;
}