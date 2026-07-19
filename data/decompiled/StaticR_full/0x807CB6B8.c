/* Function at 0x807CB6B8, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807CB6B8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807CB6C0
    /* stfd f31, 8(r1) */ // 0x807CB6C4
    r3 = *(8 + r3); // lwz @ 0x807CB6C8
    /* fmr f31, f1 */ // 0x807CB6CC
    /* li r4, 0 */ // 0x807CB6D0
    r3 = *(0x28 + r3); // lwz @ 0x807CB6D4
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807CB6DC
    /* fmr f1, f31 */ // 0x807CB6E0
    r12 = *(0x1c + r12); // lwz @ 0x807CB6E4
    /* mtctr r12 */ // 0x807CB6E8
    /* bctrl  */ // 0x807CB6EC
    r0 = *(0x14 + r1); // lwz @ 0x807CB6F0
    /* lfd f31, 8(r1) */ // 0x807CB6F4
    return;
}