/* Function at 0x806BFD38, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806BFD38(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806BFD48
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806BFD50
    r30 = r3;
    if (==) goto 0x0x806bfd90;
    /* lis r4, 0 */ // 0x806BFD5C
    /* li r5, 0x254 */ // 0x806BFD60
    r4 = r4 + 0; // 0x806BFD64
    /* li r6, 4 */ // 0x806BFD68
    r3 = r3 + 0x174; // 0x806BFD6C
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x806BFD78
    FUN_806A0540(r6, r3, r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x806bfd90;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}