/* Function at 0x8069C52C, size=220 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 12 function(s) */

int FUN_8069C52C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8069C53C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8069C544
    r30 = r3;
    if (==) goto 0x0x8069c5ec;
    /* addic. r3, r3, 0x161c */ // 0x8069C550
    if (==) goto 0x0x8069c560;
    /* li r4, 0 */ // 0x8069C558
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30 + 0x13c8; // 0x8069C560
    /* li r4, -1 */ // 0x8069C564
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x1174; // 0x8069C56C
    /* li r4, -1 */ // 0x8069C570
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0xf20; // 0x8069C578
    /* li r4, -1 */ // 0x8069C57C
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0xdac; // 0x8069C584
    /* li r4, -1 */ // 0x8069C588
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
    r3 = r30 + 0x874; // 0x8069C590
    /* li r4, -1 */ // 0x8069C594
    FUN_80699284(r3, r4, r3, r4); // bl 0x80699284
    r3 = r30 + 0x628; // 0x8069C59C
    /* li r4, -1 */ // 0x8069C5A0
    FUN_80660AA0(r3, r4, r3, r4); // bl 0x80660AA0
    r3 = r30 + 0x3dc; // 0x8069C5A8
    /* li r4, -1 */ // 0x8069C5AC
    FUN_80660AA0(r3, r4, r3, r4); // bl 0x80660AA0
    /* addic. r3, r30, 0x268 */ // 0x8069C5B4
    if (==) goto 0x0x8069c5c4;
    /* li r4, 0 */ // 0x8069C5BC
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x44; // 0x8069C5C4
    /* li r4, -1 */ // 0x8069C5C8
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x8069C5D4
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8069c5ec;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8069C5F0
    r30 = *(8 + r1); // lwz @ 0x8069C5F4
    r0 = *(0x14 + r1); // lwz @ 0x8069C5F8
    return;
}