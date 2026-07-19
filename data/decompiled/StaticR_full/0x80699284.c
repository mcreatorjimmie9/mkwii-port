/* Function at 0x80699284, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_80699284(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80699298
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806992A0
    r29 = r3;
    if (==) goto 0x0x80699308;
    /* addic. r31, r3, 0x2f0 */ // 0x806992AC
    if (==) goto 0x0x806992cc;
    r3 = r31 + 0x174; // 0x806992B4
    /* li r4, -1 */ // 0x806992B8
    FUN_806691A0(r3, r4); // bl 0x806691A0
    r3 = r31;
    /* li r4, 0 */ // 0x806992C4
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
    /* addic. r31, r29, 0xa8 */ // 0x806992CC
    if (==) goto 0x0x806992ec;
    r3 = r31 + 0x174; // 0x806992D4
    /* li r4, -1 */ // 0x806992D8
    FUN_806691A0(r3, r4); // bl 0x806691A0
    r3 = r31;
    /* li r4, 0 */ // 0x806992E4
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
    r3 = r29;
    /* li r4, 0 */ // 0x806992F0
    FUN_8069FC20(r3, r4, r3, r4); // bl 0x8069FC20
    if (<=) goto 0x0x80699308;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x80699308
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x80699310
    r29 = *(0x14 + r1); // lwz @ 0x80699314
    r0 = *(0x24 + r1); // lwz @ 0x80699318
    return;
}