/* Function at 0x805E1B08, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

void FUN_805E1B08(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805E1B10
    *(0x14 + r1) = r0; // stw @ 0x805E1B14
    r3 = *(0 + r3); // lwz @ 0x805E1B18
    FUN_80647284(r3); // bl 0x80647284
    /* lis r3, 0 */ // 0x805E1B20
    r3 = *(0 + r3); // lwz @ 0x805E1B24
    FUN_80698288(r3); // bl 0x80698288
    /* lis r3, 0 */ // 0x805E1B2C
    r3 = *(0 + r3); // lwz @ 0x805E1B30
    FUN_807DEB78(r3, r3); // bl 0x807DEB78
    r0 = *(0x14 + r1); // lwz @ 0x805E1B38
    return;
}