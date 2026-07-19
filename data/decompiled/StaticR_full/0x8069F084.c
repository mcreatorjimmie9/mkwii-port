/* Function at 0x8069F084, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8069F084(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8069F094
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8069F09C
    r30 = r3;
    if (==) goto 0x0x8069f0c8;
    /* lis r4, 0 */ // 0x8069F0A8
    r3 = *(0 + r3); // lwz @ 0x8069F0AC
    r4 = r4 + 0; // 0x8069F0B0
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x8069f0c8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8069F0CC
    r30 = *(8 + r1); // lwz @ 0x8069F0D0
}