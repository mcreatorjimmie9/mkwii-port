/* Function at 0x8061B1B8, size=36 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8061B1B8(void)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8061B1C0
    FUN_8061DFF8(); // bl 0x8061DFF8
    FUN_8060DD58(); // bl 0x8060DD58
    r0 = *(0x14 + r1); // lwz @ 0x8061B1CC
    return;
}