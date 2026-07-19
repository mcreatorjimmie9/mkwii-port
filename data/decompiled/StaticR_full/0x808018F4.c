/* Function at 0x808018F4, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808018F4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x808018FC
    *(0x24 + r1) = r0; // stw @ 0x80801900
    /* li r0, 1 */ // 0x80801904
    *(0x1c + r1) = r31; // stw @ 0x80801908
    r31 = r3;
    *(0x1c + r3) = r0; // stw @ 0x80801910
    r3 = *(0x14 + r3); // lwz @ 0x80801914
    r12 = *(0 + r3); // lwz @ 0x80801918
    r12 = *(0xc + r12); // lwz @ 0x8080191C
    /* mtctr r12 */ // 0x80801920
    /* bctrl  */ // 0x80801924
    /* lis r4, 0 */ // 0x80801928
    /* lis r3, 0 */ // 0x8080192C
    /* lfs f0, 0(r4) */ // 0x80801930
    r7 = r4 + 0; // 0x80801934
    /* stfs f0, 0x20(r31) */ // 0x80801938
    /* lis r6, 0 */ // 0x8080193C
    /* lfs f2, 0(r3) */ // 0x80801940
    /* lis r5, 0 */ // 0x80801944
    /* lfs f0, 4(r7) */ // 0x80801948
    /* lis r3, 0 */ // 0x8080194C
    /* stfs f0, 0x24(r31) */ // 0x80801950
    /* li r4, 0x21a */ // 0x80801954
    /* lfs f1, 0(r6) */ // 0x80801958
    /* lfs f0, 8(r7) */ // 0x8080195C
    /* stfs f0, 0x28(r31) */ // 0x80801960
    /* stfs f2, 0x38(r31) */ // 0x80801964
    /* stfs f1, 0x3c(r31) */ // 0x80801968
    /* stfs f2, 0x40(r31) */ // 0x8080196C
    /* lfs f0, 0(r5) */ // 0x80801970
    /* stfs f0, 0x44(r31) */ // 0x80801974
    /* stfs f2, 0x48(r31) */ // 0x80801978
    /* stfs f2, 8(r1) */ // 0x8080197C
    r3 = *(0 + r3); // lwz @ 0x80801980
    /* stfs f1, 0xc(r1) */ // 0x80801984
    /* stfs f2, 0x10(r1) */ // 0x80801988
    FUN_8078BCD8(); // bl 0x8078BCD8
    r0 = *(0x24 + r1); // lwz @ 0x80801990
    r31 = *(0x1c + r1); // lwz @ 0x80801994
    return;
}