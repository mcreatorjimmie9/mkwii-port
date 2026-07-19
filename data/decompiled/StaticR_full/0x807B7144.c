/* Function at 0x807B7144, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807B7144(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807B7150
    r31 = r3;
    r3 = *(0x3c + r3); // lwz @ 0x807B7158
    FUN_807C25C8(); // bl 0x807C25C8
    r3 = *(0x40 + r31); // lwz @ 0x807B7160
    FUN_807C8DF8(); // bl 0x807C8DF8
    r3 = *(0x48 + r31); // lwz @ 0x807B7168
    FUN_807D0CF0(); // bl 0x807D0CF0
    r0 = *(0x14 + r1); // lwz @ 0x807B7170
    r31 = *(0xc + r1); // lwz @ 0x807B7174
    return;
}