/* Function at 0x807A2420, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

void FUN_807A2420(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807A2428
    /* li r0, 2 */ // 0x807A242C
    *(8 + r3) = r0; // stw @ 0x807A2430
    FUN_807A276C(); // bl 0x807A276C
    /* lis r3, 0 */ // 0x807A2438
    r3 = *(0 + r3); // lwz @ 0x807A243C
    FUN_807A9CE4(r3); // bl 0x807A9CE4
    /* lis r3, 0 */ // 0x807A2444
    r3 = *(0 + r3); // lwz @ 0x807A2448
    FUN_807AAD0C(r3, r3); // bl 0x807AAD0C
    r0 = *(0x14 + r1); // lwz @ 0x807A2450
    return;
}