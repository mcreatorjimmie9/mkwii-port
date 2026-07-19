/* Function at 0x8063D7FC, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8063D7FC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8063D80C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8063D814
    r30 = r3;
    if (==) goto 0x0x8063d838;
    /* li r4, 0 */ // 0x8063D820
    FUN_805F40EC(r4); // bl 0x805F40EC
    if (<=) goto 0x0x8063d838;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8063D83C
    r30 = *(8 + r1); // lwz @ 0x8063D840
    r0 = *(0x14 + r1); // lwz @ 0x8063D844
    return;
}