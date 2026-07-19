/* Function at 0x80738434, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80738434(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80738444
    r30 = r3;
    r31 = *(0x1fc + r3); // lwz @ 0x8073844C
    if (==) goto 0x0x807384f8;
    r3 = r31 + 0x74; // 0x80738458
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80738470;
    /* li r3, 0 */ // 0x80738468
    /* b 0x80738474 */ // 0x8073846C
    r3 = *(0xc + r3); // lwz @ 0x80738470
}