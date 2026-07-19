/* Function at 0x8089F550, size=40 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_8089F550(int r3, int r5)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x8089F558
    r3 = *(4 + r3); // lwz @ 0x8089F560
    FUN_808B04F0(r5); // bl 0x808B04F0
    r0 = *(0x24 + r1); // lwz @ 0x8089F568
    return;
}