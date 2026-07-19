/* Function at 0x8061B1DC, size=36 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8061B1DC(void)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8061B1E4
    FUN_8061DFF8(); // bl 0x8061DFF8
    FUN_8060DE84(); // bl 0x8060DE84
    r0 = *(0x14 + r1); // lwz @ 0x8061B1F0
    return;
}