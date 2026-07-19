/* Function at 0x80638580, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80638580(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x80638588
    *(0xc + r1) = r31; // stw @ 0x80638590
    *(8 + r1) = r30; // stw @ 0x80638594
    r0 = *(0 + r3); // lwz @ 0x80638598
    if (!=) goto 0x0x806385e4;
    /* li r3, 0x14 */ // 0x806385A4
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x806385dc;
    /* lis r4, 0 */ // 0x806385B8
    r30 = r3 + 4; // 0x806385BC
    r4 = r4 + 0; // 0x806385C0
    *(0 + r3) = r4; // stw @ 0x806385C4
    r3 = r30;
}