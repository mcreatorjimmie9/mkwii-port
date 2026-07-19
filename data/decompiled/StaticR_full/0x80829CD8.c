/* Function at 0x80829CD8, size=84 bytes */
/* Stack frame: 0 bytes */

int FUN_80829CD8(int r3, int r4)
{
    if (==) goto 0x0x80829cfc;
    r0 = *(4 + r3); // lwz @ 0x80829CE0
    /* lis r3, 0 */ // 0x80829CE4
    r3 = r3 + 0; // 0x80829CE8
    /* mulli r0, r0, 0x74 */ // 0x80829CEC
    r3 = r3 + r0; // 0x80829CF0
    /* lfs f0, 0x3c(r3) */ // 0x80829CF4
    /* b 0x80829d14 */ // 0x80829CF8
    r0 = *(4 + r3); // lwz @ 0x80829CFC
    /* lis r3, 0 */ // 0x80829D00
    r3 = r3 + 0; // 0x80829D04
    /* mulli r0, r0, 0x74 */ // 0x80829D08
    r3 = r3 + r0; // 0x80829D0C
    /* lfs f0, 0x40(r3) */ // 0x80829D10
    /* lis r3, 0 */ // 0x80829D14
    r3 = r3 + 0; // 0x80829D18
    r3 = r3 + r0; // 0x80829D1C
    /* lfs f1, 0x48(r3) */ // 0x80829D20
    /* fmuls f1, f1, f0 */ // 0x80829D24
    return;
}