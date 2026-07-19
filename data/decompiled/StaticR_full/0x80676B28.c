/* Function at 0x80676B28, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 14 function(s) */

int FUN_80676B28(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x80676B30
    *(0x18 + r1) = r30; // stw @ 0x80676B3C
    /* lis r30, 0 */ // 0x80676B40
    r30 = r30 + 0; // 0x80676B44
    *(0x14 + r1) = r29; // stw @ 0x80676B48
    r29 = r3;
    r3 = r3 + 0x98; // 0x80676B50
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lfs f1, 0x140(r30) */ // 0x80676B58
    /* li r4, 0 */ // 0x80676B5C
    FUN_8069F7A0(r3, r4); // bl 0x8069F7A0
    r3 = r29 + 0x98; // 0x80676B64
    /* li r4, 1 */ // 0x80676B68
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0x140(r30) */ // 0x80676B70
    /* li r4, 0 */ // 0x80676B74
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x80676B7C
    /* li r4, 2 */ // 0x80676B80
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0x140(r30) */ // 0x80676B88
    /* li r4, 1 */ // 0x80676B8C
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x80676B94
    /* li r4, 3 */ // 0x80676B98
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0x140(r30) */ // 0x80676BA0
    /* li r4, 1 */ // 0x80676BA4
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x80676BAC
    /* li r4, 4 */ // 0x80676BB0
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0x140(r30) */ // 0x80676BB8
    /* li r4, 0 */ // 0x80676BBC
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* lis r31, 0 */ // 0x80676BC4
    r3 = r29;
    r31 = r31 + 0; // 0x80676BCC
    r4 = r31 + 0x4e; // 0x80676BD0
    r5 = r31 + 0x54; // 0x80676BD4
    FUN_806A0D70(r3, r4, r5); // bl 0x806A0D70
    r3 = r29;
    r4 = r31 + 0x5f; // 0x80676BE0
    r5 = r31 + 0x6e; // 0x80676BE4
    FUN_806A0D70(r5, r3, r4, r5); // bl 0x806A0D70
    r3 = r29;
    r4 = r31 + 0x79; // 0x80676BF0
    r5 = r31 + 0x88; // 0x80676BF4
    FUN_806A0D70(r5, r3, r4, r5); // bl 0x806A0D70
    r3 = *(0x190 + r29); // lwz @ 0x80676BFC
    /* lis r0, 0x4330 */ // 0x80676C00
    *(8 + r1) = r0; // stw @ 0x80676C04
    /* li r4, 0 */ // 0x80676C08
    /* xoris r0, r3, 0x8000 */ // 0x80676C0C
    /* lfd f3, 0x138(r30) */ // 0x80676C10
    *(0xc + r1) = r0; // stw @ 0x80676C14
    /* lfs f2, 0x128(r30) */ // 0x80676C18
    /* lfd f0, 8(r1) */ // 0x80676C1C
    /* lfs f1, 0x12c(r30) */ // 0x80676C20
    /* fsubs f3, f0, f3 */ // 0x80676C24
    /* lfs f0, 0x124(r30) */ // 0x80676C28
    *(0x18c + r29) = r4; // stw @ 0x80676C2C
    /* fmuls f2, f3, f2 */ // 0x80676C30
    /* fdivs f1, f2, f1 */ // 0x80676C34
    /* fsubs f1, f0, f1 */ // 0x80676C38
    /* stfs f1, 0x19c(r29) */ // 0x80676C3C
    FUN_805E3430(); // bl 0x805E3430
}