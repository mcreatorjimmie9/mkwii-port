/* Function at 0x80769BD8, size=216 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80769BD8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x80769BE0
    *(0x24 + r1) = r0; // stw @ 0x80769BE4
    r6 = r6 + 0; // 0x80769BE8
    *(0x1c + r1) = r31; // stw @ 0x80769BEC
    r31 = r3;
    /* lfs f2, 0x64(r6) */ // 0x80769BF4
    /* lfs f1, 0x78(r6) */ // 0x80769BF8
    /* lfs f0, 0x110(r3) */ // 0x80769BFC
    /* fdivs f1, f2, f1 */ // 0x80769C00
    /* fadds f0, f0, f1 */ // 0x80769C04
    /* stfs f0, 0x110(r3) */ // 0x80769C08
    /* fabs f0, f0 */ // 0x80769C0C
    /* lfs f1, 0x64(r6) */ // 0x80769C10
    /* fabs f1, f1 */ // 0x80769C14
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80769C18
    if (<=) goto 0x0x80769c28;
    /* li r0, 3 */ // 0x80769C20
    *(0xb8 + r3) = r0; // stw @ 0x80769C24
    r0 = *(0x48c + r3); // lbz @ 0x80769C28
    if (==) goto 0x0x80769c88;
    /* lis r5, 0 */ // 0x80769C34
    /* lis r4, 0 */ // 0x80769C38
    /* lfs f0, 0(r5) */ // 0x80769C3C
    r4 = r4 + 0; // 0x80769C40
    /* stfs f0, 0xf8(r3) */ // 0x80769C44
    /* lfs f1, 0xc(r6) */ // 0x80769C4C
    FUN_805A443C(r4, r3); // bl 0x805A443C
    /* lfs f1, 0x100(r31) */ // 0x80769C54
    /* lfs f0, 8(r1) */ // 0x80769C58
    /* lfs f2, 0x104(r31) */ // 0x80769C5C
    /* fadds f0, f1, f0 */ // 0x80769C60
    /* lfs f1, 0x108(r31) */ // 0x80769C64
    /* stfs f0, 0x100(r31) */ // 0x80769C68
    /* lfs f0, 0xc(r1) */ // 0x80769C6C
    /* fadds f0, f2, f0 */ // 0x80769C70
    /* stfs f0, 0x104(r31) */ // 0x80769C74
    /* lfs f0, 0x10(r1) */ // 0x80769C78
    /* fadds f0, f1, f0 */ // 0x80769C7C
    /* stfs f0, 0x108(r31) */ // 0x80769C80
    /* b 0x80769c94 */ // 0x80769C84
    /* lis r4, 0 */ // 0x80769C88
    /* lfs f0, 0(r4) */ // 0x80769C8C
    /* stfs f0, 0x104(r3) */ // 0x80769C90
    r3 = r31;
    FUN_8076AA40(r4, r3); // bl 0x8076AA40
    r0 = *(0x24 + r1); // lwz @ 0x80769C9C
    r31 = *(0x1c + r1); // lwz @ 0x80769CA0
    return;
}