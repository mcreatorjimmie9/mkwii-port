/* Function at 0x807CB8AC, size=176 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807CB8AC(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x807CB8B8
    r31 = r3;
    r4 = r31 + 0x144; // 0x807CB8C0
    /* lfs f1, 0x144(r3) */ // 0x807CB8C4
    r5 = r31 + 0x150; // 0x807CB8C8
    /* lfs f0, 0x138(r3) */ // 0x807CB8CC
    /* lfs f3, 0x148(r3) */ // 0x807CB8D0
    /* fadds f4, f1, f0 */ // 0x807CB8D4
    /* lfs f2, 0x13c(r3) */ // 0x807CB8D8
    /* lfs f1, 0x14c(r3) */ // 0x807CB8DC
    /* lfs f0, 0x140(r3) */ // 0x807CB8E0
    /* fadds f2, f3, f2 */ // 0x807CB8E4
    /* stfs f4, 0x144(r3) */ // 0x807CB8E8
    /* fadds f0, f1, f0 */ // 0x807CB8EC
    /* stfs f2, 0x148(r3) */ // 0x807CB8F0
    /* stfs f0, 0x14c(r3) */ // 0x807CB8F4
    FUN_805A4464(r3); // bl 0x805A4464
    /* lfs f0, 0x114(r31) */ // 0x807CB900
    /* stfs f0, 8(r1) */ // 0x807CB908
    /* lfs f0, 0x124(r31) */ // 0x807CB914
    /* stfs f0, 0xc(r1) */ // 0x807CB918
    /* lfs f0, 0x134(r31) */ // 0x807CB91C
    /* stfs f0, 0x10(r1) */ // 0x807CB920
    FUN_805A4464(r5); // bl 0x805A4464
    /* lfs f0, 0x14(r1) */ // 0x807CB928
    r3 = r31;
    /* stfs f0, 0x114(r31) */ // 0x807CB930
    /* lfs f0, 0x18(r1) */ // 0x807CB934
    /* stfs f0, 0x124(r31) */ // 0x807CB938
    /* lfs f0, 0x1c(r1) */ // 0x807CB93C
    /* stfs f0, 0x134(r31) */ // 0x807CB940
    FUN_807CB95C(); // bl 0x807CB95C
    r0 = *(0x44 + r1); // lwz @ 0x807CB948
    r31 = *(0x3c + r1); // lwz @ 0x807CB94C
    return;
}