/* Function at 0x806F47B4, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806F47B4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806F47BC
    *(0x14 + r1) = r0; // stw @ 0x806F47C0
    *(0xc + r1) = r31; // stw @ 0x806F47C4
    r31 = *(0 + r3); // lwz @ 0x806F47C8
    if (==) goto 0x0x806f47f4;
    if (==) goto 0x0x806f47e8;
    r3 = *(0x9d8 + r31); // lwz @ 0x806F47D8
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x806F47E8
    /* li r0, 0 */ // 0x806F47EC
    *(0 + r3) = r0; // stw @ 0x806F47F0
    r0 = *(0x14 + r1); // lwz @ 0x806F47F4
    r31 = *(0xc + r1); // lwz @ 0x806F47F8
}