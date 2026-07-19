/* Function at 0x8061B200, size=36 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8061B200(void)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8061B208
    FUN_8061DFF8(); // bl 0x8061DFF8
    FUN_8060DFA4(); // bl 0x8060DFA4
    r0 = *(0x14 + r1); // lwz @ 0x8061B214
    return;
}