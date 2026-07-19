/* Function at 0x806F0CE4, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806F0CE4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806F0CEC
    *(0x14 + r1) = r0; // stw @ 0x806F0CF0
    *(0xc + r1) = r31; // stw @ 0x806F0CF4
    r31 = *(0 + r3); // lwz @ 0x806F0CF8
    if (==) goto 0x0x806f0d24;
    if (==) goto 0x0x806f0d18;
    FUN_806EF380(); // bl 0x806EF380
    FUN_806EA764(); // bl 0x806EA764
    r3 = r31;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x806F0D18
    /* li r0, 0 */ // 0x806F0D1C
    *(0 + r3) = r0; // stw @ 0x806F0D20
    r0 = *(0x14 + r1); // lwz @ 0x806F0D24
    r31 = *(0xc + r1); // lwz @ 0x806F0D28
    return;
}