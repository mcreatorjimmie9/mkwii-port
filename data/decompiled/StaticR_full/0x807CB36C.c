/* Function at 0x807CB36C, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807CB36C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807CB378
    r31 = r3;
    FUN_8089F578(); // bl 0x8089F578
    r3 = r31 + 0xb0; // 0x807CB384
    FUN_807CF000(r3); // bl 0x807CF000
    /* lis r5, 0 */ // 0x807CB38C
    /* lis r4, 0 */ // 0x807CB390
    /* lis r3, 0 */ // 0x807CB394
    /* lfs f1, 0(r4) */ // 0x807CB398
    r5 = r5 + 0; // 0x807CB39C
    /* lfs f0, 0(r3) */ // 0x807CB3A0
    /* li r0, 0 */ // 0x807CB3A4
    *(0 + r31) = r5; // stw @ 0x807CB3A8
    r4 = r5 + 0xec; // 0x807CB3AC
    r3 = r31;
    *(0xe4 + r31) = r4; // stw @ 0x807CB3B4
    *(0xe8 + r31) = r0; // stw @ 0x807CB3B8
    *(0xec + r31) = r0; // stw @ 0x807CB3BC
    /* stfs f1, 0x168(r31) */ // 0x807CB3C0
    /* stfs f0, 0x16c(r31) */ // 0x807CB3C4
    r31 = *(0xc + r1); // lwz @ 0x807CB3C8
    r0 = *(0x14 + r1); // lwz @ 0x807CB3CC
    return;
}