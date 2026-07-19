/* Function at 0x806AA6F4, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806AA6F4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806AA704
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806AA70C
    r30 = r3;
    if (==) goto 0x0x806aa740;
    /* li r4, -1 */ // 0x806AA718
    r3 = r3 + 0x48; // 0x806AA71C
    FUN_80668158(r4, r3); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x806AA728
    FUN_806711C4(r4, r3, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806aa740;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806AA744
    r30 = *(8 + r1); // lwz @ 0x806AA748
    r0 = *(0x14 + r1); // lwz @ 0x806AA74C
    return;
}