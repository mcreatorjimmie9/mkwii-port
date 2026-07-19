/* Function at 0x80858E5C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80858E5C(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80858E64
    r0 = *(0x148 + r3); // lbz @ 0x80858E68
    if (==) goto 0x0x80858e94;
    r0 = *(0xd5 + r3); // lbz @ 0x80858E74
    if (==) goto 0x0x80858e94;
    r3 = *(0x2e4 + r3); // lwz @ 0x80858E80
    r3 = r3 + 0x48; // 0x80858E84
    FUN_805E3430(r3); // bl 0x805E3430
    /* li r3, 1 */ // 0x80858E8C
    /* b 0x80858e98 */ // 0x80858E90
    /* li r3, 0 */ // 0x80858E94
    r0 = *(0x14 + r1); // lwz @ 0x80858E98
}