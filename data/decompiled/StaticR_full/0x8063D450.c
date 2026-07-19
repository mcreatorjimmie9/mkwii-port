/* Function at 0x8063D450, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8063D450(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0 */ // 0x8063D458
    *(0x14 + r1) = r0; // stw @ 0x8063D45C
    r3 = *(0x10 + r3); // lwz @ 0x8063D460
    FUN_805F59D8(r4); // bl 0x805F59D8
    /* lis r3, 0 */ // 0x8063D468
    /* li r4, 0 */ // 0x8063D46C
    r3 = *(0 + r3); // lwz @ 0x8063D470
    r3 = *(0 + r3); // lwz @ 0x8063D474
    FUN_80685950(r3, r4); // bl 0x80685950
    r0 = *(0x14 + r1); // lwz @ 0x8063D47C
    return;
}