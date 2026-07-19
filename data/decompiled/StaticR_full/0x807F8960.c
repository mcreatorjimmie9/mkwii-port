/* Function at 0x807F8960, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807F8960(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807F8968
    *(0x24 + r1) = r0; // stw @ 0x807F896C
    *(0x1c + r1) = r31; // stw @ 0x807F8970
    r31 = r3;
    r4 = r31 + 0x30; // 0x807F8978
    /* lfs f0, 0(r5) */ // 0x807F897C
    r5 = r31 + 0xb8; // 0x807F8980
    /* lfs f1, 0xbc(r3) */ // 0x807F8984
    /* fsubs f0, f1, f0 */ // 0x807F8988
    /* stfs f0, 0xbc(r3) */ // 0x807F898C
    FUN_805A4464(r5, r3); // bl 0x805A4464
    r0 = *(0x2c + r31); // lhz @ 0x807F8998
    /* lfs f0, 0x10(r1) */ // 0x807F899C
    /* lfs f1, 0xc(r1) */ // 0x807F89A0
    r0 = r0 | 1; // 0x807F89A4
    /* lfs f2, 8(r1) */ // 0x807F89A8
    /* stfs f2, 0x30(r31) */ // 0x807F89AC
    *(0x2c + r31) = r0; // sth @ 0x807F89B0
    /* stfs f1, 0x34(r31) */ // 0x807F89B4
    /* stfs f0, 0x38(r31) */ // 0x807F89B8
    r31 = *(0x1c + r1); // lwz @ 0x807F89BC
    r0 = *(0x24 + r1); // lwz @ 0x807F89C0
    return;
}