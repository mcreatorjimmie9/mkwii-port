/* Function at 0x8069A69C, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8069A69C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8069A6B0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8069A6B8
    r29 = r3;
    if (==) goto 0x0x8069a724;
    if (==) goto 0x0x8069a714;
    /* addic. r31, r3, 0x2f0 */ // 0x8069A6C8
    if (==) goto 0x0x8069a6e8;
    r3 = r31 + 0x174; // 0x8069A6D0
    /* li r4, -1 */ // 0x8069A6D4
    FUN_806691A0(r3, r4); // bl 0x806691A0
    r3 = r31;
    /* li r4, 0 */ // 0x8069A6E0
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
    /* addic. r31, r29, 0xa8 */ // 0x8069A6E8
    if (==) goto 0x0x8069a708;
    r3 = r31 + 0x174; // 0x8069A6F0
    /* li r4, -1 */ // 0x8069A6F4
    FUN_806691A0(r3, r4); // bl 0x806691A0
    r3 = r31;
    /* li r4, 0 */ // 0x8069A700
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
    r3 = r29;
    /* li r4, 0 */ // 0x8069A70C
    FUN_8069FC20(r3, r4, r3, r4); // bl 0x8069FC20
    if (<=) goto 0x0x8069a724;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x8069A724
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x8069A72C
    r29 = *(0x14 + r1); // lwz @ 0x8069A730
    r0 = *(0x24 + r1); // lwz @ 0x8069A734
    return;
}