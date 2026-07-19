/* Function at 0x805A8BE8, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805A8BE8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805A8BF8
    r31 = r6;
    *(8 + r1) = r30; // stw @ 0x805A8C00
    r30 = r3;
    *(0x14 + r3) = r4; // stw @ 0x805A8C08
    *(0x18 + r3) = r5; // stw @ 0x805A8C0C
    if (==) goto 0x0x805a8c38;
    /* lis r4, 0 */ // 0x805A8C14
    r5 = r31;
    r4 = r4 + 0; // 0x805A8C1C
    /* li r6, 0 */ // 0x805A8C20
    FUN_805A9134(r4, r5, r4, r6); // bl 0x805A9134
    /* li r0, 0 */ // 0x805A8C28
    *(0x14 + r30) = r0; // stw @ 0x805A8C2C
    *(0x18 + r30) = r0; // stw @ 0x805A8C30
    *(0x1c + r30) = r0; // stw @ 0x805A8C34
    r3 = *(8 + r30); // lwz @ 0x805A8C38
    r4 = r31;
    /* li r5, 4 */ // 0x805A8C40
    FUN_805E3430(r4, r5); // bl 0x805E3430
}