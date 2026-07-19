/* Function at 0x807B5E74, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807B5E74(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807B5E80
    r31 = r3;
    FUN_8061DEE0(); // bl 0x8061DEE0
    if (==) goto 0x0x807b5e9c;
    r3 = r31 + 0x14; // 0x807B5E94
    /* b 0x807b5ea8 */ // 0x807B5E98
    r3 = r31;
    FUN_8061DC70(r3, r3); // bl 0x8061DC70
    r3 = r3 + 0x30; // 0x807B5EA4
    r0 = *(0x14 + r1); // lwz @ 0x807B5EA8
    r31 = *(0xc + r1); // lwz @ 0x807B5EAC
    return;
}