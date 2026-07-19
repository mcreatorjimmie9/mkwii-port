/* Function at 0x80604490, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80604490(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8060449C
    *(0xc + r1) = r31; // stw @ 0x806044A0
    r31 = r3;
    if (==) goto 0x0x806044b8;
    if (<=) goto 0x0x806044b8;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806044BC
    r0 = *(0x14 + r1); // lwz @ 0x806044C0
    return;
}