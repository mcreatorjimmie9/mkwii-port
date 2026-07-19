/* Function at 0x8063D3F8, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8063D3F8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8063D408
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8063D410
    r30 = r3;
    if (==) goto 0x0x8063d434;
    /* li r4, 0 */ // 0x8063D41C
    FUN_805F402C(r4); // bl 0x805F402C
    if (<=) goto 0x0x8063d434;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8063D438
    r30 = *(8 + r1); // lwz @ 0x8063D43C
    r0 = *(0x14 + r1); // lwz @ 0x8063D440
    return;
}