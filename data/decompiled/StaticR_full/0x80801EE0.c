/* Function at 0x80801EE0, size=140 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80801EE0(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x44 + r1) = r29; // stw @ 0x80801EF4
    r29 = r3;
    r0 = *(0x64 + r3); // lbz @ 0x80801EFC
    if (==) goto 0x0x80802008;
    /* lis r4, 0 */ // 0x80801F08
    r30 = *(0x14 + r3); // lwz @ 0x80801F0C
    /* lfs f0, 0(r4) */ // 0x80801F10
    r4 = r4 + 0; // 0x80801F14
    /* stfs f0, 0x20(r3) */ // 0x80801F18
    /* lfs f0, 4(r4) */ // 0x80801F1C
    /* stfs f0, 0x24(r3) */ // 0x80801F20
    /* lfs f0, 8(r4) */ // 0x80801F24
    /* stfs f0, 0x28(r3) */ // 0x80801F28
    r3 = *(0x10 + r30); // lwz @ 0x80801F2C
    r3 = *(0 + r3); // lwz @ 0x80801F30
    if (==) goto 0x0x80801f4c;
    r3 = r3 + 0xc; // 0x80801F3C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x80801f54 */ // 0x80801F48
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* lfs f0, 0x20(r29) */ // 0x80801F54
    /* li r31, 0 */ // 0x80801F58
    /* stfs f0, 0x14(r1) */ // 0x80801F5C
    /* lfs f0, 0x24(r29) */ // 0x80801F60
    /* stfs f0, 0x24(r1) */ // 0x80801F64
    /* lfs f0, 0x28(r29) */ // 0x80801F68
}