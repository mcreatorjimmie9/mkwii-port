/* Function at 0x807CB570, size=104 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807CB570(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    r5 = r4;
    *(0x34 + r1) = r0; // stw @ 0x807CB57C
    *(0x2c + r1) = r31; // stw @ 0x807CB584
    r31 = r3;
    /* lfs f0, 0x114(r3) */ // 0x807CB58C
    /* stfs f0, 0x14(r1) */ // 0x807CB590
    /* lfs f0, 0x124(r3) */ // 0x807CB594
    /* stfs f0, 0x18(r1) */ // 0x807CB598
    /* lfs f0, 0x134(r3) */ // 0x807CB59C
    /* stfs f0, 0x1c(r1) */ // 0x807CB5A4
    FUN_805A4464(r3); // bl 0x805A4464
    /* lfs f0, 8(r1) */ // 0x807CB5AC
    /* stfs f0, 0x114(r31) */ // 0x807CB5B0
    /* lfs f0, 0xc(r1) */ // 0x807CB5B4
    /* stfs f0, 0x124(r31) */ // 0x807CB5B8
    /* lfs f0, 0x10(r1) */ // 0x807CB5BC
    /* stfs f0, 0x134(r31) */ // 0x807CB5C0
    r31 = *(0x2c + r1); // lwz @ 0x807CB5C4
    r0 = *(0x34 + r1); // lwz @ 0x807CB5C8
    return;
}