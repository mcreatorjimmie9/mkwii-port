/* Function at 0x807C7A2C, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807C7A2C(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807C7A34
    /* stfd f31, 8(r1) */ // 0x807C7A38
    r3 = *(4 + r3); // lwz @ 0x807C7A3C
    /* fmr f31, f1 */ // 0x807C7A40
    r3 = *(0 + r3); // lwz @ 0x807C7A44
    FUN_8061DFF8(); // bl 0x8061DFF8
    /* stfs f31, 0x1c(r3) */ // 0x807C7A4C
    /* lfd f31, 8(r1) */ // 0x807C7A50
    r0 = *(0x14 + r1); // lwz @ 0x807C7A54
    return;
}