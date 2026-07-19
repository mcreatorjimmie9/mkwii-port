/* Function at 0x808019A4, size=172 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808019A4(int r3, int r4, int r5)
{
    /* Stack frame: -192(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808019AC
    r31 = r3;
    *(0xb8 + r1) = r30; // stw @ 0x808019BC
    *(0xb4 + r1) = r29; // stw @ 0x808019C0
    /* lis r29, 0 */ // 0x808019C4
    r29 = r29 + 0; // 0x808019C8
    r4 = *(0 + r4); // lwz @ 0x808019CC
    r4 = *(0 + r4); // lwz @ 0x808019D0
    r0 = *(0x38b + r4); // lbz @ 0x808019D4
    if (!=) goto 0x0x80801c0c;
    r0 = *(0x1c + r3); // lwz @ 0x808019E0
    if (!=) goto 0x0x80801b14;
    /* lfs f2, 0x48(r3) */ // 0x808019EC
    /* lis r30, 0 */ // 0x808019F0
    /* lfs f1, 0x10(r29) */ // 0x808019F4
    /* lfs f0, 0(r30) */ // 0x808019F8
    /* fadds f1, f2, f1 */ // 0x808019FC
    /* stfs f1, 0x48(r3) */ // 0x80801A00
    /* fmuls f1, f1, f0 */ // 0x80801A04
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f2, 0xc(r29) */ // 0x80801A0C
    /* lis r3, 0 */ // 0x80801A10
    /* lfs f0, 0(r3) */ // 0x80801A14
    /* lis r4, 0 */ // 0x80801A18
    /* fneg f2, f2 */ // 0x80801A1C
    /* stfs f0, 0xc(r1) */ // 0x80801A20
    r4 = r4 + 0; // 0x80801A28
    /* stfs f0, 0x10(r1) */ // 0x80801A2C
    /* fmuls f0, f2, f1 */ // 0x80801A34
    /* stfs f0, 8(r1) */ // 0x80801A38
    FUN_805A4464(r4, r5); // bl 0x805A4464
    /* lfs f0, 0x14(r1) */ // 0x80801A40
    /* stfs f0, 0x20(r31) */ // 0x80801A44
    /* lfs f1, 0x48(r31) */ // 0x80801A48
    /* lfs f2, 0x18(r1) */ // 0x80801A4C
}