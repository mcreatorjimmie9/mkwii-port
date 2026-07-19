/* Function at 0x8079C2EC, size=32 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8079C2EC(void)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8079C2F4
    FUN_807A03C8(); // bl 0x807A03C8
    r0 = *(0x14 + r1); // lwz @ 0x8079C2FC
    return;
}