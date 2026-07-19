/* Function at 0x8063CC14, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8063CC14(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x8063CC1C
    *(0x14 + r1) = r0; // stw @ 0x8063CC20
    r3 = *(0 + r3); // lwz @ 0x8063CC24
    r3 = *(0x30 + r3); // lwz @ 0x8063CC28
    FUN_805DE444(r3); // bl 0x805DE444
    /* lis r3, 0 */ // 0x8063CC30
    r3 = *(0 + r3); // lwz @ 0x8063CC34
    FUN_8070CB8C(r3); // bl 0x8070CB8C
    r0 = *(0x14 + r1); // lwz @ 0x8063CC3C
    return;
}