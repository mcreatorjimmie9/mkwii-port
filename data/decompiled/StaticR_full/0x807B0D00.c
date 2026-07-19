/* Function at 0x807B0D00, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807B0D00(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x807B0D14
    r29 = r3;
    r0 = *(0x5c + r3); // lbz @ 0x807B0D1C
    if (==) goto 0x0x807b0d7c;
    if (==) goto 0x0x807b0d58;
    r31 = r29;
    /* li r30, 0 */ // 0x807B0D34
    r3 = *(4 + r31); // lwz @ 0x807B0D38
    r4 = *(0x5d + r29); // lbz @ 0x807B0D3C
    FUN_805ECA00(); // bl 0x805ECA00
    r30 = r30 + 1; // 0x807B0D44
    r31 = r31 + 4; // 0x807B0D48
    if (<) goto 0x0x807b0d38;
    /* b 0x807b0d7c */ // 0x807B0D54
    r31 = r29;
    /* li r30, 0 */ // 0x807B0D5C
    r3 = *(4 + r31); // lwz @ 0x807B0D60
    r4 = *(0x5d + r29); // lbz @ 0x807B0D64
    FUN_805ECA18(); // bl 0x805ECA18
    r30 = r30 + 1; // 0x807B0D6C
    r31 = r31 + 4; // 0x807B0D70
    if (<) goto 0x0x807b0d60;
    r0 = *(0x24 + r1); // lwz @ 0x807B0D7C
    r31 = *(0x1c + r1); // lwz @ 0x807B0D80
    r30 = *(0x18 + r1); // lwz @ 0x807B0D84
    r29 = *(0x14 + r1); // lwz @ 0x807B0D88
    return;
}