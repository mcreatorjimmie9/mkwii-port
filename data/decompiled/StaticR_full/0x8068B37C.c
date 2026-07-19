/* Function at 0x8068B37C, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8068B37C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8068B38C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8068B394
    r30 = r3;
    if (==) goto 0x0x8068b3e0;
    /* li r4, -1 */ // 0x8068B3A0
    r3 = r3 + 0xb24; // 0x8068B3A4
    FUN_806A0540(r4, r3); // bl 0x806A0540
    /* lis r4, 0 */ // 0x8068B3AC
    r3 = r30 + 0x174; // 0x8068B3B0
    r4 = r4 + 0; // 0x8068B3B4
    /* li r5, 0x26c */ // 0x8068B3B8
    /* li r6, 4 */ // 0x8068B3BC
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x8068B3C8
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x8068b3e0;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}