/* Function at 0x8069E86C, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8069E86C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8069E87C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8069E884
    r30 = r3;
    if (==) goto 0x0x8069e8c8;
    /* li r4, -1 */ // 0x8069E890
    r3 = r3 + 0x1b8; // 0x8069E894
    FUN_80668158(r4, r3); // bl 0x80668158
    /* addic. r3, r30, 0x44 */ // 0x8069E89C
    if (==) goto 0x0x8069e8ac;
    /* li r4, 0 */ // 0x8069E8A4
    FUN_806A0540(r3, r4); // bl 0x806A0540
    r3 = r30;
    /* li r4, 0 */ // 0x8069E8B0
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8069e8c8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8069E8CC
    r30 = *(8 + r1); // lwz @ 0x8069E8D0
    r0 = *(0x14 + r1); // lwz @ 0x8069E8D4
    return;
}