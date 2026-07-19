/* Function at 0x80658FC4, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80658FC4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80658FD4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80658FDC
    r30 = r3;
    if (==) goto 0x0x8065900c;
    /* lis r4, 0 */ // 0x80658FE8
    /* li r5, 0x1d8 */ // 0x80658FEC
    r4 = r4 + 0; // 0x80658FF0
    /* li r6, 0x1e */ // 0x80658FF4
    FUN_805E3430(r4, r5, r4, r6); // bl 0x805E3430
    if (<=) goto 0x0x8065900c;
    r3 = r30;
    FUN_805E3430(r6, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80659010
    r30 = *(8 + r1); // lwz @ 0x80659014
}