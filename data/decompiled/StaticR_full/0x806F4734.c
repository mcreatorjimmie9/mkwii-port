/* Function at 0x806F4734, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806F4734(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806F473C
    *(0x14 + r1) = r0; // stw @ 0x806F4740
    *(0xc + r1) = r31; // stw @ 0x806F4744
    r0 = *(0 + r3); // lwz @ 0x806F4748
    if (!=) goto 0x0x806f47a0;
    /* li r3, 0x9f0 */ // 0x806F4754
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x806f4798;
    /* li r0, 0 */ // 0x806F4768
    *(0 + r3) = r0; // stb @ 0x806F476C
}