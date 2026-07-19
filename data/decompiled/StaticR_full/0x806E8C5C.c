/* Function at 0x806E8C5C, size=32 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806E8C5C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r0, 0xff */ // 0x806E8C68
    *(0x1c + r1) = r31; // stw @ 0x806E8C6C
    r31 = r3;
    *(0x360 + r3) = r0; // stb @ 0x806E8C74
    FUN_805E3430(); // bl 0x805E3430
}