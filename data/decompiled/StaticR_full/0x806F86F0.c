/* Function at 0x806F86F0, size=40 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_806F86F0(int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r5, 1 */ // 0x806F86F8
    *(0x14 + r1) = r0; // stw @ 0x806F86FC
    FUN_806F8AC4(r5, r4); // bl 0x806F8AC4
    r0 = *(0x14 + r1); // lwz @ 0x806F8708
    return;
}