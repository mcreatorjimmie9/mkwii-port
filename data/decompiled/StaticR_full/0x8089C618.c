/* Function at 0x8089C618, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8089C618(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8089C620
    *(0x14 + r1) = r0; // stw @ 0x8089C624
    r4 = r4 + 0; // 0x8089C628
    *(0xc + r1) = r31; // stw @ 0x8089C62C
    r31 = r3;
    *(0 + r3) = r4; // stw @ 0x8089C634
    /* li r3, 0x190 */ // 0x8089C638
    FUN_805E3430(r4, r3); // bl 0x805E3430
}