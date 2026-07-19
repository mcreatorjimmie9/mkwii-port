/* Function at 0x80801284, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80801284(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80801294
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8080129C
    r30 = r3;
    if (==) goto 0x0x80801330;
    r0 = *(0x5c + r3); // lwz @ 0x808012A8
    /* lis r4, 0 */ // 0x808012AC
    r4 = r4 + 0; // 0x808012B0
    *(0x10 + r3) = r4; // stw @ 0x808012B4
    if (==) goto 0x0x808012dc;
    if (==) goto 0x0x808012dc;
    r3 = r0;
    /* li r4, 1 */ // 0x808012C8
    r12 = *(0 + r3); // lwz @ 0x808012CC
    r12 = *(8 + r12); // lwz @ 0x808012D0
    /* mtctr r12 */ // 0x808012D4
    /* bctrl  */ // 0x808012D8
    /* li r0, 0 */ // 0x808012E0
    *(0x5c + r30) = r0; // stw @ 0x808012E4
    if (==) goto 0x0x80801320;
    /* lis r3, 0 */ // 0x808012EC
    /* lis r4, 0 */ // 0x808012F0
    r3 = r3 + 0; // 0x808012F4
    *(0 + r30) = r3; // stw @ 0x808012F8
    r3 = *(0 + r4); // lwz @ 0x808012FC
    if (==) goto 0x0x80801314;
    *(0 + r4) = r0; // stw @ 0x80801308
    /* li r4, 1 */ // 0x8080130C
    FUN_80801284(r4); // bl 0x80801284
    r3 = r30;
    /* li r4, 0 */ // 0x80801318
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80801330;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80801334
    r30 = *(8 + r1); // lwz @ 0x80801338
    r0 = *(0x14 + r1); // lwz @ 0x8080133C
    return;
}