/* Function at 0x80890B14, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80890B14(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0x2710 */ // 0x80890B20
    *(0x1c + r1) = r31; // stw @ 0x80890B24
    /* lis r31, 0 */ // 0x80890B28
    r31 = r31 + 0; // 0x80890B2C
    *(0x18 + r1) = r30; // stw @ 0x80890B30
    r30 = r3;
    r5 = *(2 + r31); // lha @ 0x80890B38
    *(0xb8 + r3) = r5; // stw @ 0x80890B3C
    r4 = *(0x2c + r3); // lhz @ 0x80890B40
    /* lfs f0, 0x18(r31) */ // 0x80890B44
    r4 = r4 | 1; // 0x80890B48
    /* stfs f0, 0x34(r3) */ // 0x80890B4C
    *(0x2c + r3) = r4; // sth @ 0x80890B50
    *(0xc0 + r3) = r0; // stw @ 0x80890B54
    FUN_807E5FFC(); // bl 0x807E5FFC
    /* lfs f0, 0x3c(r31) */ // 0x80890B5C
    /* fctiwz f0, f0 */ // 0x80890B60
    /* stfd f0, 8(r1) */ // 0x80890B64
    r0 = *(0xc + r1); // lwz @ 0x80890B68
    *(0x10c + r30) = r0; // stw @ 0x80890B6C
    r31 = *(0x1c + r1); // lwz @ 0x80890B70
    r30 = *(0x18 + r1); // lwz @ 0x80890B74
    r0 = *(0x24 + r1); // lwz @ 0x80890B78
    return;
}