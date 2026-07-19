/* Function at 0x806F0C80, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806F0C80(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806F0C88
    *(0x14 + r1) = r0; // stw @ 0x806F0C8C
    *(0xc + r1) = r31; // stw @ 0x806F0C90
    r0 = *(0 + r3); // lwz @ 0x806F0C94
    if (!=) goto 0x0x806f0cd0;
    /* li r3, 1 */ // 0x806F0CA0
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x806f0cc8;
    FUN_806EF1EC(r3); // bl 0x806EF1EC
    FUN_806EA6A0(); // bl 0x806EA6A0
}