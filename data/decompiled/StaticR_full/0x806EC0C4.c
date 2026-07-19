/* Function at 0x806EC0C4, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_806EC0C4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806EC0D0
    /* lis r31, 0 */ // 0x806EC0D4
    r3 = *(0 + r31); // lwz @ 0x806EC0D8
    if (==) goto 0x0x806ec0f4;
    /* li r4, 1 */ // 0x806EC0E4
    FUN_806EC958(r4); // bl 0x806EC958
    /* li r0, 0 */ // 0x806EC0EC
    *(0 + r31) = r0; // stw @ 0x806EC0F0
    r0 = *(0x14 + r1); // lwz @ 0x806EC0F4
    r31 = *(0xc + r1); // lwz @ 0x806EC0F8
    return;
}