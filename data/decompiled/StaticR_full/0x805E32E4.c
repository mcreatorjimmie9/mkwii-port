/* Function at 0x805E32E4, size=52 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_805E32E4(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805E32EC
    *(0x14 + r1) = r0; // stw @ 0x805E32F0
    r3 = *(0 + r3); // lwz @ 0x805E32F4
    FUN_80647284(r3); // bl 0x80647284
    /* lis r3, 0 */ // 0x805E32FC
    r3 = *(0 + r3); // lwz @ 0x805E3300
    FUN_80698288(r3); // bl 0x80698288
    r0 = *(0x14 + r1); // lwz @ 0x805E3308
    return;
}