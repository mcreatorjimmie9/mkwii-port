/* Function at 0x805E3068, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805E3068(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805E3078
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805E3080
    r30 = r3;
    if (==) goto 0x0x805e30a4;
    /* li r4, 0 */ // 0x805E308C
    FUN_805A9FEC(r4); // bl 0x805A9FEC
    if (<=) goto 0x0x805e30a4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805E30A8
    r30 = *(8 + r1); // lwz @ 0x805E30AC
    r0 = *(0x14 + r1); // lwz @ 0x805E30B0
    return;
}